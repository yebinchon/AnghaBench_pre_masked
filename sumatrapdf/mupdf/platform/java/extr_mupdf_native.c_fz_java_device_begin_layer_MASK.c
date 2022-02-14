
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int jstring ;
struct TYPE_7__ {int self; TYPE_2__** env; } ;
typedef TYPE_1__ fz_java_device ;
typedef int fz_device ;
typedef int fz_context ;
struct TYPE_8__ {scalar_t__ (* ExceptionCheck ) (TYPE_2__**) ;int (* CallVoidMethod ) (TYPE_2__**,int ,int ,int ) ;int (* NewStringUTF ) (TYPE_2__**,char const*) ;} ;
typedef TYPE_2__* JNIEnv ;


 int FUNC_0 (int *,TYPE_2__**) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__**,char const*) ;
 int FUNC_2 (TYPE_2__**,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__**) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_1, fz_device *VAR_2, const char *VAR_3)
{
 fz_java_device *VAR_4 = (fz_java_device *)VAR_2;
 JNIEnv *VAR_5 = VAR_4->env;
 jstring VAR_6;

 VAR_6 = (*VAR_5)->NewStringUTF(VAR_5, VAR_3);

 (*VAR_5)->CallVoidMethod(VAR_5, VAR_4->self, VAR_0, VAR_6);
 if ((*VAR_5)->ExceptionCheck(VAR_5))
  FUNC_0(VAR_1, VAR_5);
}
