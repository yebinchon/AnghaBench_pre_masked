
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jsize ;
typedef int jdoubleArray ;
typedef scalar_t__ jdouble ;
struct TYPE_5__ {int (* GetArrayLength ) (TYPE_1__**,int ) ;int (* ReleaseDoubleArrayElements ) (TYPE_1__**,int ,scalar_t__*,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (TYPE_1__**,int ) ;
 int FUNC_1 (TYPE_1__**,int ,scalar_t__*,int ) ;

void FUNC_2 (JNIEnv *VAR_0, jdouble *VAR_1, double *VAR_2, jdoubleArray VAR_3) {
  int VAR_4;
  jsize VAR_5 = (*VAR_0)->GetArrayLength(VAR_0, VAR_3);
  for (VAR_4=0; VAR_4<VAR_5; VAR_4++)
    VAR_1[VAR_4] = (jdouble)VAR_2[VAR_4];
  (*VAR_0)->ReleaseDoubleArrayElements(VAR_0, VAR_3, VAR_1, 0);
}
