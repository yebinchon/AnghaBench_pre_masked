
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_tscm {int unit; } ;
typedef int reg ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_tscm*) ;
 int FUNC_2 (int ,int ,scalar_t__,int *,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_tscm *VAR_3, unsigned int VAR_4)
{
 __be32 VAR_5;
 int VAR_6;


 VAR_5 = FUNC_0(0x00200000);
 VAR_6 = FUNC_2(VAR_3->unit, VAR_0,
     VAR_1 + VAR_2,
     &VAR_5, sizeof(VAR_5), 0);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_1(VAR_3);
}
