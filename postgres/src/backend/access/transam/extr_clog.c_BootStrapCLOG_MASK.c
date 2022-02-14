
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* shared; } ;
struct TYPE_4__ {int * page_dirty; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,int) ;

void
FUNC_5(void)
{
 int VAR_3;

 FUNC_1(VAR_0, VAR_2);


 VAR_3 = FUNC_4(0, 0);


 FUNC_3(VAR_1, VAR_3);
 FUNC_0(!VAR_1->shared->page_dirty[VAR_3]);

 FUNC_2(VAR_0);
}
