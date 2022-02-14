
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_1, VAR_0);

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0) {
  FUNC_2("mkstemp failed");
  return -1;
 }

 FUNC_0(VAR_2);
 return 0;
}
