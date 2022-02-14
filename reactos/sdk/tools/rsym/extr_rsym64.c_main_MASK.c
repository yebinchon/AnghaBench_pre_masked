
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int FilePtr; TYPE_1__* OptionalHeader; int AlignBuf; int cbInFileSize; } ;
struct TYPE_6__ {int FileAlignment; } ;
typedef TYPE_2__ FILE_INFO ;
typedef int FILE ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (char*) ;
 int VAR_0 ;

int FUNC_13(int VAR_1, char* VAR_2[])
{
    char* VAR_3;
    char* VAR_4;
    FILE_INFO VAR_5;
    FILE* VAR_6;
    int VAR_7;

    if (VAR_1 != 3)
    {
        FUNC_7(VAR_0, "Usage: rsym <exefile> <symfile>\n");
        FUNC_4(1);
    }

    VAR_3 = FUNC_3(VAR_2[1]);
    VAR_4 = FUNC_3(VAR_2[2]);

    VAR_5.FilePtr = FUNC_9(VAR_3, &VAR_5.cbInFileSize);
    if (!VAR_5.FilePtr)
    {
        FUNC_7(VAR_0, "An error occured loading '%s'\n", VAR_3);
        FUNC_4(1);
    }

    VAR_7 = FUNC_1(&VAR_5);
    if (VAR_7 != 1)
    {
        FUNC_8(VAR_5.FilePtr);
        FUNC_4(VAR_7 == -1 ? 1 : 0);
    }

    VAR_5.AlignBuf = FUNC_10(VAR_5.OptionalHeader->FileAlignment);
    FUNC_11(VAR_5.AlignBuf, 0, VAR_5.OptionalHeader->FileAlignment);

    FUNC_0(&VAR_5);

    VAR_6 = FUNC_6(VAR_4, "wb");
    if (VAR_6 == ((void*)0))
    {
        FUNC_12("Cannot open output file");
        FUNC_8(VAR_5.FilePtr);
        FUNC_4(1);
    }

    FUNC_2(VAR_6, &VAR_5);

    FUNC_5(VAR_6);

    return 0;
}
