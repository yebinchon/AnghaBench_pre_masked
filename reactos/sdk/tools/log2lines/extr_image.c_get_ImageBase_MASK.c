
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int off_t ;
typedef int ULONG ;
struct TYPE_5__ {scalar_t__ e_magic; long e_lfanew; scalar_t__ Magic; size_t ImageBase; } ;
typedef TYPE_1__ IMAGE_OPTIONAL_HEADER ;
typedef TYPE_1__ IMAGE_FILE_HEADER ;
typedef TYPE_1__ IMAGE_DOS_HEADER ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_1__*,int,int,int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int,char*,char*,...) ;
 int FUNC_5 (int ) ;

int
FUNC_6(char *VAR_6, size_t *VAR_7)
{
    IMAGE_DOS_HEADER VAR_8;
    IMAGE_FILE_HEADER VAR_9;
    IMAGE_OPTIONAL_HEADER VAR_10;

    FILE *VAR_11;
    off_t VAR_12;
    int VAR_13;

    *VAR_7 = VAR_3;
    VAR_11 = FUNC_1(VAR_6, "rb");
    if (!VAR_11)
    {
        FUNC_4(3, "get_ImageBase, cannot open '%s' (%s)\n", VAR_6, FUNC_5(VAR_5));
        return 1;
    }

    VAR_12 = FUNC_2(&VAR_8, sizeof(IMAGE_DOS_HEADER), 1, VAR_11);
    if (1 != VAR_12)
    {
        FUNC_4(1, "get_ImageBase %s, read error IMAGE_DOS_HEADER (%s)\n", VAR_6, FUNC_5(VAR_5));
        FUNC_0(VAR_11);
        return 2;
    }


    if (VAR_8.e_magic != VAR_0 || VAR_8.e_lfanew == 0L)
    {
        FUNC_4(2, "get_ImageBase %s, MZ header missing\n", VAR_6);
        FUNC_0(VAR_11);
        return 3;
    }


    VAR_13 = FUNC_3(VAR_11, VAR_8.e_lfanew + sizeof(ULONG), VAR_4);
    VAR_12 = FUNC_2(&VAR_9, sizeof(IMAGE_FILE_HEADER), 1, VAR_11);
    if (1 != VAR_12)
    {
        FUNC_4(1, "get_ImageBase %s, read error IMAGE_FILE_HEADER (%s)\n", VAR_6, FUNC_5(VAR_5));
        FUNC_0(VAR_11);
        return 4;
    }


    VAR_12 = FUNC_2(&VAR_10, sizeof(IMAGE_OPTIONAL_HEADER), 1, VAR_11);
    if (1 != VAR_12)
    {
        FUNC_4(1, "get_ImageBase %s, read error IMAGE_OPTIONAL_HEADER (%s)\n", VAR_6, FUNC_5(VAR_5));
        FUNC_0(VAR_11);
        return 5;
    }


    if (VAR_10.Magic != VAR_1 &&
        VAR_10.Magic != VAR_2)
    {
        FUNC_4(2, "get_ImageBase %s, not an IMAGE_NT_OPTIONAL_HDR 32/64 bit\n", VAR_6);
        FUNC_0(VAR_11);
        return 6;
    }

    *VAR_7 = VAR_10.ImageBase;
    FUNC_0(VAR_11);
    return 0;
}
