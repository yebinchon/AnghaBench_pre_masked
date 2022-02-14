
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* release_context ) (TYPE_1__*) ;} ;
struct TYPE_7__ {int resowner; } ;
typedef TYPE_1__ JitContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(JitContext *VAR_2)
{
 if (VAR_1)
  VAR_0.release_context(VAR_2);

 FUNC_1(VAR_2->resowner, FUNC_0(VAR_2));
 FUNC_2(VAR_2);
}
