
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int base; } ;
struct TYPE_5__ {char* array; } ;
typedef int PyObject ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (int *,char*,int*,char const**) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int,char*,char const*) ;
 char* FUNC_7 (char const*,char) ;
 size_t FUNC_8 (char const*) ;

__attribute__((used)) static PyObject *FUNC_9(PyObject *VAR_2, PyObject *VAR_3,
     bool VAR_4)
{
 static bool VAR_5 = 0;
 int VAR_6;
 const char *VAR_7;

 FUNC_0(VAR_2);

 if (VAR_5)
  return FUNC_5();
 VAR_5 = 1;



 if (!FUNC_4(VAR_3, "is", &VAR_6, &VAR_7))
  goto fail;
 if (!VAR_7 || !*VAR_7)
  goto fail;

 FUNC_1(&VAR_0, VAR_7);
 if (VAR_4)
  FUNC_1(&VAR_0, "\n");

 const char *VAR_8 = VAR_0.array;
 char *VAR_9 = FUNC_7(VAR_8, '\n');

 while (VAR_9) {
  *VAR_9 = 0;
  if (VAR_1)
   FUNC_6(&VAR_1->base, VAR_6, "%s",
       VAR_8);
  else
   FUNC_6(((void*)0), VAR_6, "%s", VAR_8);
  *VAR_9 = '\n';

  VAR_8 = VAR_9 + 1;
  VAR_9 = FUNC_7(VAR_8, '\n');
 }

 if (VAR_8) {
  size_t VAR_10 = FUNC_8(VAR_8);
  if (VAR_10)
   FUNC_3(VAR_0.array, VAR_8, VAR_10);
  FUNC_2(&VAR_0, VAR_10);
 }



fail:
 VAR_5 = 0;
 return FUNC_5();
}
