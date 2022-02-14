
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dummy; } ;
struct portman {struct pardevice* pardev; struct snd_card* card; int reg_lock; } ;
struct pardevice {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct portman* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_card *VAR_2,
     struct pardevice *VAR_3,
     struct portman **VAR_4)
{
 struct portman *VAR_5;

 *VAR_4 = ((void*)0);

 VAR_5 = FUNC_0(sizeof(struct portman), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;


 FUNC_1(&VAR_5->reg_lock);
 VAR_5->card = VAR_2;
 VAR_5->pardev = VAR_3;

 *VAR_4 = VAR_5;

 return 0;
}
