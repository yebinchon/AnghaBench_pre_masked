
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_5__ {int init_lock; } ;
typedef TYPE_1__ rtree_t ;
typedef int rtree_node_elm_t ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,TYPE_1__*,size_t) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static rtree_node_elm_t *
FUNC_5(tsdn_t *VAR_1, rtree_t *VAR_2, size_t VAR_3) {
 rtree_node_elm_t *VAR_4;

 if (VAR_2 != &VAR_0) {
  return FUNC_4(VAR_1, VAR_2, VAR_3);
 }

 FUNC_3(VAR_1, &VAR_2->init_lock);
 VAR_4 = (rtree_node_elm_t *)FUNC_1(VAR_3, sizeof(rtree_node_elm_t));
 FUNC_0(VAR_4, "Unexpected calloc() failure");
 FUNC_2(VAR_1, &VAR_2->init_lock);

 return VAR_4;
}
