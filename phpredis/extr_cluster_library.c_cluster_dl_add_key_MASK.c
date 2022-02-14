
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* key; int key_len; int key_free; scalar_t__ val_free; scalar_t__ val_len; int * val; } ;
typedef TYPE_1__ clusterKeyVal ;
struct TYPE_8__ {size_t len; size_t size; TYPE_1__* entry; } ;
typedef TYPE_2__ clusterDistList ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static clusterKeyVal *FUNC_1(clusterDistList *VAR_0, char *VAR_1,
                                         int VAR_2, int VAR_3)
{

    if (VAR_0->len == VAR_0->size) {
        VAR_0->entry = FUNC_0(VAR_0->entry, sizeof(clusterKeyVal) * VAR_0->size * 2);
        VAR_0->size *= 2;
    }


    VAR_0->entry[VAR_0->len].key = VAR_1;
    VAR_0->entry[VAR_0->len].key_len = VAR_2;
    VAR_0->entry[VAR_0->len].key_free = VAR_3;


    VAR_0->entry[VAR_0->len].val = ((void*)0);
    VAR_0->entry[VAR_0->len].val_len = 0;
    VAR_0->entry[VAR_0->len].val_free = 0;

    return &(VAR_0->entry[VAR_0->len++]);
}
