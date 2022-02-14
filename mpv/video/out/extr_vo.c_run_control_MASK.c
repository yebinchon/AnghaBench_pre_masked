
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* control ) (struct vo*,int,void*) ;} ;


 int FUNC_0 (struct vo*,int,void*) ;
 int FUNC_1 (struct vo*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    void **VAR_1 = VAR_0;
    struct vo *VAR_2 = VAR_1[0];
    int VAR_3 = (intptr_t)VAR_1[1];
    void *VAR_4 = VAR_1[2];
    FUNC_1(VAR_2);
    int VAR_5 = VAR_2->driver->control(VAR_2, VAR_3, VAR_4);
    if (VAR_1[3])
        *(int *)VAR_1[3] = VAR_5;
}
