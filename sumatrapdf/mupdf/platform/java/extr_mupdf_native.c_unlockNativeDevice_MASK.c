
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* unlock ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ NativeDeviceInfo ;
typedef int JNIEnv ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(JNIEnv *VAR_0, NativeDeviceInfo *VAR_1)
{
 if (VAR_1)
  VAR_1->unlock(VAR_0, VAR_1);
}
