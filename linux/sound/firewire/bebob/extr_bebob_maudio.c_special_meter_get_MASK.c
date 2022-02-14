
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_bebob {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_bebob*,void*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct snd_bebob *VAR_5, u32 *VAR_6, unsigned int VAR_7)
{
 __be16 *VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_11 = FUNC_0(VAR_4) * 2;
 if (VAR_7 < VAR_11 * sizeof(u32))
  return -VAR_0;


 VAR_8 = FUNC_4(VAR_3 - 4, VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_12 = FUNC_2(VAR_5, (void *)VAR_8, VAR_3 - 4);
 if (VAR_12 < 0)
  goto end;


 VAR_9 = 0;
 for (VAR_10 = 2; VAR_10 < VAR_11 + 2; VAR_10++)
  VAR_6[VAR_9++] = FUNC_1(VAR_8[VAR_10]) << 16;
end:
 FUNC_3(VAR_8);
 return VAR_12;
}
