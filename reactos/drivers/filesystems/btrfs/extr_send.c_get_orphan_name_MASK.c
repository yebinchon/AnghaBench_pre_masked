
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {TYPE_1__* item; } ;
typedef TYPE_2__ traverse_ptr ;
struct TYPE_11__ {scalar_t__ parent; int Vcb; scalar_t__ root; } ;
typedef TYPE_3__ send_context ;
typedef int ULONG ;
struct TYPE_12__ {int offset; int obj_type; int obj_id; } ;
struct TYPE_9__ {int key; } ;
typedef int NTSTATUS ;
typedef TYPE_4__ KEY ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int *,int ) ;
 int FUNC_3 (int ,scalar_t__,TYPE_2__*,TYPE_4__*,int,int *) ;
 int FUNC_4 (TYPE_4__,int ) ;
 char* FUNC_5 (scalar_t__,char*) ;

__attribute__((used)) static NTSTATUS FUNC_6(send_context* VAR_3, uint64_t VAR_4, uint64_t VAR_5, char* VAR_6) {
    char *VAR_7, *VAR_8;
    uint64_t VAR_9 = 0;
    KEY VAR_10;

    VAR_6[0] = 'o';

    VAR_7 = FUNC_5(VAR_4, &VAR_6[1]);
    *VAR_7 = '-'; VAR_7++;
    VAR_7 = FUNC_5(VAR_5, VAR_7);
    *VAR_7 = '-'; VAR_7++;
    VAR_8 = VAR_7;

    VAR_10.obj_id = VAR_1;
    VAR_10.obj_type = VAR_2;

    do {
        NTSTATUS VAR_11;
        traverse_ptr VAR_12;

        VAR_7 = FUNC_5(VAR_9, VAR_7);
        *VAR_7 = 0;

        VAR_10.offset = FUNC_2(0xfffffffe, (uint8_t*)VAR_6, (ULONG)(VAR_7 - VAR_6));

        VAR_11 = FUNC_3(VAR_3->Vcb, VAR_3->root, &VAR_12, &VAR_10, 0, ((void*)0));
        if (!FUNC_1(VAR_11)) {
            FUNC_0("find_item returned %08x\n", VAR_11);
            return VAR_11;
        }

        if (!FUNC_4(VAR_10, VAR_12.item->key))
            goto cont;

        if (VAR_3->parent) {
            VAR_11 = FUNC_3(VAR_3->Vcb, VAR_3->parent, &VAR_12, &VAR_10, 0, ((void*)0));
            if (!FUNC_1(VAR_11)) {
                FUNC_0("find_item returned %08x\n", VAR_11);
                return VAR_11;
            }

            if (!FUNC_4(VAR_10, VAR_12.item->key))
                goto cont;
        }

        return VAR_0;

cont:
        VAR_9++;
        VAR_7 = VAR_8;
    } while (1);
}
