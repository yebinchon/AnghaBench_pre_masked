
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int utf8_char_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {unsigned int cc_size; scalar_t__* cc_data; int timestamp; } ;
typedef TYPE_1__ scc_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,unsigned int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int const*,char*,int*,...) ;
 size_t FUNC_3 (int const*) ;
 size_t FUNC_4 (int const*,size_t) ;

size_t FUNC_5(scc_t** VAR_0, const utf8_char_t* VAR_1)
{
    size_t VAR_2, VAR_3 = 0;
    int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;

    if (0 == VAR_1) {
        return 0;
    }

    if ((*VAR_0)) {
        (*VAR_0)->cc_size = 0;
    }


    if (2 == FUNC_2(VAR_1, "Scenarist_SCC V%1d.%1d", &VAR_4, &VAR_5)) {
        VAR_1 += 18, VAR_3 += 18;

        if (1 != VAR_4 || 0 != VAR_5) {
            return 0;
        }
    }


    for (;;) {
        VAR_2 = FUNC_3(VAR_1);

        if (0 == VAR_2 || 0 != FUNC_4(VAR_1, VAR_2)) {
            break;
        }

        VAR_1 += VAR_2;
        VAR_3 += VAR_2;
    }

    if (4 == FUNC_2(VAR_1, "%2d:%2d:%2d%*1[:;]%2d", &VAR_6, &VAR_7, &VAR_8, &VAR_9)) {
        VAR_1 += 12, VAR_3 += 12;

        VAR_2 = FUNC_3(VAR_1);
        VAR_2 = FUNC_4(VAR_1, VAR_2);
        unsigned int VAR_11 = 1 + ((unsigned int)VAR_2 / 5);
        (*VAR_0) = FUNC_0((*VAR_0), VAR_11 * 15 / 10);
        (*VAR_0)->timestamp = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
        (*VAR_0)->cc_size = 0;

        while ((*VAR_0)->cc_size < VAR_11 && 1 == FUNC_2(VAR_1, "%04x", &VAR_10)) {
            (*VAR_0)->cc_data[(*VAR_0)->cc_size] = (uint16_t)VAR_10;
            (*VAR_0)->cc_size += 1;
            VAR_1 += 5, VAR_3 += 5;
        }
    }

    return VAR_3;
}
