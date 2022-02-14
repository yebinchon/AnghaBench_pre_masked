
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_motu {int * spec; } ;
typedef int reg ;
typedef int __be32 ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 unsigned int* VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct snd_motu*,int ,int *,int) ;
 int FUNC_4 (struct snd_motu*,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct snd_motu *VAR_8, unsigned int VAR_9)
{
 __be32 VAR_10;
 u32 VAR_11;
 int VAR_12;
 int VAR_13;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); ++VAR_12) {
  if (VAR_6[VAR_12] == VAR_9)
   break;
 }
 if (VAR_12 == FUNC_0(VAR_6))
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_8, VAR_3, &VAR_10,
     sizeof(VAR_10));
 if (VAR_13 < 0)
  return VAR_13;
 VAR_11 = FUNC_1(VAR_10);

 VAR_11 &= ~VAR_1;
 VAR_11 |= VAR_12 << VAR_2;

 if (VAR_8->spec == &VAR_7) {
  VAR_11 &= ~VAR_5;
  VAR_11 |= VAR_4;
 }

 VAR_10 = FUNC_2(VAR_11);
 return FUNC_4(VAR_8, VAR_3, &VAR_10,
       sizeof(VAR_10));
}
