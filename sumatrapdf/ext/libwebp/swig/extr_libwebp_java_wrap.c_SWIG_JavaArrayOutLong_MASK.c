
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int jsize ;
typedef int * jintArray ;
typedef scalar_t__ jint ;
struct TYPE_6__ {int (* ReleaseIntArrayElements ) (TYPE_1__**,int *,scalar_t__*,int ) ;scalar_t__* (* GetIntArrayElements ) (TYPE_1__**,int *,int ) ;int * (* NewIntArray ) (TYPE_1__**,int) ;} ;
typedef TYPE_1__* JNIEnv ;


 int * FUNC_0 (TYPE_1__**,int) ;
 scalar_t__* FUNC_1 (TYPE_1__**,int *,int ) ;
 int FUNC_2 (TYPE_1__**,int *,scalar_t__*,int ) ;

jintArray FUNC_3 (JNIEnv *VAR_0, long *VAR_1, jsize VAR_2) {
  jint *VAR_3;
  int VAR_4;
  jintArray VAR_5 = (*VAR_0)->NewIntArray(VAR_0, VAR_2);
  if (!VAR_5)
    return ((void*)0);
  VAR_3 = (*VAR_0)->GetIntArrayElements(VAR_0, VAR_5, 0);
  if (!VAR_3)
    return ((void*)0);
  for (VAR_4=0; VAR_4<VAR_2; VAR_4++)
    VAR_3[VAR_4] = (jint)VAR_1[VAR_4];
  (*VAR_0)->ReleaseIntArrayElements(VAR_0, VAR_5, VAR_3, 0);
  return VAR_5;
}
