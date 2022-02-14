
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct SeafObjStore {TYPE_1__* bend; } ;
typedef int gboolean ;
struct TYPE_3__ {int (* write ) (TYPE_1__*,char const*,int,char const*,void*,int,int ) ;} ;
typedef TYPE_1__ ObjBackend ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,char const*,int,char const*,void*,int,int ) ;

int
FUNC_3 (struct SeafObjStore *VAR_0,
                          const char *VAR_1,
                          int VAR_2,
                          const char *VAR_3,
                          void *VAR_4,
                          int VAR_5,
                          gboolean VAR_6)
{
    ObjBackend *VAR_7 = VAR_0->bend;

    if (!VAR_1 || !FUNC_1(VAR_1) ||
        !VAR_3 || !FUNC_0(VAR_3))
        return -1;

    return VAR_7->write (VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
