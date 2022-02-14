
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int ctl_named_node_t ;
struct TYPE_2__ {size_t narenas; } ;




 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int * VAR_2 ;

__attribute__((used)) static const ctl_named_node_t *
FUNC_2(tsdn_t *VAR_3, const size_t *VAR_4, size_t VAR_5, size_t VAR_6) {
 const ctl_named_node_t *VAR_7;

 FUNC_0(VAR_3, &VAR_1);
 switch (VAR_6) {
 case 129:
 case 128:
  break;
 default:
  if (VAR_6 > VAR_0->narenas) {
   VAR_7 = ((void*)0);
   goto label_return;
  }
  break;
 }

 VAR_7 = VAR_2;
label_return:
 FUNC_1(VAR_3, &VAR_1);
 return VAR_7;
}
