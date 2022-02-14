
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {int (* GetEnv ) (TYPE_1__**,void*,int ) ;int (* AttachCurrentThread ) (TYPE_1__**,void*,int *) ;} ;
typedef int JNIEnv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 int FUNC_0 (TYPE_1__**,void*,int ) ;
 int FUNC_1 (TYPE_1__**,void*,int *) ;

__attribute__((used)) static JNIEnv *FUNC_2(fz_context *VAR_4, int *VAR_5)
{
 JNIEnv *VAR_6 = ((void*)0);
 int VAR_7;

 *VAR_5 = 0;
 VAR_7 = (*VAR_3)->GetEnv(VAR_3, (void*)&VAR_6, VAR_2);
 if (VAR_7 == VAR_0)
 {
  *VAR_5 = 1;
  VAR_7 = (*VAR_3)->AttachCurrentThread(VAR_3, (void*)&VAR_6, ((void*)0));
 }

 if (VAR_7 != VAR_1)
  return ((void*)0);

 return VAR_6;
}
