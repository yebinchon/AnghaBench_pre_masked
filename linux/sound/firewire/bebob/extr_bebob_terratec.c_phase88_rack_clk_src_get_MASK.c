
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_bebob {int unit; } ;


 int FUNC_0 (int ,int ,int,unsigned int*) ;

__attribute__((used)) static int
FUNC_1(struct snd_bebob *VAR_0, unsigned int *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->unit, 0, 9, &VAR_2);
 if (VAR_4 < 0)
  goto end;
 VAR_4 = FUNC_0(VAR_0->unit, 0, 8, &VAR_3);
 if (VAR_4 < 0)
  goto end;

 if (VAR_2 == 0)
  *VAR_1 = 0;
 else if (VAR_3 == 0)
  *VAR_1 = 1;
 else
  *VAR_1 = 2;
end:
 return VAR_4;
}
