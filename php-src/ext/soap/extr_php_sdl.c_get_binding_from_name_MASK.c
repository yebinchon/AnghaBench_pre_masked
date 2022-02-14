
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int s; int member_0; } ;
typedef TYPE_1__ smart_str ;
typedef TYPE_2__* sdlPtr ;
typedef int sdlBindingPtr ;
struct TYPE_9__ {int bindings; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;

sdlBindingPtr FUNC_5(sdlPtr VAR_0, char *VAR_1, char *VAR_2)
{
 sdlBindingPtr VAR_3;
 smart_str VAR_4 = {0};

 FUNC_2(&VAR_4, VAR_2);
 FUNC_1(&VAR_4, ':');
 FUNC_2(&VAR_4, VAR_1);
 FUNC_0(&VAR_4);

 VAR_3 = FUNC_4(VAR_0->bindings, VAR_4.s);

 FUNC_3(&VAR_4);
 return VAR_3;
}
