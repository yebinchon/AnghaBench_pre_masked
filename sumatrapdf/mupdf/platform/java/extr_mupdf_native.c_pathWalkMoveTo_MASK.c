
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int obj; TYPE_2__** env; } ;
typedef TYPE_1__ path_walker_state ;
typedef int fz_context ;
struct TYPE_7__ {scalar_t__ (* ExceptionCheck ) (TYPE_2__**) ;int (* CallVoidMethod ) (TYPE_2__**,int ,int ,float,float) ;} ;
typedef TYPE_2__* JNIEnv ;


 int FUNC_0 (int *,TYPE_2__**) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__**,int ,int ,float,float) ;
 scalar_t__ FUNC_2 (TYPE_2__**) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, void *VAR_2, float VAR_3, float VAR_4)
{
 path_walker_state *VAR_5 = (path_walker_state *)VAR_2;
 JNIEnv *VAR_6 = VAR_5->env;
 (*VAR_6)->CallVoidMethod(VAR_6, VAR_5->obj, VAR_0, VAR_3, VAR_4);
 if ((*VAR_6)->ExceptionCheck(VAR_6))
  FUNC_0(VAR_1, VAR_6);
}
