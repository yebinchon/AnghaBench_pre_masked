
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ jthrowable ;
typedef scalar_t__ jobject ;
typedef int fz_context ;
struct TYPE_10__ {char* (* GetStringUTFChars ) (TYPE_1__**,scalar_t__,int *) ;int (* ReleaseStringUTFChars ) (TYPE_1__**,scalar_t__,char const*) ;int (* ExceptionClear ) (TYPE_1__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_1__**) ;scalar_t__ (* CallObjectMethod ) (TYPE_1__**,scalar_t__,int ) ;scalar_t__ (* ExceptionOccurred ) (TYPE_1__**) ;} ;
typedef TYPE_1__* JNIEnv ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_1__**) ;
 scalar_t__ FUNC_4 (TYPE_1__**,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (TYPE_1__**) ;
 char* FUNC_7 (TYPE_1__**,scalar_t__,int *) ;
 int FUNC_8 (TYPE_1__**,scalar_t__,char const*) ;

__attribute__((used)) static void FUNC_9(fz_context *VAR_2, JNIEnv *VAR_3)
{
 jthrowable VAR_4 = (*VAR_3)->ExceptionOccurred(VAR_3);
 if (VAR_4)
 {
  jobject VAR_5;
  (*VAR_3)->ExceptionClear(VAR_3);
  VAR_5 = (*VAR_3)->CallObjectMethod(VAR_3, VAR_4, VAR_1);
  if ((*VAR_3)->ExceptionCheck(VAR_3))
   (*VAR_3)->ExceptionClear(VAR_3);
  else if (VAR_5)
  {
   const char *VAR_6 = (*VAR_3)->GetStringUTFChars(VAR_3, VAR_5, ((void*)0));
   if (VAR_6)
   {
    char VAR_7[256];
    FUNC_0(VAR_7, VAR_6, sizeof VAR_7);
    (*VAR_3)->ReleaseStringUTFChars(VAR_3, VAR_5, VAR_6);
    FUNC_1(VAR_2, VAR_0, "%s", VAR_7);
   }
  }
 }
 FUNC_1(VAR_2, VAR_0, "unknown java error");
}
