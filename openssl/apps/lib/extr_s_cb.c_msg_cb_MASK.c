
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_2 (int,int ,char*) ;
 int VAR_9 ;

void FUNC_3(int VAR_10, int VAR_11, int VAR_12, const void *VAR_13,
            size_t VAR_14, SSL *VAR_15, void *VAR_16)
{
    BIO *VAR_17 = VAR_16;
    const char *VAR_18 = VAR_10 ? ">>>" : "<<<";
    const char *VAR_19 = FUNC_2(VAR_11, VAR_9, "???");
    const char *VAR_20 = "", *VAR_21 = "", *VAR_22 = "";
    const unsigned char* VAR_23 = VAR_13;

    if (VAR_11 == VAR_2 ||
        VAR_11 == VAR_6 ||
        VAR_11 == VAR_3 ||
        VAR_11 == VAR_4 ||
        VAR_11 == VAR_5 ||
        VAR_11 == VAR_1 || VAR_11 == VAR_0) {
        switch (VAR_12) {
        case 20:
            VAR_20 = ", ChangeCipherSpec";
            break;
        case 21:
            VAR_20 = ", Alert";
            VAR_21 = ", ???";
            if (VAR_14 == 2) {
                switch (VAR_23[0]) {
                case 1:
                    VAR_21 = ", warning";
                    break;
                case 2:
                    VAR_21 = ", fatal";
                    break;
                }
                VAR_22 = FUNC_2((int)VAR_23[1], VAR_7, " ???");
            }
            break;
        case 22:
            VAR_20 = ", Handshake";
            VAR_21 = "???";
            if (VAR_14 > 0)
                VAR_21 = FUNC_2((int)VAR_23[0], VAR_8, "???");
            break;
        case 23:
            VAR_20 = ", ApplicationData";
            break;
        }
    }

    FUNC_1(VAR_17, "%s %s%s [length %04lx]%s%s\n", VAR_18, VAR_19,
               VAR_20, (unsigned long)VAR_14, VAR_21,
               VAR_22);

    if (VAR_14 > 0) {
        size_t VAR_24, VAR_25;

        FUNC_1(VAR_17, "   ");
        VAR_24 = VAR_14;
        for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++) {
            if (VAR_25 % 16 == 0 && VAR_25 > 0)
                FUNC_1(VAR_17, "\n   ");
            FUNC_1(VAR_17, " %02x", ((const unsigned char *)VAR_13)[VAR_25]);
        }
        if (VAR_25 < VAR_14)
            FUNC_1(VAR_17, " ...");
        FUNC_1(VAR_17, "\n");
    }
    (void)FUNC_0(VAR_17);
}
