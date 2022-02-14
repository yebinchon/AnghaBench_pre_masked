
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * jmethodID ;
struct TYPE_4__ {int * (* GetMethodID ) (TYPE_1__**,int ,char const*,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (char*,int ,char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_1__**,int ,char const*,char const*) ;

__attribute__((used)) static jmethodID FUNC_2(int *VAR_2, JNIEnv *VAR_3, const char *VAR_4, const char *VAR_5)
{
 jmethodID VAR_6;

 if (*VAR_2 || !VAR_0) return ((void*)0);

 VAR_6 = (*VAR_3)->GetMethodID(VAR_3, VAR_0, VAR_4, VAR_5);
 if (VAR_6 == 0)
 {
  FUNC_0("Failed to get method for %s %s %s", VAR_1, VAR_4, VAR_5);
  *VAR_2 = 1;
 }

 return VAR_6;
}
