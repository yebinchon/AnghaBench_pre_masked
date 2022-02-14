
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int hwndSelf; } ;
struct TYPE_7__ {void* y; void* x; } ;
typedef int RECT ;
typedef TYPE_1__ POINT ;
typedef int LRESULT ;
typedef void* INT ;
typedef TYPE_2__ EDITSTATE ;


 void* FUNC_0 (TYPE_2__*,void*,void*,int *) ;
 int FUNC_1 (TYPE_2__*,void*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int *,TYPE_1__) ;

__attribute__((used)) static LRESULT FUNC_5(EDITSTATE *VAR_0, INT VAR_1, INT VAR_2)
{
 POINT VAR_3;
 RECT VAR_4;
 INT VAR_5;

 VAR_3.x = VAR_1;
 VAR_3.y = VAR_2;
 FUNC_2(VAR_0->hwndSelf, &VAR_4);
 if (!FUNC_4(&VAR_4, VAR_3))
  return -1;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0));
 return FUNC_3(VAR_5, FUNC_1(VAR_0, VAR_5));
}
