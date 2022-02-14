
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nn_sws {size_t inmsg_current_chunk_len; int utf8_code_pt_fragment_len; int pipebase; int instate; scalar_t__ is_final_frame; int * utf8_code_pt_fragment; int * inmsg_current_chunk_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nn_sws*,int ,char*) ;
 int FUNC_5 (struct nn_sws*) ;
 int FUNC_6 (int *,size_t) ;

__attribute__((used)) static void FUNC_7 (struct nn_sws *VAR_5)
{
    uint8_t *VAR_6;
    int VAR_7;
    size_t VAR_8;

    VAR_8 = VAR_5->inmsg_current_chunk_len;
    VAR_6 = VAR_5->inmsg_current_chunk_buf;




    if (VAR_5->utf8_code_pt_fragment_len) {

        FUNC_2 (VAR_5->utf8_code_pt_fragment_len <
            VAR_4);



        while (VAR_8 > 0) {
            VAR_5->utf8_code_pt_fragment [VAR_5->utf8_code_pt_fragment_len] = *VAR_6;
            VAR_5->utf8_code_pt_fragment_len++;
            VAR_6++;
            VAR_8--;

            VAR_7 = FUNC_6 (VAR_5->utf8_code_pt_fragment,
                VAR_5->utf8_code_pt_fragment_len);

            if (VAR_7 > 0) {

                break;
            }
            else if (VAR_7 == VAR_3) {
                FUNC_4 (VAR_5, VAR_0,
                    "Invalid UTF-8 code point split on previous frame.");
                return;
            }
            else if (VAR_7 == VAR_2) {
                if (VAR_5->is_final_frame) {
                    FUNC_4 (VAR_5, VAR_0,
                        "Truncated UTF-8 payload with invalid code point.");
                    return;
                }
                else {

                    FUNC_5 (VAR_5);
                    return;
                }
            }
        }
    }

    if (VAR_5->utf8_code_pt_fragment_len >= VAR_4)
        FUNC_2 (0);

    while (VAR_8 > 0) {
        VAR_7 = FUNC_6 (VAR_6, VAR_8);

        if (VAR_7 > 0) {

            FUNC_2 (VAR_8 >= (size_t) VAR_7);
            VAR_8 -= VAR_7;
            VAR_6 += VAR_7;
            continue;
        }
        else if (VAR_7 == VAR_3) {
            VAR_5->utf8_code_pt_fragment_len = 0;
            FUNC_1 (VAR_5->utf8_code_pt_fragment, 0,
                VAR_4);
            FUNC_4 (VAR_5, VAR_0,
                "Invalid UTF-8 code point in payload.");
            return;
        }
        else if (VAR_7 == VAR_2) {
            FUNC_2 (VAR_8 < VAR_4);
            VAR_5->utf8_code_pt_fragment_len = VAR_8;
            FUNC_0 (VAR_5->utf8_code_pt_fragment, VAR_6, VAR_8);
            if (VAR_5->is_final_frame) {
                FUNC_4 (VAR_5, VAR_0,
                    "Truncated UTF-8 payload with invalid code point.");
            }
            else {


                FUNC_5 (VAR_5);
            }
            return;
        }
    }


    FUNC_2 (VAR_8 == 0);

    VAR_5->utf8_code_pt_fragment_len = 0;
    FUNC_1 (VAR_5->utf8_code_pt_fragment, 0, VAR_4);

    if (VAR_5->is_final_frame) {
        VAR_5->instate = VAR_1;
        FUNC_3 (&VAR_5->pipebase);
    }
    else {
        FUNC_5 (VAR_5);
    }

    return;
}
