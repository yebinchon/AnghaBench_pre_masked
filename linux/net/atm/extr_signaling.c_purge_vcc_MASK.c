
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atm_vcc {int flags; } ;
struct TYPE_2__ {scalar_t__ sk_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (struct atm_vcc*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct atm_vcc*,int ) ;

__attribute__((used)) static void FUNC_5(struct atm_vcc *VAR_5)
{
 if (FUNC_2(VAR_5)->sk_family == VAR_4 &&
     !FUNC_3(VAR_0, &VAR_5->flags)) {
  FUNC_1(VAR_2, &VAR_5->flags);
  FUNC_0(VAR_1, &VAR_5->flags);
  FUNC_4(VAR_5, -VAR_3);
 }
}
