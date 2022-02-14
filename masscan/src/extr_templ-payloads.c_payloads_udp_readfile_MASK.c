
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {int member_0; } ;
struct PayloadsUDP {int dummy; } ;
typedef int ports ;
typedef int line ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int ,char*,char const*,unsigned int) ;
 int FUNC_1 (int *,unsigned int*,char*,int) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char const*,scalar_t__) ;
 int FUNC_5 (struct RangeList*,int ,int) ;
 char* FUNC_6 (unsigned char*,size_t*,int,char*) ;
 int FUNC_7 (struct PayloadsUDP*,unsigned char*,size_t,struct RangeList*,unsigned int,int ) ;
 char* FUNC_8 (struct RangeList*,char*,unsigned int*,int ) ;
 int FUNC_9 (struct RangeList*) ;
 int VAR_0 ;
 scalar_t__ FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (char*,int) ;

void
FUNC_13(FILE *VAR_1, const char *VAR_2,
                   struct PayloadsUDP *VAR_3)
{
    char VAR_4[16384];
    unsigned VAR_5 = 0;


    VAR_4[0] = '\0';

    for (;;) {
        unsigned VAR_6 = 0;
        const char *VAR_7;
        struct RangeList VAR_8[1] = {{0}};
        unsigned VAR_9 = 0x10000;
        unsigned char VAR_10[1500] = {0};
        size_t VAR_11 = 0;

        FUNC_5(VAR_8, 0, sizeof(VAR_8[0]));


        if (!FUNC_1(VAR_1, &VAR_5, VAR_4, sizeof(VAR_4)))
            break;

        if (FUNC_3(VAR_4, "udp", 3) != 0) {
            FUNC_0(VAR_0, "%s:%u: syntax error, expected \"udp\".\n",
                VAR_2, VAR_5);
            goto end;
        } else
            FUNC_4(VAR_4, VAR_4+3, FUNC_10(VAR_4));
        FUNC_12(VAR_4, sizeof(VAR_4));



        if (!FUNC_1(VAR_1, &VAR_5, VAR_4, sizeof(VAR_4)))
            break;
        VAR_7 = FUNC_8(VAR_8, VAR_4, &VAR_6, 0);
        if (VAR_6) {
            FUNC_0(VAR_0, "%s:%u: syntax error, expected ports\n",
                VAR_2, VAR_5);
            goto end;
        }
        FUNC_4(VAR_4, VAR_7, FUNC_10(VAR_7)+1);
        FUNC_12(VAR_4, sizeof(VAR_4));


        for (;;) {
            FUNC_12(VAR_4, sizeof(VAR_4));
            if (!FUNC_1(VAR_1, &VAR_5, VAR_4, sizeof(VAR_4)))
                break;
            if (VAR_4[0] != '\"')
                break;

            VAR_7 = FUNC_6(VAR_10, &VAR_11, sizeof(VAR_10), VAR_4);
            FUNC_4(VAR_4, VAR_7, FUNC_10(VAR_7)+1);
            FUNC_12(VAR_4, sizeof(VAR_4));
        }


        if (FUNC_3(VAR_4, "source", 6) == 0) {
            FUNC_4(VAR_4, VAR_4+6, FUNC_10(VAR_4+5));
            FUNC_12(VAR_4, sizeof(VAR_4));
            if (!FUNC_2(VAR_4[0])) {
                FUNC_0(VAR_0, "%s:%u: expected source port\n",
                        VAR_2, VAR_5);
                goto end;
            }
            VAR_9 = (unsigned)FUNC_11(VAR_4, 0, 0);
            VAR_4[0] = '\0';
        }





  if (VAR_11)
   FUNC_7(VAR_3, VAR_10, VAR_11, VAR_8, VAR_9, 0);

        FUNC_9(VAR_8);
    }

end:
    ;
}
