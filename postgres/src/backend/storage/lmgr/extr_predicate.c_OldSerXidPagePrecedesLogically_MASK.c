
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_1(int VAR_1, int VAR_2)
{
 int VAR_3;





 FUNC_0(VAR_1 >= 0 && VAR_1 <= VAR_0);
 FUNC_0(VAR_2 >= 0 && VAR_2 <= VAR_0);

 VAR_3 = VAR_1 - VAR_2;
 if (VAR_3 >= ((VAR_0 + 1) / 2))
  VAR_3 -= VAR_0 + 1;
 else if (VAR_3 < -((int) (VAR_0 + 1) / 2))
  VAR_3 += VAR_0 + 1;
 return VAR_3 < 0;
}
