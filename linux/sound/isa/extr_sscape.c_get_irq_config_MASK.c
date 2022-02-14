
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned FUNC_1(int VAR_2, int VAR_3)
{
 static const int VAR_4[] = { 9, 5, 7, 10 };
 static const int VAR_5[] = { 9, 7, 5, 15 };
 unsigned VAR_6;

 if (VAR_2 == VAR_1) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); ++VAR_6)
   if (VAR_3 == VAR_5[VAR_6])
    return VAR_6;
 } else {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); ++VAR_6)
   if (VAR_3 == VAR_4[VAR_6])
    return VAR_6;
 }

 return VAR_0;
}
