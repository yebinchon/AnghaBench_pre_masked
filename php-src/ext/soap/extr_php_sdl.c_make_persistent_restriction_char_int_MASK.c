
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sdlRestrictionCharPtr ;
typedef int sdlRestrictionChar ;
struct TYPE_5__ {int fixed; int value; } ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(sdlRestrictionCharPtr *VAR_0)
{
 sdlRestrictionCharPtr VAR_1 = ((void*)0);

 VAR_1 = FUNC_0(sizeof(sdlRestrictionChar));
 FUNC_1(VAR_1, 0, sizeof(sdlRestrictionChar));
 VAR_1->value = FUNC_2((*VAR_0)->value);
 VAR_1->fixed = (*VAR_0)->fixed;
 *VAR_0 = VAR_1;
}
