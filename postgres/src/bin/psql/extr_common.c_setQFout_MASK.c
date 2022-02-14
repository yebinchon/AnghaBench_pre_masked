
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queryFoutPipe; int * queryFout; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int **,int*) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int * VAR_1 ;
 int * VAR_2 ;

bool
FUNC_5(const char *VAR_3)
{
 FILE *VAR_4;
 bool VAR_5;


 if (!FUNC_1(VAR_3, &VAR_4, &VAR_5))
  return 0;


 if (VAR_0.queryFout && VAR_0.queryFout != VAR_2 && VAR_0.queryFout != VAR_1)
 {
  if (VAR_0.queryFoutPipe)
   FUNC_2(VAR_0.queryFout);
  else
   FUNC_0(VAR_0.queryFout);
 }

 VAR_0.queryFout = VAR_4;
 VAR_0.queryFoutPipe = VAR_5;


 FUNC_4(VAR_5);
 FUNC_3();

 return 1;
}
