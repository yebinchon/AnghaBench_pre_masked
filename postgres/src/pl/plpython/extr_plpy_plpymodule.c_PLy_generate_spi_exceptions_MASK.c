
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sqlstate; int classname; int * name; } ;
struct TYPE_4__ {int * exc; } ;
typedef int PyObject ;
typedef TYPE_1__ PLyExceptionEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *,int *,int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 TYPE_3__* VAR_3 ;
 TYPE_1__* FUNC_7 (int ,int *,int ,int*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(PyObject *VAR_4, PyObject *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_3[VAR_6].name != ((void*)0); VAR_6++)
 {
  bool VAR_7;
  PyObject *VAR_8;
  PLyExceptionEntry *VAR_9;
  PyObject *VAR_10;
  PyObject *VAR_11 = FUNC_3();

  if (VAR_11 == ((void*)0))
   FUNC_2(VAR_0, ((void*)0));

  VAR_10 = FUNC_5(FUNC_8(VAR_3[VAR_6].sqlstate));
  if (VAR_10 == ((void*)0))
   FUNC_2(VAR_0, "could not generate SPI exceptions");

  FUNC_4(VAR_11, "sqlstate", VAR_10);
  FUNC_6(VAR_10);

  VAR_8 = FUNC_1(VAR_3[VAR_6].name, VAR_5, VAR_11,
           VAR_3[VAR_6].classname, VAR_4);

  VAR_9 = FUNC_7(VAR_2, &VAR_3[VAR_6].sqlstate,
       VAR_1, &VAR_7);
  FUNC_0(!VAR_7);
  VAR_9->exc = VAR_8;
 }
}
