
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int queries; } ;
typedef TYPE_1__ gs_timer_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;

void FUNC_3(gs_timer_t *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(2, VAR_0->queries);
 FUNC_2("glDeleteQueries");

 FUNC_0(VAR_0);
}
