
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_ssi_dbg {int dbg_dir; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,int ,struct fsl_ssi_dbg*,int *) ;
 int FUNC_2 (struct device*) ;
 int VAR_0 ;

void FUNC_3(struct fsl_ssi_dbg *VAR_1, struct device *VAR_2)
{
 VAR_1->dbg_dir = FUNC_0(FUNC_2(VAR_2), ((void*)0));

 FUNC_1("stats", 0444, VAR_1->dbg_dir, VAR_1,
       &VAR_0);
}
