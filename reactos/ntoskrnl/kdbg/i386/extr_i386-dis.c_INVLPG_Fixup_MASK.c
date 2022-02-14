
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int* VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (int VAR_2, int VAR_3)
{
  if (*VAR_0 == 0xf8)
    {
      char *VAR_4 = VAR_1 + FUNC_2 (VAR_1);


      FUNC_1 (VAR_4 - 6, "swapgs");
      VAR_0++;
    }
  else
    FUNC_0 (VAR_2, VAR_3);
}
