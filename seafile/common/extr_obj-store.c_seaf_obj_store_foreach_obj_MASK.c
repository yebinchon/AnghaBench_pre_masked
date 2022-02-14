
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct SeafObjStore {TYPE_1__* bend; } ;
struct TYPE_3__ {int (* foreach_obj ) (TYPE_1__*,char const*,int,int ,void*) ;} ;
typedef int SeafObjFunc ;
typedef TYPE_1__ ObjBackend ;


 int FUNC_0 (TYPE_1__*,char const*,int,int ,void*) ;

int
FUNC_1 (struct SeafObjStore *VAR_0,
                            const char *VAR_1,
                            int VAR_2,
                            SeafObjFunc VAR_3,
                            void *VAR_4)
{
    ObjBackend *VAR_5 = VAR_0->bend;

    return VAR_5->foreach_obj (VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
