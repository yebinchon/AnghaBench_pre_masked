
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int jsize ;
typedef int * jbyteArray ;
typedef scalar_t__ jbyte ;
struct TYPE_6__ {int (* ReleaseByteArrayElements ) (TYPE_1__**,int *,scalar_t__*,int ) ;scalar_t__* (* GetByteArrayElements ) (TYPE_1__**,int *,int ) ;int * (* NewByteArray ) (TYPE_1__**,int) ;} ;
typedef TYPE_1__* JNIEnv ;


 int * FUNC_0 (TYPE_1__**,int) ;
 scalar_t__* FUNC_1 (TYPE_1__**,int *,int ) ;
 int FUNC_2 (TYPE_1__**,int *,scalar_t__*,int ) ;

jbyteArray FUNC_3 (JNIEnv *VAR_0, uint8_t *VAR_1, jsize VAR_2) {
  jbyte *VAR_3;
  int VAR_4;
  jbyteArray VAR_5 = (*VAR_0)->NewByteArray(VAR_0, VAR_2);
  if (!VAR_5)
    return ((void*)0);
  VAR_3 = (*VAR_0)->GetByteArrayElements(VAR_0, VAR_5, 0);
  if (!VAR_3)
    return ((void*)0);
  for (VAR_4=0; VAR_4<VAR_2; VAR_4++)
    VAR_3[VAR_4] = (jbyte)VAR_1[VAR_4];
  (*VAR_0)->ReleaseByteArrayElements(VAR_0, VAR_5, VAR_3, 0);
  return VAR_5;
}
