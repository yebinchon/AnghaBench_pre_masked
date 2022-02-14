
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_5__ {int init_lock; } ;
typedef TYPE_1__ rtree_t ;
typedef int rtree_node_elm_t ;
typedef int atomic_p_t ;
struct TYPE_6__ {int bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 TYPE_4__* VAR_2 ;
 int * FUNC_5 (int *,TYPE_1__*,int) ;

__attribute__((used)) static rtree_node_elm_t *
FUNC_6(tsdn_t *VAR_3, rtree_t *VAR_4, unsigned VAR_5,
    atomic_p_t *VAR_6) {
 FUNC_3(VAR_3, &VAR_4->init_lock);




 rtree_node_elm_t *VAR_7 = FUNC_1(VAR_6, VAR_0);
 if (VAR_7 == ((void*)0)) {
  VAR_7 = FUNC_5(VAR_3, VAR_4, FUNC_0(1) <<
      VAR_2[VAR_5].bits);
  if (VAR_7 == ((void*)0)) {
   FUNC_4(VAR_3, &VAR_4->init_lock);
   return ((void*)0);
  }




  FUNC_2(VAR_6, VAR_7, VAR_1);
 }
 FUNC_4(VAR_3, &VAR_4->init_lock);

 return VAR_7;
}
