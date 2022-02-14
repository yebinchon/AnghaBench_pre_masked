
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct SeafObjStore {TYPE_1__* bend; } ;
struct TYPE_3__ {void (* delete ) (TYPE_1__*,char const*,int,char const*) ;} ;
typedef TYPE_1__ ObjBackend ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 void FUNC_2 (TYPE_1__*,char const*,int,char const*) ;

void
FUNC_3 (struct SeafObjStore *VAR_0,
                           const char *VAR_1,
                           int VAR_2,
                           const char *VAR_3)
{
    ObjBackend *VAR_4 = VAR_0->bend;

    if (!VAR_1 || !FUNC_1(VAR_1) ||
        !VAR_3 || !FUNC_0(VAR_3))
        return;

    return VAR_4->delete (VAR_4, VAR_1, VAR_2, VAR_3);
}
