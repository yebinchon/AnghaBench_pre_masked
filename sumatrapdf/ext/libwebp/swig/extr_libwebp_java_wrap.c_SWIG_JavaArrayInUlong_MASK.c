
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int jsize ;
typedef int jlongArray ;
typedef scalar_t__ jlong ;
struct TYPE_6__ {int (* GetArrayLength ) (TYPE_1__**,int ) ;scalar_t__* (* GetLongArrayElements ) (TYPE_1__**,int ,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__**,int ,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__**,int ) ;
 scalar_t__* FUNC_3 (TYPE_1__**,int ,int ) ;

int FUNC_4 (JNIEnv *VAR_2, jlong **VAR_3, unsigned long **VAR_4, jlongArray VAR_5) {
  int VAR_6;
  jsize VAR_7;
  if (!VAR_5) {
    FUNC_0(VAR_2, VAR_0, "null array");
    return 0;
  }
  VAR_7 = (*VAR_2)->GetArrayLength(VAR_2, VAR_5);
  *VAR_3 = (*VAR_2)->GetLongArrayElements(VAR_2, VAR_5, 0);
  if (!*VAR_3)
    return 0;
  *VAR_4 = (unsigned long*) FUNC_1(VAR_7, sizeof(unsigned long));
  if (!*VAR_4) {
    FUNC_0(VAR_2, VAR_1, "array memory allocation failed");
    return 0;
  }
  for (VAR_6=0; VAR_6<VAR_7; VAR_6++)
    (*VAR_4)[VAR_6] = (unsigned long)(*VAR_3)[VAR_6];
  return 1;
}
