
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dg00x {int unit; } ;
typedef int reg ;
typedef int __be32 ;


 unsigned int FUNC_0 (unsigned int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 unsigned int* VAR_4 ;
 int FUNC_2 (int ,int ,scalar_t__,int *,int,int ) ;

int FUNC_3(struct snd_dg00x *VAR_5, unsigned int VAR_6)
{
 __be32 VAR_7;
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  if (VAR_6 == VAR_4[VAR_8])
   break;
 }
 if (VAR_8 == FUNC_0(VAR_4))
  return -VAR_2;

 VAR_7 = FUNC_1(VAR_8);
 return FUNC_2(VAR_5->unit, VAR_3,
      VAR_0 + VAR_1,
      &VAR_7, sizeof(VAR_7), 0);
}
