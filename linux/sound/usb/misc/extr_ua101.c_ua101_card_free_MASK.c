
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ua101 {int mutex; } ;
struct snd_card {struct ua101* private_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct snd_card *VAR_0)
{
 struct ua101 *VAR_1 = VAR_0->private_data;

 FUNC_0(&VAR_1->mutex);
}
