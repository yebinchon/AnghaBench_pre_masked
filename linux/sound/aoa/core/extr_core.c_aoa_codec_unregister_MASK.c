
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aoa_codec {int owner; int * fabric; int (* exit ) (struct aoa_codec*) ;int list; } ;
struct TYPE_2__ {int (* remove_codec ) (struct aoa_codec*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aoa_codec*) ;
 int FUNC_3 (struct aoa_codec*) ;

void FUNC_4(struct aoa_codec *VAR_1)
{
 FUNC_0(&VAR_1->list);
 if (VAR_1->fabric && VAR_1->exit)
  VAR_1->exit(VAR_1);
 if (VAR_0 && VAR_0->remove_codec)
  VAR_0->remove_codec(VAR_1);
 VAR_1->fabric = ((void*)0);
 FUNC_1(VAR_1->owner);
}
