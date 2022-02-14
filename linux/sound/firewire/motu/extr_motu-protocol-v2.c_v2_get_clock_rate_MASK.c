
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_motu {int dummy; } ;
typedef int reg ;
typedef int __be32 ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int* VAR_4 ;
 int FUNC_2 (struct snd_motu*,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct snd_motu *VAR_5, unsigned int *VAR_6)
{
 __be32 VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_5, VAR_3, &VAR_7,
     sizeof(VAR_7));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = (FUNC_1(VAR_7) & VAR_1) >> VAR_2;
 if (VAR_8 >= FUNC_0(VAR_4))
  return -VAR_0;

 *VAR_6 = VAR_4[VAR_8];

 return 0;
}
