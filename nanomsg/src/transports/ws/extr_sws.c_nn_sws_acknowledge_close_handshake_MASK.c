
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct nn_sws {size_t inmsg_current_chunk_len; int * inmsg_current_chunk_buf; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nn_sws*,int,char*) ;
 int FUNC_3 (int *,size_t) ;

__attribute__((used)) static void FUNC_4 (struct nn_sws *VAR_10)
{
    uint8_t *VAR_11;
    uint16_t VAR_12;
    int VAR_13;
    size_t VAR_14;

    VAR_14 = VAR_10->inmsg_current_chunk_len;
    VAR_11 = VAR_10->inmsg_current_chunk_buf;


    if (VAR_14 == 0) {
        FUNC_2 (VAR_10, VAR_9, "");
        return;
    }



    FUNC_0 (VAR_14 >= VAR_0);
    VAR_14 -= VAR_0;
    VAR_11 += VAR_0;



    while (VAR_14 > 0) {
        VAR_13 = FUNC_3 (VAR_11, VAR_14);

        if (VAR_13 > 0) {

            FUNC_0 (VAR_14 >= (size_t) VAR_13);
            VAR_14 -= VAR_13;
            VAR_11 += VAR_13;
            continue;
        }
        else {

            FUNC_2 (VAR_10, VAR_4,
                "Invalid UTF-8 sent as Close Reason.");
            return;
        }
    }


    FUNC_0 (VAR_14 == 0);

    VAR_12 = FUNC_1 (VAR_10->inmsg_current_chunk_buf);

    if (VAR_12 == VAR_9 ||
        VAR_12 == VAR_8 ||
        VAR_12 == VAR_4 ||
        VAR_12 == VAR_7 ||
        VAR_12 == VAR_2 ||
        VAR_12 == VAR_3 ||
        VAR_12 == VAR_6 ||
        VAR_12 == VAR_1 ||
        VAR_12 == VAR_5 ||
        (VAR_12 >= 3000 && VAR_12 <= 3999) ||
        (VAR_12 >= 4000 && VAR_12 <= 4999)) {

        FUNC_2 (VAR_10, (int) VAR_12, "");
    }
    else {
        FUNC_2 (VAR_10, VAR_4,
            "Unrecognized close code.");
    }

    return;
}
