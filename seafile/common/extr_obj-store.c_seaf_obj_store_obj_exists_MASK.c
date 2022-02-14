
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct SeafObjStore {TYPE_1__* bend; } ;
typedef int gboolean ;
struct TYPE_3__ {int (* exists ) (TYPE_1__*,char const*,int,char const*) ;} ;
typedef TYPE_1__ ObjBackend ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,char const*,int,char const*) ;

gboolean
FUNC_3 (struct SeafObjStore *VAR_1,
                           const char *VAR_2,
                           int VAR_3,
                           const char *VAR_4)
{
    ObjBackend *VAR_5 = VAR_1->bend;

    if (!VAR_2 || !FUNC_1(VAR_2) ||
        !VAR_4 || !FUNC_0(VAR_4))
        return VAR_0;

    return VAR_5->exists (VAR_5, VAR_2, VAR_3, VAR_4);
}
