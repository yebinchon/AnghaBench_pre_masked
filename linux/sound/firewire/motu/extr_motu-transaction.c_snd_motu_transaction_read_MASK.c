
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snd_motu {int unit; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,scalar_t__,int *,size_t,int ) ;

int FUNC_1(struct snd_motu *VAR_4, u32 VAR_5, __be32 *VAR_6,
         size_t VAR_7)
{
 int VAR_8;

 if (VAR_7 % sizeof(__be32) > 0 || VAR_7 <= 0)
  return -VAR_0;
 if (VAR_7 == sizeof(__be32))
  VAR_8 = VAR_3;
 else
  VAR_8 = VAR_2;

 return FUNC_0(VAR_4->unit, VAR_8,
      VAR_1 + VAR_5, VAR_6, VAR_7, 0);
}
