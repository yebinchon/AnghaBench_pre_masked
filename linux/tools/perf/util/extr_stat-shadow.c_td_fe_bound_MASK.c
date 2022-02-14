
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct runtime_stat {int dummy; } ;


 int VAR_0 ;
 double FUNC_0 (struct runtime_stat*,int ,int,int) ;
 double FUNC_1 (int,int,struct runtime_stat*) ;

__attribute__((used)) static double FUNC_2(int VAR_1, int VAR_2, struct runtime_stat *VAR_3)
{
 double VAR_4 = 0;
 double VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 double VAR_6 = FUNC_0(VAR_3, VAR_0,
         VAR_1, VAR_2);

 if (VAR_5)
  VAR_4 = VAR_6 / VAR_5;
 return VAR_4;
}
