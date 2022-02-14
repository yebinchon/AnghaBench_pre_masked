
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int jobject ;
typedef int fz_rect ;
typedef int fz_matrix ;
struct TYPE_8__ {int self; TYPE_2__** env; } ;
typedef TYPE_1__ fz_java_device ;
typedef int fz_image ;
typedef int fz_device ;
typedef int fz_context ;
struct TYPE_9__ {scalar_t__ (* ExceptionCheck ) (TYPE_2__**) ;int (* CallVoidMethod ) (TYPE_2__**,int ,int ,int ,int ) ;} ;
typedef TYPE_2__* JNIEnv ;


 int FUNC_0 (int *,TYPE_2__**) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__**,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int *,TYPE_2__**,int *) ;
 int FUNC_4 (int *,TYPE_2__**,int ) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_1, fz_device *VAR_2, fz_image *VAR_3, fz_matrix VAR_4, fz_rect VAR_5)
{
 fz_java_device *VAR_6 = (fz_java_device *)VAR_2;
 JNIEnv *VAR_7 = VAR_6->env;
 jobject VAR_8 = FUNC_3(VAR_1, VAR_7, VAR_3);
 jobject VAR_9 = FUNC_4(VAR_1, VAR_7, VAR_4);

 (*VAR_7)->CallVoidMethod(VAR_7, VAR_6->self, VAR_0, VAR_8, VAR_9);
 if ((*VAR_7)->ExceptionCheck(VAR_7))
  FUNC_0(VAR_1, VAR_7);
}
