
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int PyObject ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,int) ;
 int FUNC_4 (int *,int *,char const*) ;
 int * FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_8(u64 VAR_1)
{
 PyObject *VAR_2, *VAR_3;
 static const char VAR_4[] = "stat__interval";
 int VAR_5 = 0;

 VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3)
  FUNC_2("couldn't create Python tuple");

 VAR_2 = FUNC_5(VAR_4);
 if (!VAR_2) {
  FUNC_6("can't find python handler %s\n", VAR_4);
  return;
 }

 FUNC_7(VAR_3, VAR_5++, VAR_1);

 if (FUNC_3(&VAR_3, VAR_5) == -1)
  FUNC_2("error resizing Python tuple");

 FUNC_4(VAR_2, VAR_3, VAR_4);

 FUNC_1(VAR_3);
}
