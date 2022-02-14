
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_9__ {size_t HashTableSize; TYPE_1__** FcbHashTable; int FcbListHead; } ;
struct TYPE_7__ {size_t Hash; struct TYPE_7__* next; } ;
struct TYPE_8__ {scalar_t__ parentFcb; TYPE_1__ ShortHash; TYPE_1__ Hash; int FcbListEntry; int PathNameU; } ;
typedef TYPE_2__* PVFATFCB ;
typedef TYPE_3__* PDEVICE_EXTENSION ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 size_t FUNC_3 (int ,int *) ;

__attribute__((used)) static
VOID
FUNC_4(
    PDEVICE_EXTENSION VAR_0,
    PVFATFCB VAR_1)
{
    ULONG VAR_2;
    ULONG VAR_3;

    FUNC_0(VAR_1->Hash.Hash == FUNC_3(0, &VAR_1->PathNameU));
    VAR_2 = VAR_1->Hash.Hash % VAR_0->HashTableSize;
    VAR_3 = VAR_1->ShortHash.Hash % VAR_0->HashTableSize;

    FUNC_1(&VAR_0->FcbListHead, &VAR_1->FcbListEntry);

    VAR_1->Hash.next = VAR_0->FcbHashTable[VAR_2];
    VAR_0->FcbHashTable[VAR_2] = &VAR_1->Hash;
    if (VAR_1->Hash.Hash != VAR_1->ShortHash.Hash)
    {
        VAR_1->ShortHash.next = VAR_0->FcbHashTable[VAR_3];
        VAR_0->FcbHashTable[VAR_3] = &VAR_1->ShortHash;
    }
    if (VAR_1->parentFcb)
    {
        FUNC_2(VAR_0, VAR_1->parentFcb);
    }
}
