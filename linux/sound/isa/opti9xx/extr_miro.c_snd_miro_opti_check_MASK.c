
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_miro {int * res_mc_base; scalar_t__ mc_base; int mc_base_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned char FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__,int ,char*) ;
 unsigned char FUNC_4 (struct snd_miro*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct snd_miro *VAR_2)
{
 unsigned char VAR_3;

 VAR_2->res_mc_base = FUNC_3(VAR_2->mc_base, VAR_2->mc_base_size,
        "OPTi9xx MC");
 if (VAR_2->res_mc_base == ((void*)0))
  return -VAR_1;

 VAR_3 = FUNC_4(VAR_2, FUNC_0(1));
 if (VAR_3 != 0xff && VAR_3 != FUNC_1(VAR_2->mc_base + FUNC_0(1)))
  if (VAR_3 == FUNC_4(VAR_2, FUNC_0(1)))
   return 0;

 FUNC_2(VAR_2->res_mc_base);
 VAR_2->res_mc_base = ((void*)0);

 return -VAR_0;
}
