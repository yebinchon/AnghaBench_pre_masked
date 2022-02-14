
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char const*,int*,int*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 while ((VAR_2 = FUNC_0(VAR_1, VAR_2, &VAR_3, &VAR_4, VAR_0)))
 {
  if (VAR_3 < VAR_4)
   for (VAR_5 = VAR_3; VAR_5 <= VAR_4; ++VAR_5)
    FUNC_1(VAR_5);
  else
   for (VAR_5 = VAR_3; VAR_5 >= VAR_4; --VAR_5)
    FUNC_1(VAR_5);
 }
}
