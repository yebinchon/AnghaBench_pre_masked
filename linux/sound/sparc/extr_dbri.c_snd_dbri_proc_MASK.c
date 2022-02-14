
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbri {int dummy; } ;
struct snd_card {struct snd_dbri* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_card*,char*,struct snd_dbri*,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_card *VAR_2)
{
 struct snd_dbri *VAR_3 = VAR_2->private_data;

 FUNC_0(VAR_2, "regs", VAR_3, VAR_1);



}
