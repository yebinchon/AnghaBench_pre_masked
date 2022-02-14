
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int self; TYPE_2__** env; } ;
typedef TYPE_1__ fz_java_device ;
typedef int fz_device ;
typedef int fz_context ;
struct TYPE_5__ {int (* DeleteGlobalRef ) (TYPE_2__**,int ) ;} ;
typedef TYPE_2__* JNIEnv ;


 int FUNC_0 (TYPE_2__**,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_device *VAR_1)
{
 fz_java_device *VAR_2 = (fz_java_device *)VAR_1;
 JNIEnv *VAR_3 = VAR_2->env;

 (*VAR_3)->DeleteGlobalRef(VAR_3, VAR_2->self);
}
