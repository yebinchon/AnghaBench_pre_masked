
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next; } ;
struct python_obs_callback {TYPE_1__ base; int * func; } ;
struct obs_python_script {scalar_t__ first_callback; } ;
typedef int PyObject ;



__attribute__((used)) static inline struct python_obs_callback *
FUNC_0(struct obs_python_script *VAR_0,
         struct python_obs_callback *VAR_1, PyObject *VAR_2)
{
 VAR_1 = VAR_1 ? (struct python_obs_callback *)VAR_1->base.next
  : (struct python_obs_callback *)VAR_0->first_callback;

 while (VAR_1) {
  if (VAR_1->func == VAR_2)
   break;
  VAR_1 = (struct python_obs_callback *)VAR_1->base.next;
 }

 return VAR_1;
}
