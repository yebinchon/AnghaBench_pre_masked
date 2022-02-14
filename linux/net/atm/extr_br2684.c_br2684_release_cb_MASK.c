
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct br2684_vcc {int (* old_release_cb ) (struct atm_vcc*) ;int device; int qspace; } ;
struct atm_vcc {int dummy; } ;


 struct br2684_vcc* FUNC_0 (struct atm_vcc*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct atm_vcc*) ;

__attribute__((used)) static void FUNC_4(struct atm_vcc *VAR_0)
{
 struct br2684_vcc *VAR_1 = FUNC_0(VAR_0);

 if (FUNC_1(&VAR_1->qspace) > 0)
  FUNC_2(VAR_1->device);

 if (VAR_1->old_release_cb)
  VAR_1->old_release_cb(VAR_0);
}
