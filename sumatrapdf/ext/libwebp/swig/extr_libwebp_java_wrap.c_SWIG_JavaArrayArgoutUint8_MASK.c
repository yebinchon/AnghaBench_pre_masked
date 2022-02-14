
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int jsize ;
typedef int jbyteArray ;
typedef scalar_t__ jbyte ;
struct TYPE_5__ {int (* GetArrayLength ) (TYPE_1__**,int ) ;int (* ReleaseByteArrayElements ) (TYPE_1__**,int ,scalar_t__*,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (TYPE_1__**,int ) ;
 int FUNC_1 (TYPE_1__**,int ,scalar_t__*,int ) ;

void FUNC_2 (JNIEnv *VAR_0, jbyte *VAR_1, uint8_t *VAR_2, jbyteArray VAR_3) {
  int VAR_4;
  jsize VAR_5 = (*VAR_0)->GetArrayLength(VAR_0, VAR_3);
  for (VAR_4=0; VAR_4<VAR_5; VAR_4++)
    VAR_1[VAR_4] = (jbyte)VAR_2[VAR_4];
  (*VAR_0)->ReleaseByteArrayElements(VAR_0, VAR_3, VAR_1, 0);
}
