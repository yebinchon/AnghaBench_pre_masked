
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isight {int mutex; int resources; } ;
struct fw_unit {int device; } ;


 struct isight* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct isight*) ;
 int FUNC_3 (struct isight*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fw_unit *VAR_0)
{
 struct isight *VAR_1 = FUNC_0(&VAR_0->device);

 if (FUNC_1(&VAR_1->resources) < 0) {
  FUNC_2(VAR_1);

  FUNC_4(&VAR_1->mutex);
  FUNC_3(VAR_1);
  FUNC_5(&VAR_1->mutex);
 }
}
