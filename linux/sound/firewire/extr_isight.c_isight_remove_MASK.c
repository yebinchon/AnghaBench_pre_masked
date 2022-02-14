
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isight {int unit; int mutex; int card; } ;
struct fw_unit {int device; } ;


 struct isight* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct isight*) ;
 int FUNC_3 (struct isight*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct fw_unit *VAR_0)
{
 struct isight *VAR_1 = FUNC_0(&VAR_0->device);

 FUNC_2(VAR_1);

 FUNC_7(VAR_1->card);

 FUNC_5(&VAR_1->mutex);
 FUNC_3(VAR_1);
 FUNC_6(&VAR_1->mutex);


 FUNC_8(VAR_1->card);

 FUNC_4(&VAR_1->mutex);
 FUNC_1(VAR_1->unit);
}
