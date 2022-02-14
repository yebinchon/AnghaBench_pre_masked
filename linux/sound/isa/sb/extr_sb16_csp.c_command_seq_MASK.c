
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_sb*,unsigned char const) ;

__attribute__((used)) static inline int FUNC_1(struct snd_sb *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (!FUNC_0(VAR_1, VAR_2[VAR_4]))
   return -VAR_0;
 }
 return 0;
}
