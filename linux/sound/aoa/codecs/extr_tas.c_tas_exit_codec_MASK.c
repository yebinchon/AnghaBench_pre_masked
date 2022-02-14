
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* soundbus_dev; } ;
struct tas {TYPE_1__ codec; } ;
struct aoa_codec {int dummy; } ;
struct TYPE_4__ {int (* detach_codec ) (TYPE_2__*,struct tas*) ;} ;


 struct tas* FUNC_0 (struct aoa_codec*) ;
 int FUNC_1 (TYPE_2__*,struct tas*) ;

__attribute__((used)) static void FUNC_2(struct aoa_codec *VAR_0)
{
 struct tas *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->codec.soundbus_dev)
  return;
 VAR_1->codec.soundbus_dev->detach_codec(VAR_1->codec.soundbus_dev, VAR_1);
}
