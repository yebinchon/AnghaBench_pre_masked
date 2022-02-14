
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_11__ {int * NextKey; TYPE_3__* IndexEntry; } ;
struct TYPE_8__ {int IndexedFile; } ;
struct TYPE_9__ {TYPE_1__ Directory; } ;
struct TYPE_10__ {int Length; int KeyLength; int FileName; TYPE_2__ Data; } ;
typedef TYPE_3__* PINDEX_ENTRY_ATTRIBUTE ;
typedef int PFILENAME_ATTRIBUTE ;
typedef TYPE_4__* PB_TREE_KEY ;
typedef int B_TREE_KEY ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int VAR_3 ;

PB_TREE_KEY
FUNC_8(ULONGLONG VAR_4, PFILENAME_ATTRIBUTE VAR_5)
{
    PB_TREE_KEY VAR_6;
    ULONG VAR_7 = FUNC_5(VAR_5);
    ULONG VAR_8 = FUNC_0(VAR_7 + FUNC_4(VAR_1, VAR_0), 8);


    PINDEX_ENTRY_ATTRIBUTE VAR_9 = FUNC_2(VAR_2, VAR_8, VAR_3);
    if (!VAR_9)
    {
        FUNC_1("ERROR: Failed to allocate memory for Index Entry!\n");
        return ((void*)0);
    }


    FUNC_7(VAR_9, VAR_8);
    VAR_9->Data.Directory.IndexedFile = VAR_4;
    VAR_9->Length = VAR_8;
    VAR_9->KeyLength = VAR_7;


    FUNC_6(&VAR_9->FileName, VAR_5, VAR_7);


    VAR_6 = FUNC_2(VAR_2, sizeof(B_TREE_KEY), VAR_3);
    if (!VAR_6)
    {
        FUNC_1("ERROR: Failed to allocate memory for new key!\n");
        FUNC_3(VAR_9, VAR_3);
        return ((void*)0);
    }
    VAR_6->IndexEntry = VAR_9;
    VAR_6->NextKey = ((void*)0);

    return VAR_6;
}
