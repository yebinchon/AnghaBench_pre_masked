
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * area; } ;
struct snd_ymfpci {TYPE_1__ ac3_tmp_base; int reg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct snd_ymfpci*,int ) ;
 int FUNC_2 (struct snd_ymfpci*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_ymfpci *VAR_1)
{
 FUNC_3(&VAR_1->reg_lock);
 FUNC_2(VAR_1, VAR_0,
     FUNC_1(VAR_1, VAR_0) & ~(3 << 3));
 FUNC_4(&VAR_1->reg_lock);

 if (VAR_1->ac3_tmp_base.area) {
  FUNC_0(&VAR_1->ac3_tmp_base);
  VAR_1->ac3_tmp_base.area = ((void*)0);
 }
 return 0;
}
