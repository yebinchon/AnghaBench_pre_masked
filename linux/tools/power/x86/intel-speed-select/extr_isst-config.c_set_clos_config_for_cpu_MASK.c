
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_clos_config {int clos_desired; int clos_max; int clos_min; int clos_prop_prio; int epp; int die_id; int pkg_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,char*,char*,int) ;
 int FUNC_3 (int,int ,struct isst_clos_config*) ;
 int VAR_6 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(int VAR_7, void *VAR_8, void *VAR_9, void *VAR_10,
        void *VAR_11)
{
 struct isst_clos_config VAR_12;
 int VAR_13;

 VAR_12.pkg_id = FUNC_1(VAR_7);
 VAR_12.die_id = FUNC_0(VAR_7);

 VAR_12.epp = VAR_1;
 VAR_12.clos_prop_prio = VAR_4;
 VAR_12.clos_min = VAR_3;
 VAR_12.clos_max = VAR_2;
 VAR_12.clos_desired = VAR_0;
 VAR_13 = FUNC_3(VAR_7, VAR_5, &VAR_12);
 if (VAR_13)
  FUNC_4("isst_set_clos");
 else
  FUNC_2(VAR_7, VAR_6, "core-power", "config", VAR_13);
}
