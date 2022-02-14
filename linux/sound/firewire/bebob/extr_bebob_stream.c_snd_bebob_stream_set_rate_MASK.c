
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_bebob {int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,int ,int ) ;
 int FUNC_1 (int) ;

int
FUNC_2(struct snd_bebob *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->unit, VAR_3,
          VAR_1, 0);
 if (VAR_4 < 0)
  goto end;

 VAR_4 = FUNC_0(VAR_2->unit, VAR_3,
          VAR_0, 0);
 if (VAR_4 < 0)
  goto end;





 FUNC_1(300);
end:
 return VAR_4;
}
