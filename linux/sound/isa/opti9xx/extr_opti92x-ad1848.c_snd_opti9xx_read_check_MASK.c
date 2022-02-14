
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opti9xx {int mc_base; int mc_base_size; int mc_indir_index; int password; int pwd_reg; int * res_mc_base; int * res_mc_indir; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned char FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int,int,char*) ;
 int FUNC_5 (struct snd_opti9xx*,int) ;
 int FUNC_6 (struct snd_opti9xx*,int,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct snd_opti9xx *VAR_2)
{
 unsigned char VAR_3;




 VAR_2->res_mc_base = FUNC_4(VAR_2->mc_base, VAR_2->mc_base_size,
        "OPTi9xx MC");
 if (VAR_2->res_mc_base == ((void*)0))
  return -VAR_0;

 VAR_3 = FUNC_5(VAR_2, FUNC_0(1));
 if (VAR_3 != 0xff && VAR_3 != FUNC_1(VAR_2->mc_base + FUNC_0(1)))
  if (VAR_3 == FUNC_5(VAR_2, FUNC_0(1)))
   return 0;
 FUNC_3(VAR_2->res_mc_base);
 VAR_2->res_mc_base = ((void*)0);

 return -VAR_1;
}
