
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cur; int (* destruct ) (int ) ;} ;
typedef TYPE_1__ IterObject ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(IterObject *VAR_0)
{
    FUNC_1((void *)(VAR_0));
    VAR_0->destruct(VAR_0->cur);
    FUNC_0((void *)(VAR_0));
}
