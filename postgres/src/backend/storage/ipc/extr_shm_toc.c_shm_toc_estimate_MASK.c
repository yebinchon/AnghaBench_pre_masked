
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int space_for_chunks; int number_of_keys; } ;
typedef TYPE_1__ shm_toc_estimator ;
typedef int shm_toc_entry ;
typedef int Size ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

Size
FUNC_4(shm_toc_estimator *VAR_2)
{
 Size VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 VAR_3 += FUNC_1(VAR_3, FUNC_2(VAR_2->number_of_keys, sizeof(shm_toc_entry)));
 VAR_3 += FUNC_1(VAR_3, VAR_2->space_for_chunks);

 return FUNC_0(VAR_3);
}
