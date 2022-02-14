
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fpo_data_list; } ;
typedef int SFPO_DATA ;
typedef TYPE_1__ SFPOStream ;
typedef int RListIter ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

void FUNC_5(void *VAR_0)
{
 SFPOStream *VAR_1 = (SFPOStream *) VAR_0;
 RListIter *VAR_2 = 0;
 SFPO_DATA *VAR_3 = 0;

 VAR_2 = FUNC_4(VAR_1->fpo_data_list);
 while (FUNC_3(VAR_2)) {
  VAR_3 = (SFPO_DATA *) FUNC_2(VAR_2);
  FUNC_0(VAR_3);
 }
 FUNC_1 (VAR_1->fpo_data_list);
}
