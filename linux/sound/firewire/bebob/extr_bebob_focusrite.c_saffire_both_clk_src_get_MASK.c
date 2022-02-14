
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_bebob {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_bebob*,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct snd_bebob *VAR_1, unsigned int *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_4);
 if (VAR_3 >= 0)
  *VAR_2 = 0xff & VAR_4;

 return VAR_3;
}
