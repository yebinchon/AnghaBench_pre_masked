
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpudl {TYPE_1__* elements; } ;
struct TYPE_2__ {int dl; } ;


 int FUNC_0 (struct cpudl*,int) ;
 int FUNC_1 (struct cpudl*,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 size_t FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct cpudl *VAR_0, int VAR_1)
{
 if (VAR_1 > 0 && FUNC_2(VAR_0->elements[FUNC_3(VAR_1)].dl,
    VAR_0->elements[VAR_1].dl))
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
