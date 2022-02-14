
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*) ;
 unsigned int FUNC_7 (char*,int *,int) ;

__attribute__((used)) static int FUNC_8(char *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 bool VAR_5 = 1;

 if (!FUNC_2() || FUNC_6(VAR_2) == 0)
  return VAR_0;

 VAR_3 = FUNC_7(VAR_2, ((void*)0), 10);
 if (VAR_3 == 0) {
  FUNC_5("packet count starts with 1, clamping!\n");
  VAR_3 = 1;
 }

 FUNC_4();
 FUNC_0();

 for (VAR_4 = 0; VAR_4 < VAR_3 && (VAR_5 = FUNC_3()); VAR_4++)
            ;
 if (!VAR_5 || FUNC_1() == ((void*)0)) {
  FUNC_5("no packet #%u available!\n", VAR_3);
  FUNC_4();
  return VAR_0;
 }

 return VAR_1;
}
