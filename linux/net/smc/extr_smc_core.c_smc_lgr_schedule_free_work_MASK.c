
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link_group {scalar_t__ role; int is_smcd; int free_work; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct smc_link_group *VAR_4)
{




 FUNC_0(VAR_3, &VAR_4->free_work,
    (!VAR_4->is_smcd && VAR_4->role == VAR_0) ?
    VAR_1 : VAR_2);
}
