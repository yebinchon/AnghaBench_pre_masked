
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_8__ {int Length; int MaximumLength; int Buffer; } ;
typedef TYPE_3__ UNICODE_STRING ;
typedef scalar_t__ ULONG ;
struct TYPE_9__ {scalar_t__ LesserChild; TYPE_2__* IndexEntry; } ;
struct TYPE_6__ {int NameLength; int Name; } ;
struct TYPE_7__ {int Flags; TYPE_1__ FileName; } ;
typedef TYPE_4__* PB_TREE_KEY ;
typedef int PB_TREE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

VOID
FUNC_3(PB_TREE VAR_2, PB_TREE_KEY VAR_3, ULONG VAR_4, ULONG VAR_5)
{
    ULONG VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
        FUNC_1(" ");
    FUNC_1(" Key #%d", VAR_4);

    if (!(VAR_3->IndexEntry->Flags & VAR_0))
    {
        UNICODE_STRING VAR_7;
        VAR_7.Length = VAR_3->IndexEntry->FileName.NameLength * sizeof(WCHAR);
        VAR_7.MaximumLength = VAR_7.Length;
        VAR_7.Buffer = VAR_3->IndexEntry->FileName.Name;
        FUNC_1(" '%wZ'\n", &VAR_7);
    }
    else
    {
        FUNC_1(" (Dummy Key)\n");
    }


    if (VAR_3->IndexEntry->Flags & VAR_1)
    {
        if (VAR_3->LesserChild)
            FUNC_2(VAR_2, VAR_3->LesserChild, VAR_4, VAR_5 + 1);
        else
        {

            FUNC_0("DRIVER ERROR: No Key->LesserChild despite Key->IndexEntry->Flags indicating this is a node!\n");
        }
    }
}
