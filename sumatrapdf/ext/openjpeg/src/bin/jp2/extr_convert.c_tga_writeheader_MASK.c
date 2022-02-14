
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char OPJ_UINT16 ;
typedef scalar_t__ OPJ_BOOL ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (unsigned char*,int,int,int *) ;
 int VAR_0 ;
 unsigned char FUNC_3 (unsigned char) ;

__attribute__((used)) static int FUNC_4(FILE *VAR_1, int VAR_2, int VAR_3, int VAR_4,
                           OPJ_BOOL VAR_5)
{
    OPJ_UINT16 VAR_6, VAR_7, VAR_8;
    unsigned char VAR_9, VAR_10;
    unsigned char VAR_11, VAR_12;

    if (!VAR_2 || !VAR_3 || !VAR_4) {
        return 0;
    }

    VAR_11 = 0;

    if (VAR_2 < 256) {
        VAR_11 = (unsigned char)VAR_2;
    } else {
        FUNC_0(VAR_0, "ERROR: Wrong bits per pixel inside tga_header");
        return 0;
    }
    VAR_9 = 0;

    if (FUNC_2(&VAR_9, 1, 1, VAR_1) != 1) {
        goto fails;
    }
    if (FUNC_2(&VAR_9, 1, 1, VAR_1) != 1) {
        goto fails;
    }

    VAR_10 = 2;
    if (FUNC_2(&VAR_10, 1, 1, VAR_1) != 1) {
        goto fails;
    }

    VAR_8 = 0;
    if (FUNC_2(&VAR_8, 2, 1, VAR_1) != 1) {
        goto fails;
    }
    if (FUNC_2(&VAR_8, 2, 1, VAR_1) != 1) {
        goto fails;
    }
    if (FUNC_2(&VAR_9, 1, 1, VAR_1) != 1) {
        goto fails;
    }

    if (FUNC_2(&VAR_8, 2, 1, VAR_1) != 1) {
        goto fails;
    }
    if (FUNC_2(&VAR_8, 2, 1, VAR_1) != 1) {
        goto fails;
    }

    VAR_6 = (unsigned short)VAR_3;
    VAR_7 = (unsigned short) VAR_4;


    if (FUNC_2(&VAR_6, 2, 1, VAR_1) != 1) {
        goto fails;
    }
    if (FUNC_2(&VAR_7, 2, 1, VAR_1) != 1) {
        goto fails;
    }
    if (FUNC_2(&VAR_11, 1, 1, VAR_1) != 1) {
        goto fails;
    }

    VAR_12 = 8;

    if (VAR_5) {
        VAR_12 |= 32;
    }
    if (FUNC_2(&VAR_12, 1, 1, VAR_1) != 1) {
        goto fails;
    }

    return 1;

fails:
    FUNC_1("\nwrite_tgaheader: write ERROR\n", VAR_0);
    return 0;
}
