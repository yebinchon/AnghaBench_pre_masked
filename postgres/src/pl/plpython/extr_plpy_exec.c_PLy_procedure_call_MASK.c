
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int globals; int * code; } ;
typedef int PyObject ;
typedef int PyCodeObject ;
typedef TYPE_1__ PLyProcedure ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int volatile) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,char const*,int *) ;
 int * FUNC_7 (int *,int ,int ) ;
 int VAR_1 ;
 int volatile FUNC_8 (int ) ;

__attribute__((used)) static PyObject *
FUNC_9(PLyProcedure *VAR_2, const char *VAR_3, PyObject *VAR_4)
{
 PyObject *VAR_5 = ((void*)0);
 int volatile VAR_6 = FUNC_8(VAR_1);

 FUNC_6(VAR_2->globals, VAR_3, VAR_4);

 FUNC_3();
 {




  VAR_5 = FUNC_7((PyCodeObject *) VAR_2->code,
        VAR_2->globals, VAR_2->globals);







  FUNC_0(FUNC_8(VAR_1) >= VAR_6);
 }
 FUNC_2();
 {
  FUNC_4(VAR_6);
 }
 FUNC_1();


 if (VAR_5 == ((void*)0))
  FUNC_5(VAR_0, ((void*)0));

 return VAR_5;
}
