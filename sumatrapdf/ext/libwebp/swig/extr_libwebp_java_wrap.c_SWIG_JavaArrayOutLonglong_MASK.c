
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int jsize ;
typedef int * jlongArray ;
typedef scalar_t__ jlong ;
struct TYPE_6__ {int (* ReleaseLongArrayElements ) (TYPE_1__**,int *,scalar_t__*,int ) ;scalar_t__* (* GetLongArrayElements ) (TYPE_1__**,int *,int ) ;int * (* NewLongArray ) (TYPE_1__**,int) ;} ;
typedef TYPE_1__* JNIEnv ;


 int * FUNC_0 (TYPE_1__**,int) ;
 scalar_t__* FUNC_1 (TYPE_1__**,int *,int ) ;
 int FUNC_2 (TYPE_1__**,int *,scalar_t__*,int ) ;

jlongArray FUNC_3 (JNIEnv *VAR_0, jlong *VAR_1, jsize VAR_2) {
  jlong *VAR_3;
  int VAR_4;
  jlongArray VAR_5 = (*VAR_0)->NewLongArray(VAR_0, VAR_2);
  if (!VAR_5)
    return ((void*)0);
  VAR_3 = (*VAR_0)->GetLongArrayElements(VAR_0, VAR_5, 0);
  if (!VAR_3)
    return ((void*)0);
  for (VAR_4=0; VAR_4<VAR_2; VAR_4++)
    VAR_3[VAR_4] = (jlong)VAR_1[VAR_4];
  (*VAR_0)->ReleaseLongArrayElements(VAR_0, VAR_5, VAR_3, 0);
  return VAR_5;
}
