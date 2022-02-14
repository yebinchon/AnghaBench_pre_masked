
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned char*,unsigned char,int,int *) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int *,int,int ) ;
 unsigned short FUNC_4 (unsigned short) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(FILE *VAR_3, unsigned int *VAR_4,
                          unsigned int *VAR_5, unsigned int *VAR_6, int *VAR_7)
{
    int VAR_8;
    unsigned char *VAR_9 ;
    unsigned char VAR_10, VAR_11, VAR_12;
    unsigned char VAR_13, VAR_14;
    unsigned short VAR_15, VAR_16, VAR_17;
    unsigned short VAR_18, VAR_19, VAR_20, VAR_21;

    if (!VAR_4 || !VAR_5 || !VAR_6 || !VAR_7) {
        return 0;
    }
    VAR_9 = (unsigned char*)FUNC_5(18);

    if (FUNC_1(VAR_9, VAR_1, 1, VAR_3) != 1) {
        FUNC_0(VAR_2,
                "\nError: fread return a number of element different from the expected.\n");
        FUNC_2(VAR_9);
        return 0 ;
    }
    VAR_10 = (unsigned char)VAR_9[0];
    VAR_11 = (unsigned char)VAR_9[1];
    VAR_12 = (unsigned char)VAR_9[2];
    VAR_15 = FUNC_4(*(unsigned short*)(&VAR_9[3]));
    VAR_16 = FUNC_4(*(unsigned short*)(&VAR_9[5]));
    VAR_17 = (unsigned char)VAR_9[7];


    VAR_18 = FUNC_4(*(unsigned short*)(&VAR_9[8]));
    VAR_19 = FUNC_4(*(unsigned short*)(&VAR_9[10]));
    VAR_20 = FUNC_4(*(unsigned short*)(&VAR_9[12]));
    VAR_21 = FUNC_4(*(unsigned short*)(&VAR_9[14]));
    VAR_13 = (unsigned char)VAR_9[16];
    VAR_14 = (unsigned char)VAR_9[17];

    FUNC_2(VAR_9);

    *VAR_4 = (unsigned int)VAR_13;
    *VAR_5 = (unsigned int)VAR_20;
    *VAR_6 = (unsigned int)VAR_21;


    if (VAR_10) {
        unsigned char *VAR_22 = (unsigned char *) FUNC_5(VAR_10);
        if (!FUNC_1(VAR_22, VAR_10, 1, VAR_3)) {
            FUNC_0(VAR_2,
                    "\nError: fread return a number of element different from the expected.\n");
            FUNC_2(VAR_22);
            return 0 ;
        }
        FUNC_2(VAR_22);
    }




    if (VAR_12 > 8) {
        FUNC_0(VAR_2, "Sorry, compressed tga files are not currently supported.\n");
        return 0 ;
    }

    *VAR_7 = !(VAR_14 & 32);


    VAR_8 = VAR_16 * (VAR_17 / 8);

    if (VAR_8 > 0) {
        FUNC_0(VAR_2, "File contains a palette - not yet supported.");
        FUNC_3(VAR_3, VAR_8, VAR_0);
    }
    return 1;
}
