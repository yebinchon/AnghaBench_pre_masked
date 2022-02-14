
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_vcc {int flags; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 struct atm_vcc* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct atm_vcc*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct atm_vcc *VAR_5)
{
 if (VAR_3)
  return -VAR_2;
 FUNC_0("\n");
 VAR_3 = VAR_5;
 VAR_5->dev = &VAR_4;
 FUNC_3(FUNC_2(VAR_5));
 FUNC_1(VAR_0, &VAR_5->flags);
 FUNC_1(VAR_1, &VAR_5->flags);
 return 0;
}
