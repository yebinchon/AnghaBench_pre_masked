
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct logentry_item_store {int status; int cmd; int nkey; int sfd; int key; scalar_t__ ttl; int clsid; } ;
typedef scalar_t__ rel_time_t ;
struct TYPE_3__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ logentry ;
typedef enum store_item_type { ____Placeholder_store_item_type } store_item_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int const) ;

__attribute__((used)) static void FUNC_1(logentry *VAR_1, const enum store_item_type VAR_2,
        const int VAR_3, char *VAR_4, const int VAR_5, rel_time_t VAR_6, const uint8_t VAR_7, int VAR_8) {
    struct logentry_item_store *VAR_9 = (struct logentry_item_store *) VAR_1->data;
    VAR_9->status = VAR_2;
    VAR_9->cmd = VAR_3;
    VAR_9->nkey = VAR_5;
    VAR_9->clsid = VAR_7;
    if (VAR_6 != 0) {
        VAR_9->ttl = VAR_6 - VAR_0;
    } else {
        VAR_9->ttl = 0;
    }
    FUNC_0(VAR_9->key, VAR_4, VAR_5);
    VAR_9->sfd = VAR_8;
    VAR_1->size = sizeof(struct logentry_item_store) + VAR_5;
}
