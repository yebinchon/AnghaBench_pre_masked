
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int jobject ;
typedef int jfloatArray ;
typedef int jboolean ;
typedef int fz_path ;
typedef int fz_matrix ;
struct TYPE_11__ {int self; TYPE_2__** env; } ;
typedef TYPE_1__ fz_java_device ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;
struct TYPE_12__ {scalar_t__ (* ExceptionCheck ) (TYPE_2__**) ;int (* CallVoidMethod ) (TYPE_2__**,int ,int ,int ,int ,int ,int ,int ,float,int) ;} ;
typedef TYPE_2__* JNIEnv ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_2__**) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__**,int ,int ,int ,int ,int ,int ,int ,float,int) ;
 scalar_t__ FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (int *,TYPE_2__**,int ) ;
 int FUNC_5 (int *,TYPE_2__**,int *) ;
 int FUNC_6 (int *,TYPE_2__**,int ) ;
 int FUNC_7 (int *,TYPE_2__**,int const*) ;
 int FUNC_8 (int *,TYPE_2__**,float const*,int ) ;

__attribute__((used)) static void
FUNC_9(fz_context *VAR_2, fz_device *VAR_3, const fz_path *VAR_4, int VAR_5, fz_matrix VAR_6, fz_colorspace *VAR_7, const float *VAR_8, float VAR_9, fz_color_params VAR_10)
{
 fz_java_device *VAR_11 = (fz_java_device *)VAR_3;
 JNIEnv *VAR_12 = VAR_11->env;
 jobject VAR_13 = FUNC_7(VAR_2, VAR_12, VAR_4);
 jobject VAR_14 = FUNC_5(VAR_2, VAR_12, VAR_7);
 jobject VAR_15 = FUNC_6(VAR_2, VAR_12, VAR_6);
 jfloatArray VAR_16 = FUNC_8(VAR_2, VAR_12, VAR_8, VAR_7 ? FUNC_0(VAR_2, VAR_7) : VAR_0);
 int VAR_17 = FUNC_4(VAR_2, VAR_12, VAR_10);

 (*VAR_12)->CallVoidMethod(VAR_12, VAR_11->self, VAR_1, VAR_13, (jboolean)VAR_5, VAR_15, VAR_14, VAR_16, VAR_9, VAR_17);
 if ((*VAR_12)->ExceptionCheck(VAR_12))
  FUNC_1(VAR_2, VAR_12);
}
