
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_motu {int dummy; } ;
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
 scalar_t__ FUNC_3 (int) ;
 unsigned int* VAR_6 ;
 int FUNC_4 (struct snd_motu*,int ,int *,int) ;
 int FUNC_5 (struct snd_motu*,int ,int *,int) ;

__attribute__((used)) static int FUNC_6(struct snd_motu *VAR_7, unsigned int VAR_8)
{
 __be32 VAR_9;
 u32 VAR_10;
 bool VAR_11;
 int VAR_12, VAR_13;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); ++VAR_12) {
  if (VAR_6[VAR_12] == VAR_8)
   break;
 }
 if (VAR_12 == FUNC_0(VAR_6))
  return -VAR_1;

 VAR_13 = FUNC_4(VAR_7, VAR_4, &VAR_9,
     sizeof(VAR_9));
 if (VAR_13 < 0)
  return VAR_13;
 VAR_10 = FUNC_1(VAR_9);

 VAR_10 &= ~(VAR_2 | VAR_5);
 VAR_10 |= VAR_12 << VAR_3;

 VAR_11 = VAR_10 != FUNC_1(VAR_9);

 VAR_9 = FUNC_2(VAR_10);
 VAR_13 = FUNC_5(VAR_7, VAR_4, &VAR_9,
      sizeof(VAR_9));
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_11) {

  if (FUNC_3(4000) > 0)
   return -VAR_0;
 }

 return 0;
}
