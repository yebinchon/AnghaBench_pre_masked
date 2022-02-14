
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_pkg_ctdp {unsigned int version; unsigned int levels; unsigned int current_level; int locked; int enabled; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,unsigned int) ;
 int FUNC_2 (int,int ,int ,int ,int ,unsigned int*) ;

int FUNC_3(int VAR_2, struct isst_pkg_ctdp *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_0,
         VAR_1, 0, 0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_1("cpu:%d CONFIG_TDP_GET_LEVELS_INFO resp:%x\n", VAR_2, VAR_4);

 VAR_3->version = VAR_4 & 0xff;
 VAR_3->levels = (VAR_4 >> 8) & 0xff;
 VAR_3->current_level = (VAR_4 >> 16) & 0xff;
 VAR_3->locked = !!(VAR_4 & FUNC_0(24));
 VAR_3->enabled = !!(VAR_4 & FUNC_0(31));

 return 0;
}
