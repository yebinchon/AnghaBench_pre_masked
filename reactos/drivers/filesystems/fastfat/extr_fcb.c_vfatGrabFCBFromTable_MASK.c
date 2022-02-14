
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UNICODE_STRING ;
typedef size_t ULONG ;
struct TYPE_19__ {size_t Hash; struct TYPE_19__* next; TYPE_2__* self; } ;
struct TYPE_18__ {size_t HashTableSize; TYPE_5__** FcbHashTable; } ;
struct TYPE_17__ {int Length; int* Buffer; } ;
struct TYPE_15__ {size_t Hash; } ;
struct TYPE_16__ {TYPE_3__ ShortNameU; TYPE_3__ LongNameU; TYPE_1__ Hash; TYPE_3__ DirNameU; } ;
typedef TYPE_2__* PVFATFCB ;
typedef TYPE_3__* PUNICODE_STRING ;
typedef TYPE_4__* PDEVICE_EXTENSION ;
typedef TYPE_5__ HASHENTRY ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_3__*,...) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;
 size_t FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int *,int *) ;

PVFATFCB
FUNC_6(
    PDEVICE_EXTENSION VAR_1,
    PUNICODE_STRING VAR_2)
{
    PVFATFCB VAR_3;
    ULONG VAR_4;
    UNICODE_STRING VAR_5;
    UNICODE_STRING VAR_6;
    PUNICODE_STRING VAR_7;

    HASHENTRY* VAR_8;

    FUNC_1("'%wZ'\n", VAR_2);

    FUNC_0(VAR_2->Length >= sizeof(WCHAR) && VAR_2->Buffer[0] == L'\\');
    VAR_4 = FUNC_4(0, VAR_2);

    VAR_8 = VAR_1->FcbHashTable[VAR_4 % VAR_1->HashTableSize];
    if (VAR_8)
    {
        FUNC_5(VAR_2, &VAR_5, &VAR_6);
    }

    while (VAR_8)
    {
        if (VAR_8->Hash == VAR_4)
        {
            VAR_3 = VAR_8->self;
            FUNC_1("'%wZ' '%wZ'\n", &VAR_5, &VAR_3->DirNameU);
            if (FUNC_2(&VAR_5, &VAR_3->DirNameU, VAR_0))
            {
                if (VAR_3->Hash.Hash == VAR_4)
                {
                    VAR_7 = &VAR_3->LongNameU;
                }
                else
                {
                    VAR_7 = &VAR_3->ShortNameU;
                }

                FUNC_1("'%wZ' '%wZ'\n", &VAR_6, VAR_7);
                if (FUNC_2(&VAR_6, VAR_7, VAR_0))
                {
                    FUNC_3(VAR_1, VAR_3);
                    return VAR_3;
                }
            }
        }
        VAR_8 = VAR_8->next;
    }
    return ((void*)0);
}
