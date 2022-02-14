
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct SeafObjStore {TYPE_1__* bend; } ;
struct TYPE_3__ {int (* remove_store ) (TYPE_1__*,char const*) ;} ;
typedef TYPE_1__ ObjBackend ;


 int FUNC_0 (TYPE_1__*,char const*) ;

int
FUNC_1 (struct SeafObjStore *VAR_0,
                             const char *VAR_1)
{
    ObjBackend *VAR_2 = VAR_0->bend;

    return VAR_2->remove_store (VAR_2, VAR_1);
}
