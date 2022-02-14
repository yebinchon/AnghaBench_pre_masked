
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dg00x {scalar_t__ is_console; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_dg00x*,int,int,int) ;

int FUNC_1(struct snd_dg00x *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_2, VAR_1, VAR_0,
     0);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_2->is_console)
  VAR_3 = FUNC_0(VAR_2, 1, 1, 1);

 return VAR_3;
}
