
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mr_table {int mfc_hash; int ipmr_expire_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mr_table*) ;
 int FUNC_2 (struct mr_table*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mr_table *VAR_4)
{
 FUNC_0(&VAR_4->ipmr_expire_timer);
 FUNC_2(VAR_4, VAR_2 | VAR_3 |
     VAR_0 | VAR_1);
 FUNC_3(&VAR_4->mfc_hash);
 FUNC_1(VAR_4);
}
