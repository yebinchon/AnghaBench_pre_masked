
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via82xx {int dummy; } ;
struct snd_ac97 {int num; struct via82xx* private_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct via82xx*,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_ac97 *VAR_1)
{
 struct via82xx *VAR_2 = VAR_1->private_data;
 int VAR_3;
 VAR_3 = FUNC_1(VAR_2, VAR_1->num);

 if (!VAR_0)
  FUNC_0(500);
}
