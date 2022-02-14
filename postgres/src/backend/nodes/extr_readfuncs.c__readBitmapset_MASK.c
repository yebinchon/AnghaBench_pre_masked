
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Bitmapset ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;
 char* FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (char*,char**,int) ;
 char* VAR_2 ;

__attribute__((used)) static Bitmapset *
FUNC_5(void)
{
 Bitmapset *VAR_3 = ((void*)0);

 FUNC_0();

 VAR_2 = FUNC_3(&VAR_1);
 if (VAR_2 == ((void*)0))
  FUNC_2(VAR_0, "incomplete Bitmapset structure");
 if (VAR_1 != 1 || VAR_2[0] != '(')
  FUNC_2(VAR_0, "unrecognized token: \"%.*s\"", VAR_1, VAR_2);

 VAR_2 = FUNC_3(&VAR_1);
 if (VAR_2 == ((void*)0))
  FUNC_2(VAR_0, "incomplete Bitmapset structure");
 if (VAR_1 != 1 || VAR_2[0] != 'b')
  FUNC_2(VAR_0, "unrecognized token: \"%.*s\"", VAR_1, VAR_2);

 for (;;)
 {
  int VAR_4;
  char *VAR_5;

  VAR_2 = FUNC_3(&VAR_1);
  if (VAR_2 == ((void*)0))
   FUNC_2(VAR_0, "unterminated Bitmapset structure");
  if (VAR_1 == 1 && VAR_2[0] == ')')
   break;
  VAR_4 = (int) FUNC_4(VAR_2, &VAR_5, 10);
  if (VAR_5 != VAR_2 + VAR_1)
   FUNC_2(VAR_0, "unrecognized integer: \"%.*s\"", VAR_1, VAR_2);
  VAR_3 = FUNC_1(VAR_3, VAR_4);
 }

 return VAR_3;
}
