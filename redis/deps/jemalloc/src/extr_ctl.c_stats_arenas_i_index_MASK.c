
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int ctl_named_node_t ;
struct TYPE_4__ {TYPE_1__** arenas; } ;
struct TYPE_3__ {int initialized; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t,int,int) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int * VAR_3 ;

__attribute__((used)) static const ctl_named_node_t *
FUNC_3(tsdn_t *VAR_4, const size_t *VAR_5, size_t VAR_6, size_t VAR_7) {
 const ctl_named_node_t *VAR_8;
 size_t VAR_9;

 FUNC_1(VAR_4, &VAR_2);
 VAR_9 = FUNC_0(VAR_7, 1, 1);
 if (VAR_9 == VAR_0 || !VAR_1->arenas[VAR_9]->initialized) {
  VAR_8 = ((void*)0);
  goto label_return;
 }

 VAR_8 = VAR_3;
label_return:
 FUNC_2(VAR_4, &VAR_2);
 return VAR_8;
}
