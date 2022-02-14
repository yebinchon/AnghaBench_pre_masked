
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dg00x {int unit; } ;
typedef int reg ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int *,int,int ) ;

int FUNC_2(struct snd_dg00x *VAR_3, bool *VAR_4)
{
 __be32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3->unit, VAR_2,
     VAR_0 + VAR_1,
     &VAR_5, sizeof(VAR_5), 0);
 if (VAR_6 >= 0)
  *VAR_4 = FUNC_0(VAR_5) > 0;

 return VAR_6;
}
