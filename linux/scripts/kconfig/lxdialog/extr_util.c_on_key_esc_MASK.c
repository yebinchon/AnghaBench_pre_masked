
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

int FUNC_4(WINDOW *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_1(VAR_4, VAR_3);
 FUNC_0(VAR_4, VAR_1);
 VAR_5 = FUNC_3(VAR_4);
 VAR_6 = FUNC_3(VAR_4);
 do {
  VAR_7 = FUNC_3(VAR_4);
 } while (VAR_7 != VAR_0);
 FUNC_1(VAR_4, VAR_1);
 FUNC_0(VAR_4, VAR_3);
 if (VAR_5 == VAR_2 && VAR_6 == VAR_0)
  return VAR_2;
 else if (VAR_5 != VAR_0 && VAR_5 != VAR_2 && VAR_6 == VAR_0)
  FUNC_2(VAR_5);

 return -1;
}
