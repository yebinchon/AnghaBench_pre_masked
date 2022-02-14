
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct python_obs_callback {int * func; } ;
struct obs_python_script {int first_callback; } ;
typedef int obs_script_t ;
typedef int PyObject ;


 int FUNC_0 (int *) ;
 struct python_obs_callback* FUNC_1 (int *,int *,int) ;

__attribute__((used)) static inline struct python_obs_callback *
FUNC_2(struct obs_python_script *VAR_0, PyObject *VAR_1,
         size_t VAR_2)
{
 struct python_obs_callback *VAR_3 = FUNC_1(
  &VAR_0->first_callback, (obs_script_t *)VAR_0,
  sizeof(*VAR_3) + VAR_2);

 FUNC_0(VAR_1);
 VAR_3->func = VAR_1;
 return VAR_3;
}
