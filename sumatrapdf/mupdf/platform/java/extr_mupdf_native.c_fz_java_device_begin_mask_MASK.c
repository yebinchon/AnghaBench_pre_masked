
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int jobject ;
typedef int jint ;
typedef int jfloatArray ;
typedef int fz_rect ;
struct TYPE_10__ {int self; TYPE_2__** env; } ;
typedef TYPE_1__ fz_java_device ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;
struct TYPE_11__ {scalar_t__ (* ExceptionCheck ) (TYPE_2__**) ;int (* CallVoidMethod ) (TYPE_2__**,int ,int ,int ,int ,int ,int ,int) ;} ;
typedef TYPE_2__* JNIEnv ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_2__**) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__**,int ,int ,int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (int *,TYPE_2__**,int ) ;
 int FUNC_5 (int *,TYPE_2__**,int *) ;
 int FUNC_6 (int *,TYPE_2__**,int ) ;
 int FUNC_7 (int *,TYPE_2__**,float const*,int ) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_2, fz_device *VAR_3, fz_rect VAR_4, int VAR_5, fz_colorspace *VAR_6, const float *VAR_7, fz_color_params VAR_8)
{
 fz_java_device *VAR_9 = (fz_java_device *)VAR_3;
 JNIEnv *VAR_10 = VAR_9->env;
 jobject VAR_11 = FUNC_6(VAR_2, VAR_10, VAR_4);
 jobject VAR_12 = FUNC_5(VAR_2, VAR_10, VAR_6);
 jfloatArray VAR_13 = FUNC_7(VAR_2, VAR_10, VAR_7, VAR_6 ? FUNC_0(VAR_2, VAR_6) : VAR_0);
 int VAR_14 = FUNC_4(VAR_2, VAR_10, VAR_8);

 (*VAR_10)->CallVoidMethod(VAR_10, VAR_9->self, VAR_1, VAR_11, (jint)VAR_5, VAR_12, VAR_13, VAR_14);
 if ((*VAR_10)->ExceptionCheck(VAR_10))
  FUNC_1(VAR_2, VAR_10);
}
