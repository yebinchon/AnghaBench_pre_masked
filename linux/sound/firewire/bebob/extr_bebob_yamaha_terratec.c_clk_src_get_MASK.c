
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_bebob {int unit; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,unsigned int*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct snd_bebob *VAR_2, unsigned int *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->unit, 0, 4, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 if (*VAR_3 >= FUNC_0(VAR_1))
  return -VAR_0;

 return 0;
}
