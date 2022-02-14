
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pos; } ;
struct TYPE_5__ {TYPE_3__ curr; } ;
typedef TYPE_1__ inifile ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(inifile *VAR_0) {
 FUNC_0(&VAR_0->curr);
 VAR_0->curr.pos = 0;
 return FUNC_1(VAR_0);
}
