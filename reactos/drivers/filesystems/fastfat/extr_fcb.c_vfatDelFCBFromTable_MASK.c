
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_12__ {struct TYPE_12__* next; TYPE_3__* self; } ;
struct TYPE_11__ {size_t HashTableSize; TYPE_5__** FcbHashTable; } ;
struct TYPE_9__ {size_t Hash; TYPE_5__* next; } ;
struct TYPE_8__ {size_t Hash; TYPE_5__* next; } ;
struct TYPE_10__ {int FcbListEntry; TYPE_2__ Hash; TYPE_1__ ShortHash; } ;
typedef TYPE_3__* PVFATFCB ;
typedef TYPE_4__* PDEVICE_EXTENSION ;
typedef TYPE_5__ HASHENTRY ;


 int FUNC_0 (int *) ;

__attribute__((used)) static
VOID
FUNC_1(
    PDEVICE_EXTENSION VAR_0,
    PVFATFCB VAR_1)
{
    ULONG VAR_2;
    ULONG VAR_3;
    HASHENTRY* VAR_4;

    VAR_2 = VAR_1->Hash.Hash % VAR_0->HashTableSize;
    VAR_3 = VAR_1->ShortHash.Hash % VAR_0->HashTableSize;

    if (VAR_1->Hash.Hash != VAR_1->ShortHash.Hash)
    {
        VAR_4 = VAR_0->FcbHashTable[VAR_3];
        if (VAR_4->self == VAR_1)
        {
            VAR_0->FcbHashTable[VAR_3] = VAR_4->next;
        }
        else
        {
            while (VAR_4->next->self != VAR_1)
            {
                VAR_4 = VAR_4->next;
            }
            VAR_4->next = VAR_1->ShortHash.next;
        }
    }
    VAR_4 = VAR_0->FcbHashTable[VAR_2];
    if (VAR_4->self == VAR_1)
    {
        VAR_0->FcbHashTable[VAR_2] = VAR_4->next;
    }
    else
    {
        while (VAR_4->next->self != VAR_1)
        {
            VAR_4 = VAR_4->next;
        }
        VAR_4->next = VAR_1->Hash.next;
    }

    FUNC_0(&VAR_1->FcbListEntry);
}
