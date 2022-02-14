
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float8 ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;

int
FUNC_2(int VAR_0, int VAR_1, int VAR_2)
{
 float8 VAR_3;
 int VAR_4,
    VAR_5,
    VAR_6;


 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2);


 VAR_5 = FUNC_0(VAR_0, 1, 4);


 VAR_4 = FUNC_1(VAR_5 - 1);





 if (VAR_6 < VAR_5 - VAR_4)
 {
  VAR_5 = FUNC_0(VAR_0 - 1, 1, 4);


  VAR_4 = FUNC_1(VAR_5 - 1);
 }

 VAR_3 = (VAR_6 - (VAR_5 - VAR_4)) / 7 + 1;





 if (VAR_3 >= 52)
 {
  VAR_5 = FUNC_0(VAR_0 + 1, 1, 4);


  VAR_4 = FUNC_1(VAR_5 - 1);

  if (VAR_6 >= VAR_5 - VAR_4)
   VAR_3 = (VAR_6 - (VAR_5 - VAR_4)) / 7 + 1;
 }

 return (int) VAR_3;
}
