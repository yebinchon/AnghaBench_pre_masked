
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_15__ {int Length; int MaximumLength; int Buffer; } ;
typedef TYPE_2__ UNICODE_STRING ;
struct TYPE_14__ {int NameLength; int Name; } ;
struct TYPE_16__ {TYPE_1__ FileName; } ;
typedef TYPE_2__* PUNICODE_STRING ;
typedef TYPE_4__* PINDEX_ENTRY_ATTRIBUTE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_1 ;

BOOLEAN
FUNC_6(PUNICODE_STRING VAR_2,
                PINDEX_ENTRY_ATTRIBUTE VAR_3,
                BOOLEAN VAR_4,
                BOOLEAN VAR_5)
{
    BOOLEAN VAR_6, VAR_7 = VAR_0;
    UNICODE_STRING VAR_8;

    VAR_8.Buffer = VAR_3->FileName.Name;
    VAR_8.Length =
    VAR_8.MaximumLength = VAR_3->FileName.NameLength * sizeof(WCHAR);

    if (VAR_4)
    {
        UNICODE_STRING VAR_9;
        if (!VAR_5)
        {
            FUNC_2(FUNC_1(FUNC_5(&VAR_9, VAR_2, VAR_1)));
            VAR_7 = VAR_1;
        }
        else
        {
            VAR_9 = *VAR_2;
        }

        VAR_6 = FUNC_0(&VAR_9, &VAR_8, !VAR_5, ((void*)0));

        if (VAR_7)
        {
            FUNC_4(&VAR_9);
        }

        return VAR_6;
    }
    else
    {
        return (FUNC_3(VAR_2, &VAR_8, !VAR_5) == 0);
    }
}
