
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct python_obs_timer {unsigned long long interval; int last_ts; } ;
struct python_obs_callback {int dummy; } ;
struct obs_python_script {int dummy; } ;
typedef int PyObject ;


 int FUNC_0 (int *) ;
 struct python_obs_callback* FUNC_1 (struct obs_python_script*,int *,int) ;
 struct obs_python_script* VAR_0 ;
 int FUNC_2 (int ,struct python_obs_callback*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,int **,int*) ;
 int * FUNC_5 () ;
 struct python_obs_timer* FUNC_6 (struct python_obs_callback*) ;

__attribute__((used)) static PyObject *FUNC_7(PyObject *VAR_2, PyObject *VAR_3)
{
 struct obs_python_script *VAR_4 = VAR_0;
 PyObject *VAR_5;
 int VAR_6;

 FUNC_0(VAR_2);

 if (!FUNC_4(VAR_3, "Oi", &VAR_5, &VAR_6))
  return FUNC_5();

 struct python_obs_callback *VAR_7 = FUNC_1(
  VAR_4, VAR_5, sizeof(struct python_obs_timer));
 struct python_obs_timer *VAR_8 = FUNC_6(VAR_7);

 VAR_8->interval = (uint64_t)VAR_6 * 1000000ULL;
 VAR_8->last_ts = FUNC_3();

 FUNC_2(VAR_1, VAR_7);
 return FUNC_5();
}
