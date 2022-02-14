
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 int * VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(char *VAR_4)
{
 if (VAR_4)
 {
  if (VAR_3)
  {
   if (FUNC_2(FUNC_0(VAR_3), VAR_4) != 0)
    FUNC_1(VAR_1, "close of %s when %s was expected",
      VAR_4, FUNC_0(VAR_3));
  }
  else
   FUNC_1(VAR_1, "close of %s before any relation was opened",
     VAR_4);
 }

 if (VAR_3 == ((void*)0))
  FUNC_1(VAR_1, "no open relation to close");
 else
 {
  FUNC_1(VAR_0, "close relation %s",
    FUNC_0(VAR_3));
  FUNC_3(VAR_3, VAR_2);
  VAR_3 = ((void*)0);
 }
}
