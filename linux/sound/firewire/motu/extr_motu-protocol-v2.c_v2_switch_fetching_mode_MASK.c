
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_motu {int * spec; } ;
typedef int reg ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct snd_motu*,int ,int *,int) ;
 int FUNC_3 (struct snd_motu*,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct snd_motu *VAR_7, bool VAR_8)
{
 __be32 VAR_9;
 u32 VAR_10;
 int VAR_11 = 0;

 if (VAR_7->spec == &VAR_6 ||
     VAR_7->spec == &VAR_5) {
  VAR_11 = FUNC_2(VAR_7, VAR_2,
      &VAR_9, sizeof(VAR_9));
  if (VAR_11 < 0)
   return VAR_11;
  VAR_10 = FUNC_0(VAR_9);

  if (VAR_7->spec == &VAR_6) {
   VAR_10 &= ~(VAR_3 |
      VAR_4);

   if (VAR_8)
    VAR_10 |= VAR_4;
   else
    VAR_10 |= VAR_3;
  } else if (VAR_7->spec == &VAR_5) {
   VAR_10 &= ~(VAR_0 |
      VAR_1);

   if (VAR_8)
    VAR_10 |= VAR_0;
   else
    VAR_10 |= VAR_1;
  }

  VAR_9 = FUNC_1(VAR_10);
  VAR_11 = FUNC_3(VAR_7, VAR_2,
       &VAR_9, sizeof(VAR_9));
 }

 return VAR_11;
}
