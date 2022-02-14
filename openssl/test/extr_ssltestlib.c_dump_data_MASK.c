
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_24 ;

__attribute__((used)) static void FUNC_2(const char *VAR_25, int VAR_26)
{
    int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
    unsigned char *VAR_35;

    FUNC_1("---- START OF PACKET ----\n");

    VAR_27 = VAR_26;
    VAR_35 = (unsigned char *)VAR_25;

    while (VAR_27 > 0) {
        if (VAR_27 != VAR_26)
            FUNC_1("*\n");
        FUNC_1("*---- START OF RECORD ----\n");
        if (VAR_27 < VAR_1) {
            FUNC_1("*---- RECORD TRUNCATED ----\n");
            break;
        }
        VAR_29 = VAR_35[VAR_14];
        FUNC_1("** Record Content-type: %d\n", VAR_29);
        FUNC_1("** Record Version: %02x%02x\n",
               VAR_35[VAR_21], VAR_35[VAR_22]);
        VAR_34 = (VAR_35[VAR_15] << 8) | VAR_35[VAR_16];
        FUNC_1("** Record Epoch: %d\n", VAR_34);
        FUNC_1("** Record Sequence: ");
        for (VAR_28 = VAR_20; VAR_28 <= VAR_19; VAR_28++)
            FUNC_1("%02x", VAR_35[VAR_28]);
        VAR_30 = (VAR_35[VAR_17] << 8) | VAR_35[VAR_18];
        FUNC_1("\n** Record Length: %d\n", VAR_30);


        VAR_35 += VAR_1;
        VAR_27 -= VAR_1;
        if (VAR_29 == VAR_23) {
            FUNC_1("**---- START OF HANDSHAKE MESSAGE FRAGMENT ----\n");
            if (VAR_34 > 0) {
                FUNC_1("**---- HANDSHAKE MESSAGE FRAGMENT ENCRYPTED ----\n");
            } else if (VAR_27 < VAR_0
                    || VAR_30 < VAR_0) {
                FUNC_1("**---- HANDSHAKE MESSAGE FRAGMENT TRUNCATED ----\n");
            } else {
                FUNC_1("*** Message Type: %d\n", VAR_35[VAR_13]);
                VAR_31 = (VAR_35[VAR_8] << 16) | (VAR_35[VAR_10] << 8)
                         | VAR_35[VAR_9];
                FUNC_1("*** Message Length: %d\n", VAR_31);
                FUNC_1("*** Message sequence: %d\n",
                       (VAR_35[VAR_11] << 8) | VAR_35[VAR_12]);
                VAR_32 = (VAR_35[VAR_5] << 16)
                          | (VAR_35[VAR_7] << 8)
                          | VAR_35[VAR_6];
                FUNC_1("*** Message Fragment offset: %d\n", VAR_32);
                VAR_33 = (VAR_35[VAR_2] << 16)
                          | (VAR_35[VAR_4] << 8)
                          | VAR_35[VAR_3];
                FUNC_1("*** Message Fragment len: %d\n", VAR_33);
                if (VAR_32 + VAR_33 > VAR_31)
                    FUNC_1("***---- HANDSHAKE MESSAGE FRAGMENT INVALID ----\n");
                else if (VAR_30 < VAR_33)
                    FUNC_1("**---- HANDSHAKE MESSAGE FRAGMENT TRUNCATED ----\n");
                else
                    FUNC_1("**---- END OF HANDSHAKE MESSAGE FRAGMENT ----\n");
            }
        }
        if (VAR_27 < VAR_30) {
            FUNC_1("*---- RECORD TRUNCATED ----\n");
            VAR_27 = 0;
        } else {
            VAR_35 += VAR_30;
            VAR_27 -= VAR_30;
            FUNC_1("*---- END OF RECORD ----\n");
        }
    }
    FUNC_1("---- END OF PACKET ----\n\n");
    FUNC_0(VAR_24);
}
