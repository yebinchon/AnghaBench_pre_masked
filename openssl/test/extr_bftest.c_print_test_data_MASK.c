
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 char* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int** VAR_7 ;
 int** VAR_8 ;
 int* VAR_9 ;
 int** VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int** VAR_13 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void)
{
    unsigned int VAR_14, VAR_15;

    FUNC_0("ecb test data\n");
    FUNC_0("key bytes\t\tclear bytes\t\tcipher bytes\n");
    for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
        for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
            FUNC_0("%02X", VAR_8[VAR_14][VAR_15]);
        FUNC_0("\t");
        for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
            FUNC_0("%02X", VAR_13[VAR_14][VAR_15]);
        FUNC_0("\t");
        for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
            FUNC_0("%02X", VAR_7[VAR_14][VAR_15]);
        FUNC_0("\n");
    }

    FUNC_0("set_key test data\n");
    FUNC_0("data[8]= ");
    for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
        FUNC_0("%02X", VAR_9[VAR_15]);
    FUNC_0("\n");
    for (VAR_14 = 0; VAR_14 < VAR_0 - 1; VAR_14++) {
        FUNC_0("c=");
        for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
            FUNC_0("%02X", VAR_10[VAR_14][VAR_15]);
        FUNC_0(" k[%2u]=", VAR_14 + 1);
        for (VAR_15 = 0; VAR_15 < VAR_14 + 1; VAR_15++)
            FUNC_0("%02X", VAR_11[VAR_15]);
        FUNC_0("\n");
    }

    FUNC_0("\nchaining mode test data\n");
    FUNC_0("key[16]   = ");
    for (VAR_15 = 0; VAR_15 < 16; VAR_15++)
        FUNC_0("%02X", VAR_4[VAR_15]);
    FUNC_0("\niv[8]     = ");
    for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
        FUNC_0("%02X", VAR_3[VAR_15]);
    FUNC_0("\ndata[%d]  = '%s'", (int)FUNC_1(VAR_2) + 1, VAR_2);
    FUNC_0("\ndata[%d]  = ", (int)FUNC_1(VAR_2) + 1);
    for (VAR_15 = 0; VAR_15 < FUNC_1(VAR_2) + 1; VAR_15++)
        FUNC_0("%02X", VAR_2[VAR_15]);
    FUNC_0("\n");
    FUNC_0("cbc cipher text\n");
    FUNC_0("cipher[%d]= ", 32);
    for (VAR_15 = 0; VAR_15 < 32; VAR_15++)
        FUNC_0("%02X", VAR_5[VAR_15]);
    FUNC_0("\n");

    FUNC_0("cfb64 cipher text\n");
    FUNC_0("cipher[%d]= ", (int)FUNC_1(VAR_2) + 1);
    for (VAR_15 = 0; VAR_15 < FUNC_1(VAR_2) + 1; VAR_15++)
        FUNC_0("%02X", VAR_6[VAR_15]);
    FUNC_0("\n");

    FUNC_0("ofb64 cipher text\n");
    FUNC_0("cipher[%d]= ", (int)FUNC_1(VAR_2) + 1);
    for (VAR_15 = 0; VAR_15 < FUNC_1(VAR_2) + 1; VAR_15++)
        FUNC_0("%02X", VAR_12[VAR_15]);
    FUNC_0("\n");
    return 0;
}
