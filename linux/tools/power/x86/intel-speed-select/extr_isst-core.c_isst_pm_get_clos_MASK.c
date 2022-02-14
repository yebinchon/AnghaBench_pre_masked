
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_clos_config {unsigned int epp; unsigned int clos_prop_prio; unsigned int clos_min; unsigned int clos_max; unsigned int clos_desired; int die_id; int pkg_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ,int,int ,unsigned int*) ;

int FUNC_3(int VAR_2, int VAR_3, struct isst_clos_config *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_1, VAR_0, VAR_3, 0,
         &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->pkg_id = FUNC_1(VAR_2);
 VAR_4->die_id = FUNC_0(VAR_2);

 VAR_4->epp = VAR_5 & 0x0f;
 VAR_4->clos_prop_prio = (VAR_5 >> 4) & 0x0f;
 VAR_4->clos_min = (VAR_5 >> 8) & 0xff;
 VAR_4->clos_max = (VAR_5 >> 16) & 0xff;
 VAR_4->clos_desired = (VAR_5 >> 24) & 0xff;

 return 0;
}
