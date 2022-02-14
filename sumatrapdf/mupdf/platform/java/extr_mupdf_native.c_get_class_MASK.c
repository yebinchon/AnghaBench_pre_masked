
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int * jclass ;
struct TYPE_6__ {int (* DeleteLocalRef ) (TYPE_1__**,int *) ;int * (* NewGlobalRef ) (TYPE_1__**,int *) ;int * (* FindClass ) (TYPE_1__**,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (char*,char const*) ;
 int * VAR_0 ;
 char const* VAR_1 ;
 int * FUNC_1 (TYPE_1__**,char const*) ;
 int * FUNC_2 (TYPE_1__**,int *) ;
 int FUNC_3 (TYPE_1__**,int *) ;

__attribute__((used)) static jclass FUNC_4(int *VAR_2, JNIEnv *VAR_3, const char *VAR_4)
{
 jclass VAR_5;

 if (*VAR_2) return ((void*)0);

 VAR_1 = VAR_4;
 VAR_5 = (*VAR_3)->FindClass(VAR_3, VAR_4);
 if (!VAR_5)
 {
  FUNC_0("Failed to find class %s", VAR_4);
  *VAR_2 = 1;
  return ((void*)0);
 }

 VAR_0 = (*VAR_3)->NewGlobalRef(VAR_3, VAR_5);
 if (!VAR_0)
 {
  FUNC_0("Failed to make global ref for %s", VAR_4);
  *VAR_2 = 1;
  return ((void*)0);
 }

 (*VAR_3)->DeleteLocalRef(VAR_3, VAR_5);

 return VAR_0;
}
