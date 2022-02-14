
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int jobject ;
typedef int fz_stroke_state ;
typedef int fz_rect ;
typedef int fz_path ;
typedef int fz_matrix ;
struct TYPE_9__ {int self; TYPE_2__** env; } ;
typedef TYPE_1__ fz_java_device ;
typedef int fz_device ;
typedef int fz_context ;
struct TYPE_10__ {scalar_t__ (* ExceptionCheck ) (TYPE_2__**) ;int (* CallVoidMethod ) (TYPE_2__**,int ,int ,int ,int ,int ) ;} ;
typedef TYPE_2__* JNIEnv ;


 int FUNC_0 (int *,TYPE_2__**) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__**,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int *,TYPE_2__**,int ) ;
 int FUNC_4 (int *,TYPE_2__**,int const*) ;
 int FUNC_5 (int *,TYPE_2__**,int const*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_1, fz_device *VAR_2, const fz_path *VAR_3, const fz_stroke_state *VAR_4, fz_matrix VAR_5, fz_rect VAR_6)
{
 fz_java_device *VAR_7 = (fz_java_device *)VAR_2;
 JNIEnv *VAR_8 = VAR_7->env;
 jobject VAR_9 = FUNC_4(VAR_1, VAR_8, VAR_3);
 jobject VAR_10 = FUNC_5(VAR_1, VAR_8, VAR_4);
 jobject VAR_11 = FUNC_3(VAR_1, VAR_8, VAR_5);

 (*VAR_8)->CallVoidMethod(VAR_8, VAR_7->self, VAR_0, VAR_9, VAR_10, VAR_11);
 if ((*VAR_8)->ExceptionCheck(VAR_8))
  FUNC_0(VAR_1, VAR_8);
}
