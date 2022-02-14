
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct snd_bebob {int dummy; } ;


 size_t FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int* VAR_2 ;
 int FUNC_1 (struct snd_bebob*,int ,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct snd_bebob *VAR_3, unsigned int *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_1, &VAR_5);
 if (VAR_6 < 0)
  goto end;
 if (VAR_5 >= FUNC_0(VAR_2))
  VAR_6 = -VAR_0;
 else
  *VAR_4 = VAR_2[VAR_5];
end:
 return VAR_6;
}
