
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
typedef int ULONG ;
struct TYPE_12__ {int elements; } ;
struct TYPE_11__ {TYPE_6__* sid; int mask; int flags; } ;
struct TYPE_8__ {int AceSize; int AceFlags; int AceType; } ;
struct TYPE_10__ {TYPE_1__ Header; int SidStart; int Mask; } ;
struct TYPE_9__ {size_t AclSize; size_t AceCount; scalar_t__ Sbz2; scalar_t__ Sbz1; int AclRevision; } ;
typedef TYPE_2__ ACL ;
typedef TYPE_3__ ACCESS_ALLOWED_ACE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int ,size_t,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_6__*,int) ;
 TYPE_5__* VAR_4 ;

__attribute__((used)) static ACL* FUNC_3() {
    uint16_t VAR_5, VAR_6;
    ACL* VAR_7;
    ACCESS_ALLOWED_ACE* VAR_8;

    VAR_5 = sizeof(ACL);
    VAR_6 = 0;
    while (VAR_4[VAR_6].sid) {
        VAR_5 += sizeof(ACCESS_ALLOWED_ACE);
        VAR_5 += 8 + (VAR_4[VAR_6].sid->elements * sizeof(uint32_t)) - sizeof(ULONG);
        VAR_6++;
    }

    VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_2);
    if (!VAR_7) {
        FUNC_0("out of memory\n");
        return ((void*)0);
    }

    VAR_7->AclRevision = VAR_1;
    VAR_7->Sbz1 = 0;
    VAR_7->AclSize = VAR_5;
    VAR_7->AceCount = VAR_6;
    VAR_7->Sbz2 = 0;

    VAR_8 = (ACCESS_ALLOWED_ACE*)&VAR_7[1];
    VAR_6 = 0;
    while (VAR_4[VAR_6].sid) {
        VAR_8->Header.AceType = VAR_0;
        VAR_8->Header.AceFlags = VAR_4[VAR_6].flags;
        VAR_8->Header.AceSize = sizeof(ACCESS_ALLOWED_ACE) - sizeof(ULONG) + 8 + (VAR_4[VAR_6].sid->elements * sizeof(uint32_t));
        VAR_8->Mask = VAR_4[VAR_6].mask;

        FUNC_2(&VAR_8->SidStart, VAR_4[VAR_6].sid, 8 + (VAR_4[VAR_6].sid->elements * sizeof(uint32_t)));

        VAR_8 = (ACCESS_ALLOWED_ACE*)((uint8_t*)VAR_8 + VAR_8->Header.AceSize);

        VAR_6++;
    }

    return VAR_7;
}
