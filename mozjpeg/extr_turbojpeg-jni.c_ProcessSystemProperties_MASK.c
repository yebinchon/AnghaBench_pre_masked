
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jstring ;
typedef int jmethodID ;
typedef int jclass ;
struct TYPE_5__ {int (* GetStaticMethodID ) (TYPE_1__**,int ,char*,char*) ;int (* FindClass ) (TYPE_1__**,char*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_1__**,char*) ;
 int FUNC_3 (TYPE_1__**,int ,char*,char*) ;

int FUNC_4(JNIEnv *VAR_0)
{
  jclass VAR_1;
  jmethodID VAR_2;
  jstring VAR_3, VAR_4;
  const char *VAR_5;

  FUNC_0(VAR_1 = (*VAR_0)->FindClass(VAR_0, "java/lang/System"));
  FUNC_0(VAR_2 = (*VAR_0)->GetStaticMethodID(VAR_0, VAR_1, "getProperty",
    "(Ljava/lang/String;)Ljava/lang/String;"));

  FUNC_1("turbojpeg.optimize", "TJ_OPTIMIZE");
  FUNC_1("turbojpeg.arithmetic", "TJ_ARITHMETIC");
  FUNC_1("turbojpeg.restart", "TJ_RESTART");
  FUNC_1("turbojpeg.progressive", "TJ_PROGRESSIVE");
  return 0;

bailout:
  return -1;
}
