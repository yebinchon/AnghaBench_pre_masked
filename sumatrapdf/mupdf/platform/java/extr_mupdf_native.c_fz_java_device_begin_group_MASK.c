
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int jobject ;
typedef int jint ;
typedef int jboolean ;
typedef int fz_rect ;
struct TYPE_8__ {int self; TYPE_2__** env; } ;
typedef TYPE_1__ fz_java_device ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
struct TYPE_9__ {scalar_t__ (* ExceptionCheck ) (TYPE_2__**) ;int (* CallVoidMethod ) (TYPE_2__**,int ,int ,int ,int ,int ,int ,int ,float) ;} ;
typedef TYPE_2__* JNIEnv ;


 int FUNC_0 (int *,TYPE_2__**) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__**,int ,int ,int ,int ,int ,int ,int ,float) ;
 scalar_t__ FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int *,TYPE_2__**,int *) ;
 int FUNC_4 (int *,TYPE_2__**,int ) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_1, fz_device *VAR_2, fz_rect VAR_3, fz_colorspace *VAR_4, int VAR_5, int VAR_6, int VAR_7, float VAR_8)
{
 fz_java_device *VAR_9 = (fz_java_device *)VAR_2;
 JNIEnv *VAR_10 = VAR_9->env;
 jobject VAR_11 = FUNC_4(VAR_1, VAR_10, VAR_3);
 jobject VAR_12 = FUNC_3(VAR_1, VAR_10, VAR_4);

 (*VAR_10)->CallVoidMethod(VAR_10, VAR_9->self, VAR_0, VAR_11, VAR_12, (jboolean)VAR_5, (jboolean)VAR_6, (jint)VAR_7, VAR_8);
 if ((*VAR_10)->ExceptionCheck(VAR_10))
  FUNC_0(VAR_1, VAR_10);
}
