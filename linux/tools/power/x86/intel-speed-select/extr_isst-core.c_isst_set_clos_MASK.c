
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_clos_config {int epp; int clos_prop_prio; int clos_min; int clos_max; int clos_desired; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,unsigned int,unsigned int) ;
 int FUNC_2 (int,int ,int ,unsigned int,unsigned int,unsigned int*) ;

int FUNC_3(int VAR_3, int VAR_4, struct isst_clos_config *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_6 = VAR_5->epp & 0x0f;
 VAR_6 |= (VAR_5->clos_prop_prio & 0x0f) << 4;
 VAR_6 |= (VAR_5->clos_min & 0xff) << 8;
 VAR_6 |= (VAR_5->clos_max & 0xff) << 16;
 VAR_6 |= (VAR_5->clos_desired & 0xff) << 24;

 VAR_8 = FUNC_0(VAR_2) | VAR_4;

 VAR_9 = FUNC_2(VAR_3, VAR_1, VAR_0, VAR_8, VAR_6,
         &VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_1("cpu:%d CLOS_PM_CLOS param:%x req:%x\n", VAR_3, VAR_8, VAR_6);

 return 0;
}
