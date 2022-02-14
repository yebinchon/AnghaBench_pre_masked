
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int param ;
typedef int List ;
typedef int ExplainState ;
typedef int Bitmapset ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int *,int *) ;
 int * VAR_0 ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_6(Bitmapset *VAR_1, ExplainState *VAR_2)
{
 int VAR_3 = -1;
 List *VAR_4 = VAR_0;

 FUNC_0(VAR_1);

 while ((VAR_3 = FUNC_2(VAR_1, VAR_3)) >= 0)
 {
  char VAR_5[32];

  FUNC_5(VAR_5, sizeof(VAR_5), "$%d", VAR_3);
  VAR_4 = FUNC_3(VAR_4, FUNC_4(VAR_5));
 }

 if (VAR_4)
  FUNC_1("Params Evaluated", VAR_4, VAR_2);
}
