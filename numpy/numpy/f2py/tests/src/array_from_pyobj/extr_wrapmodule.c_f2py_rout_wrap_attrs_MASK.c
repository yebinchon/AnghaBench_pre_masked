
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int alignment; int type; int kind; } ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,char*,int *,int **) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int VAR_0 ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int) ;
 int FUNC_12 (int *,int,int ) ;
 int * FUNC_13 (char*,char*,int,int *,int *,int *,int ,int ,int ,int ,int ,int ,int ) ;
 int * VAR_1 ;
 int FUNC_14 (char*,int ,int) ;
 int FUNC_15 (char*,char*,int ) ;

__attribute__((used)) static PyObject *FUNC_16(PyObject *VAR_2,
                                      PyObject *VAR_3) {
  PyObject *VAR_4 = VAR_1;
  PyArrayObject *VAR_5 = ((void*)0);
  PyObject *VAR_6 = ((void*)0);
  PyObject *VAR_7 = ((void*)0);
  char VAR_8[100];
  int VAR_9;
  FUNC_14(VAR_8,0,100*sizeof(char));
  if (!FUNC_0(VAR_3,"O!|:wrap.attrs",
                        &VAR_0,&VAR_4))
    return ((void*)0);
  VAR_5 = (PyArrayObject *)VAR_4;
  FUNC_15(VAR_8,"%p",FUNC_2(VAR_5));
  VAR_6 = FUNC_11(FUNC_7(VAR_5));
  VAR_7 = FUNC_11(FUNC_7(VAR_5));
  for (VAR_9=0;VAR_9<FUNC_7(VAR_5);++VAR_9) {
    FUNC_12(VAR_6,VAR_9,FUNC_10(FUNC_4(VAR_5,VAR_9)));
    FUNC_12(VAR_7,VAR_9,FUNC_10(FUNC_8(VAR_5,VAR_9)));
  }
  return FUNC_13("siNNO(cciii)ii",VAR_8,FUNC_7(VAR_5),
                       VAR_6,VAR_7,
                       (FUNC_1(VAR_5)==((void*)0)?VAR_1:FUNC_1(VAR_5)),
                       FUNC_3(VAR_5)->kind,
                       FUNC_3(VAR_5)->type,
                       FUNC_9(VAR_5),
                       FUNC_6(VAR_5),
                       FUNC_3(VAR_5)->alignment,
                       FUNC_5(VAR_5),
                       FUNC_6(VAR_5));
}
