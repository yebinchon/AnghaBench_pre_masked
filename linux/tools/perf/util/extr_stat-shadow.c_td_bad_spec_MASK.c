
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct runtime_stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_0 (struct runtime_stat*,int ,int,int) ;
 double FUNC_1 (double) ;
 double FUNC_2 (int,int,struct runtime_stat*) ;

__attribute__((used)) static double FUNC_3(int VAR_3, int VAR_4, struct runtime_stat *VAR_5)
{
 double VAR_6 = 0;
 double VAR_7;
 double VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_1, VAR_3, VAR_4) -
  FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4) +
  FUNC_0(VAR_5, VAR_0, VAR_3, VAR_4);

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  VAR_6 = VAR_8 / VAR_7;
 return FUNC_1(VAR_6);
}
