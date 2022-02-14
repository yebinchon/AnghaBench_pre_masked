
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_bebob {int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int*,int ,int ) ;
 int FUNC_1 (int ,unsigned int,int ,int ) ;

int
FUNC_2(struct snd_bebob *VAR_3, unsigned int *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = 0;
 do {
  VAR_8 = FUNC_0(VAR_3->unit, &VAR_5,
           VAR_1, 0);
 } while (VAR_8 == -VAR_2 && ++VAR_7 < 3);
 if (VAR_8 < 0)
  goto end;

 VAR_7 = 0;
 do {
  VAR_8 = FUNC_0(VAR_3->unit, &VAR_6,
           VAR_0, 0);
 } while (VAR_8 == -VAR_2 && ++VAR_7 < 3);
 if (VAR_8 < 0)
  goto end;

 *VAR_4 = VAR_6;
 if (VAR_6 == VAR_5)
  goto end;


 VAR_8 = FUNC_1(VAR_3->unit, VAR_6,
          VAR_0, 0);
end:
 return VAR_8;
}
