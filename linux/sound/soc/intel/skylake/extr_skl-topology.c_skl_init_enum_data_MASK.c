
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* private; } ;
struct soc_enum {TYPE_2__ dobj; } ;
struct TYPE_3__ {int size; int data; } ;
struct snd_soc_tplg_enum_control {TYPE_1__ priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (void*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct soc_enum *VAR_3,
    struct snd_soc_tplg_enum_control *VAR_4)
{

 void *VAR_5;

 if (VAR_4->priv.size) {
  VAR_5 = FUNC_0(VAR_2, sizeof(VAR_4->priv.size), VAR_1);
  if (!VAR_5)
   return -VAR_0;
  FUNC_1(VAR_5, VAR_4->priv.data, VAR_4->priv.size);
  VAR_3->dobj.private = VAR_5;
 }

 return 0;

}
