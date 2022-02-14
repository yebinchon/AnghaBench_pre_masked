
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* ThrowNew ) (TYPE_1__**,int ,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__**,int ,char const*) ;
 int FUNC_1 (TYPE_1__**,int ,char const*) ;

__attribute__((used)) static void FUNC_2(JNIEnv *VAR_3, int VAR_4, const char *VAR_5)
{
 if (VAR_4 == VAR_0)
  (*VAR_3)->ThrowNew(VAR_3, VAR_2, VAR_5);
 else
  (*VAR_3)->ThrowNew(VAR_3, VAR_1, VAR_5);
}
