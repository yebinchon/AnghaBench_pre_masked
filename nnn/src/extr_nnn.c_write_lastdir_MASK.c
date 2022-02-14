
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (int *,char*,char const*) ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,char*,int) ;

__attribute__((used)) static bool FUNC_6(const char *VAR_3)
{
 bool VAR_4 = VAR_1;
 size_t VAR_5 = FUNC_4(VAR_2);

 FUNC_5(VAR_2 + VAR_5, "/.lastd", 8);
 FUNC_0(VAR_2);

 FILE *VAR_6 = FUNC_2(VAR_2, "w");

 if (VAR_6) {
  if (FUNC_3(VAR_6, "cd \"%s\"", VAR_3) < 0)
   VAR_4 = VAR_0;

  FUNC_1(VAR_6);
 } else
  VAR_4 = VAR_0;

 return VAR_4;
}
