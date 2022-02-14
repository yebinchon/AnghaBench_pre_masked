
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned char*,unsigned char,int,int *) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int *,int,int ) ;
 void* FUNC_4 (unsigned char*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static int FUNC_6(FILE *VAR_5, unsigned int *VAR_6,
                          unsigned int *VAR_7, unsigned int *VAR_8, int *VAR_9)
{
    int VAR_10;
    unsigned char VAR_11[VAR_1];
    unsigned char VAR_12, VAR_13;
    unsigned char VAR_14, VAR_15;
    unsigned short VAR_16, VAR_17;
    unsigned short VAR_18, VAR_19;

    if (!VAR_6 || !VAR_7 || !VAR_8 || !VAR_9) {
        return 0;
    }

    if (FUNC_1(VAR_11, VAR_1, 1, VAR_5) != 1) {
        FUNC_0(VAR_2,
                "\nError: fread return a number of element different from the expected.\n");
        return 0 ;
    }
    VAR_12 = VAR_11[0];

    VAR_13 = VAR_11[2];

    VAR_16 = FUNC_4(&VAR_11[5]);
    VAR_17 = VAR_11[7];






    VAR_18 = FUNC_4(&VAR_11[12]);
    VAR_19 = FUNC_4(&VAR_11[14]);
    VAR_14 = VAR_11[16];
    VAR_15 = VAR_11[17];

    *VAR_6 = (unsigned int)VAR_14;
    *VAR_7 = (unsigned int)VAR_18;
    *VAR_8 = (unsigned int)VAR_19;


    if (VAR_12) {
        unsigned char *VAR_20 = (unsigned char *) FUNC_5(VAR_12);
        if (VAR_20 == 0) {
            FUNC_0(VAR_2, "tga_readheader: memory out\n");
            return 0;
        }
        if (!FUNC_1(VAR_20, VAR_12, 1, VAR_5)) {
            FUNC_0(VAR_2,
                    "\nError: fread return a number of element different from the expected.\n");
            FUNC_2(VAR_20);
            return 0 ;
        }
        FUNC_2(VAR_20);
    }




    if (VAR_13 > 8) {
        FUNC_0(VAR_2, "Sorry, compressed tga files are not currently supported.\n");
        return 0 ;
    }

    *VAR_9 = !(VAR_15 & 32);


    VAR_10 = VAR_16 * (VAR_17 / 8);

    if (VAR_10 > 0) {
        FUNC_0(VAR_2, "File contains a palette - not yet supported.");
        FUNC_3(VAR_5, VAR_10, VAR_0);
    }
    return 1;
}
