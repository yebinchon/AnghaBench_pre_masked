
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeParser {int dummy; } ;
struct RangeList {int dummy; } ;
struct Range6List {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int,char*,char const*,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,char const*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 size_t FUNC_5 (unsigned char*,int,int,int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (struct RangeList*,unsigned int,unsigned int) ;
 int FUNC_8 (struct RangeList*) ;
 struct RangeParser* FUNC_9 () ;
 int FUNC_10 (struct RangeParser*,unsigned long long*,unsigned long long*) ;
 int FUNC_11 (struct RangeParser*,unsigned char const*,size_t*,int,unsigned int*,unsigned int*) ;
 int VAR_0 ;

int
FUNC_12(const char *VAR_1, struct RangeList *VAR_2, struct Range6List *VAR_3)
{
    struct RangeParser *VAR_4;
    unsigned char VAR_5[65536];
    FILE *VAR_6 = ((void*)0);
    int VAR_7;
    bool VAR_8 = 0;
    unsigned VAR_9 = 0;





    VAR_7 = FUNC_3(&VAR_6, VAR_1, "rb");
    if (VAR_7 || VAR_6 == ((void*)0)) {
        FUNC_6(VAR_1);
        FUNC_1(1);
    }





    VAR_4 = FUNC_9();





    while (!VAR_8) {
        size_t VAR_10;
        size_t VAR_11;

        VAR_10 = FUNC_5(VAR_5, 1, sizeof(VAR_5), VAR_6);
        if (VAR_10 <= 0)
            break;

        VAR_11 = 0;
        while (VAR_11 < VAR_10) {
            int VAR_12;
            unsigned VAR_13, VAR_14;

            VAR_12 = FUNC_11(VAR_4, VAR_5, &VAR_11, VAR_10, &VAR_13, &VAR_14);
            if (VAR_12 < 0) {
                unsigned long long VAR_15, VAR_16;
                FUNC_10(VAR_4, &VAR_15, &VAR_16);
                FUNC_4(VAR_0, "%s:%llu:%llu: parse err\n", VAR_1, VAR_15, VAR_16);
                VAR_8 = 1;
                break;
            } else if (VAR_12 == 1) {
                FUNC_7(VAR_2, VAR_13, VAR_14);
                VAR_9++;
            } else if (VAR_12 == 0) {
                if (VAR_11 < VAR_10)
                    FUNC_4(VAR_0, "[-] fail\n");
            }
        }
    }
    FUNC_2(VAR_6);



    if (!VAR_8) {
        int VAR_17;
        size_t VAR_18 = 0;
        unsigned VAR_19, VAR_20;
        VAR_17 = FUNC_11(VAR_4, (const unsigned char *)"\n", &VAR_18, 1, &VAR_19, &VAR_20);
        if (VAR_17 < 0) {
            unsigned long long VAR_21, VAR_22;
            FUNC_10(VAR_4, &VAR_21, &VAR_22);
            FUNC_4(VAR_0, "%s:%llu:%llu: parse err\n", VAR_1, VAR_21, VAR_22);
            VAR_8 = 1;
        } else if (VAR_17 == 1) {
            FUNC_7(VAR_2, VAR_19, VAR_20);
            VAR_9++;
        }
    }

    FUNC_0(1, "[+] %s: %u addresses read\n", VAR_1, VAR_9);



    FUNC_8(VAR_2);

    if (VAR_8)
        return -1;
    else
        return 0;
}
