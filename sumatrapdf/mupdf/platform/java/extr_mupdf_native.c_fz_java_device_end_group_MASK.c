
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int self; TYPE_2__** env; } ;
typedef TYPE_1__ fz_java_device ;
typedef int fz_device ;
typedef int fz_context ;
struct TYPE_7__ {scalar_t__ (* ExceptionCheck ) (TYPE_2__**) ;int (* CallVoidMethod ) (TYPE_2__**,int ,int ) ;} ;
typedef TYPE_2__* JNIEnv ;


 int FUNC_0 (int *,TYPE_2__**) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__**,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__**) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, fz_device *VAR_2)
{
 fz_java_device *VAR_3 = (fz_java_device *)VAR_2;
 JNIEnv *VAR_4 = VAR_3->env;

 (*VAR_4)->CallVoidMethod(VAR_4, VAR_3->self, VAR_0);
 if ((*VAR_4)->ExceptionCheck(VAR_4))
  FUNC_0(VAR_1, VAR_4);
}
