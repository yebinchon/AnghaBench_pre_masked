
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_11__ {int Length; int MaximumLength; int Buffer; } ;
typedef TYPE_3__ UNICODE_STRING ;
struct TYPE_12__ {TYPE_2__* IndexEntry; int * NextKey; } ;
struct TYPE_9__ {int NameLength; int Name; } ;
struct TYPE_10__ {int Flags; TYPE_1__ FileName; } ;
typedef TYPE_4__* PB_TREE_KEY ;
typedef int LONG ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;

LONG
FUNC_2(PB_TREE_KEY VAR_1, PB_TREE_KEY VAR_2, BOOLEAN VAR_3)
{
    UNICODE_STRING VAR_4, VAR_5;
    LONG VAR_6;


    FUNC_0(!(VAR_1->IndexEntry->Flags & VAR_0));


    if (VAR_2->NextKey == ((void*)0))
        return -1;

    VAR_4.Buffer = VAR_1->IndexEntry->FileName.Name;
    VAR_4.Length = VAR_4.MaximumLength
        = VAR_1->IndexEntry->FileName.NameLength * sizeof(WCHAR);

    VAR_5.Buffer = VAR_2->IndexEntry->FileName.Name;
    VAR_5.Length = VAR_5.MaximumLength
        = VAR_2->IndexEntry->FileName.NameLength * sizeof(WCHAR);


    if (VAR_4.Length == VAR_5.Length)
        return FUNC_1(&VAR_4, &VAR_5, !VAR_3);


    if (VAR_4.Length < VAR_5.Length)
    {

        VAR_5.Length = VAR_4.Length;


        VAR_6 = FUNC_1(&VAR_4, &VAR_5, !VAR_3);


        if (VAR_6 == 0)
            return -1;
    }
    else
    {


        VAR_4.Length = VAR_5.Length;


        VAR_6 = FUNC_1(&VAR_4, &VAR_5, !VAR_3);


        if (VAR_6 == 0)
            return 1;
    }

    return VAR_6;
}
