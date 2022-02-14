
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {int res_r_port; int res_l_port; int (* private_free ) (struct snd_opl3*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct snd_opl3*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_opl3*) ;
 int FUNC_4 (struct snd_opl3*) ;

__attribute__((used)) static int FUNC_5(struct snd_opl3 *VAR_1)
{
 if (FUNC_2(!VAR_1))
  return -VAR_0;
 if (VAR_1->private_free)
  VAR_1->private_free(VAR_1);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1->res_l_port);
 FUNC_1(VAR_1->res_r_port);
 FUNC_0(VAR_1);
 return 0;
}
