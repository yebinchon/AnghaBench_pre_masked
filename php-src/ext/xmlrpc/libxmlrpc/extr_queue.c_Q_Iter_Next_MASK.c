
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * q_iter ;
struct TYPE_2__ {scalar_t__ next; } ;
typedef TYPE_1__ node ;



q_iter FUNC_0(q_iter VAR_0) {
   return VAR_0 ? (q_iter)((node*)VAR_0)->next : ((void*)0);
}
