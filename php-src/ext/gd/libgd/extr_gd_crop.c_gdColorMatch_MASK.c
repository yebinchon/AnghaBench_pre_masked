
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdImagePtr ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(gdImagePtr VAR_0, int VAR_1, int VAR_2, float VAR_3)
{
 const int VAR_4 = FUNC_3(VAR_0, VAR_1) - FUNC_3(VAR_0, VAR_2);
 const int VAR_5 = FUNC_2(VAR_0, VAR_1) - FUNC_2(VAR_0, VAR_2);
 const int VAR_6 = FUNC_1(VAR_0, VAR_1) - FUNC_1(VAR_0, VAR_2);
 const int VAR_7 = FUNC_0(VAR_0, VAR_1) - FUNC_0(VAR_0, VAR_2);
 const int VAR_8 = VAR_4 * VAR_4 + VAR_5 * VAR_5 + VAR_6 * VAR_6 + VAR_7 * VAR_7;

 return (100.0 * VAR_8 / 195075) < VAR_3;
}
