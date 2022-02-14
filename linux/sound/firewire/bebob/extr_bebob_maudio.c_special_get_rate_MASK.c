
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_bebob {int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_bebob *VAR_2, unsigned int *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = 0;
 do {
  VAR_4 = FUNC_0(VAR_2->unit, VAR_3,
           VAR_0, 0);
 } while (VAR_4 == -VAR_1 && ++VAR_5 < 3);

 return VAR_4;
}
