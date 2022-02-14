
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_efw_phys_meters {int dummy; } ;
struct snd_efw {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_efw*,int ,int ,int *,int ,int *,unsigned int) ;

int FUNC_2(struct snd_efw *VAR_2,
        struct snd_efw_phys_meters *VAR_3,
        unsigned int VAR_4)
{
 u32 *VAR_5 = (u32 *)VAR_3;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_0,
         VAR_1,
         ((void*)0), 0, (__be32 *)VAR_3, VAR_4);
 if (VAR_7 >= 0)
  for (VAR_6 = 0; VAR_6 < VAR_4 / sizeof(u32); VAR_6++)
   FUNC_0(&VAR_5[VAR_6]);

 return VAR_7;
}
