
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,char*) ;

__attribute__((used)) static size_t FUNC_2(FILE *VAR_0, int VAR_1, int VAR_2,
       int VAR_3)
{
 int VAR_4;
 size_t VAR_5 = FUNC_0(VAR_0, VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_2 & (1 << VAR_4))
   VAR_5 += FUNC_1(VAR_0, "|          ");
  else
   VAR_5 += FUNC_1(VAR_0, "           ");

 VAR_5 += FUNC_1(VAR_0, "\n");

 return VAR_5;
}
