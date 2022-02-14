
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct list {int next; } ;
struct keyitem_pair {int item; int key; int entry; int bucket; int hash; } ;
struct TYPE_4__ {int count; struct list pairs; int IDictionary_iface; } ;
typedef TYPE_1__ dictionary ;
typedef int VARIANT ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 struct list* FUNC_6 (TYPE_1__*,int ) ;
 struct keyitem_pair* FUNC_7 (int) ;
 int FUNC_8 (struct keyitem_pair*) ;
 int FUNC_9 (struct list*,int *) ;
 int FUNC_10 (struct list*) ;

__attribute__((used)) static HRESULT FUNC_11(dictionary *VAR_2, VARIANT *VAR_3, VARIANT *VAR_4)
{
    struct keyitem_pair *VAR_5;
    struct list *VAR_6;
    VARIANT VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_1(&VAR_2->IDictionary_iface, VAR_3, &VAR_7);
    if (FUNC_0(VAR_8))
        return VAR_8;

    VAR_5 = FUNC_7(sizeof(*VAR_5));
    if (!VAR_5)
        return VAR_0;

    VAR_5->hash = FUNC_2(&VAR_7);
    FUNC_5(&VAR_5->key);
    FUNC_5(&VAR_5->item);

    VAR_8 = FUNC_4(&VAR_5->key, VAR_3);
    if (FUNC_0(VAR_8))
        goto failed;

    VAR_8 = FUNC_4(&VAR_5->item, VAR_4);
    if (FUNC_0(VAR_8))
        goto failed;

    VAR_6 = FUNC_6(VAR_2, VAR_5->hash);
    if (!VAR_6->next)

        FUNC_10(VAR_6);


    FUNC_9(VAR_6, &VAR_5->bucket);
    FUNC_9(&VAR_2->pairs, &VAR_5->entry);
    VAR_2->count++;
    return VAR_1;

failed:
    FUNC_3(&VAR_5->key);
    FUNC_3(&VAR_5->item);
    FUNC_8(VAR_5);
    return VAR_8;
}
