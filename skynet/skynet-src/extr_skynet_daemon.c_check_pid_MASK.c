
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*,int*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_2) {
 int VAR_3 = 0;
 FILE *VAR_4 = FUNC_1(VAR_2,"r");
 if (VAR_4 == ((void*)0))
  return 0;
 int VAR_5 = FUNC_2(VAR_4,"%d", &VAR_3);
 FUNC_0(VAR_4);

 if (VAR_5 !=1 || VAR_3 == 0 || VAR_3 == FUNC_3()) {
  return 0;
 }

 if (FUNC_4(VAR_3, 0) && VAR_1 == VAR_0)
  return 0;

 return VAR_3;
}
