
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int nkey; } ;
typedef TYPE_1__ item ;
typedef enum store_item_type { ____Placeholder_store_item_type } store_item_type ;
typedef int conn ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

enum store_item_type FUNC_5(item *VAR_0, int VAR_1, conn* VAR_2) {
    enum store_item_type VAR_3;
    uint32_t VAR_4;

    VAR_4 = FUNC_2(FUNC_0(VAR_0), VAR_0->nkey);
    FUNC_3(VAR_4);
    VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
    FUNC_4(VAR_4);
    return VAR_3;
}
