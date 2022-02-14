
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* key; TYPE_1__* db; } ;
typedef TYPE_3__ watchedKey ;
typedef int listNode ;
typedef int listIter ;
struct TYPE_9__ {int flags; int watched_keys; } ;
typedef TYPE_4__ client ;
struct TYPE_10__ {int clients; } ;
struct TYPE_7__ {int ptr; } ;
struct TYPE_6__ {int id; int dict; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 TYPE_5__ VAR_1 ;

void FUNC_4(int VAR_2) {
    listIter VAR_3, VAR_4;
    listNode *VAR_5;


    FUNC_3(VAR_1.clients,&VAR_3);
    while((VAR_5 = FUNC_1(&VAR_3))) {
        client *VAR_6 = FUNC_2(VAR_5);
        FUNC_3(VAR_6->watched_keys,&VAR_4);
        while((VAR_5 = FUNC_1(&VAR_4))) {
            watchedKey *VAR_7 = FUNC_2(VAR_5);




            if (VAR_2 == -1 || VAR_7->db->id == VAR_2) {
                if (FUNC_0(VAR_7->db->dict, VAR_7->key->ptr) != ((void*)0))
                    VAR_6->flags |= VAR_0;
            }
        }
    }
}
