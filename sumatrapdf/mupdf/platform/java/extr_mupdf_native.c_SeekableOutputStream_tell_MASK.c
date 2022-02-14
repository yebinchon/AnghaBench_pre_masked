
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
typedef int fz_context ;
struct TYPE_8__ {scalar_t__ (* ExceptionCheck ) (TYPE_2__**) ;int (* CallLongMethod ) (TYPE_2__**,int ,int ) ;} ;
struct TYPE_7__ {int stream; } ;
typedef TYPE_1__ SeekableStreamState ;
typedef TYPE_2__* JNIEnv ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,TYPE_2__**) ;
 TYPE_2__** FUNC_2 (int *,int*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__**,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__**) ;

__attribute__((used)) static int64_t FUNC_6(fz_context *VAR_2, void *VAR_3)
{
 SeekableStreamState *VAR_4 = VAR_3;
 JNIEnv *VAR_5;
 int VAR_6;
 int64_t VAR_7 = 0;

 VAR_5 = FUNC_2(VAR_2, &VAR_6);
 if (VAR_5 == ((void*)0))
  FUNC_0(VAR_2, VAR_0, "cannot attach to JVM in SeekableOutputStream_tell");

 VAR_7 = (*VAR_5)->CallLongMethod(VAR_5, VAR_4->stream, VAR_1);
 if ((*VAR_5)->ExceptionCheck(VAR_5)) {
  FUNC_3(VAR_6);
  FUNC_1(VAR_2, VAR_5);
 }

 FUNC_3(VAR_6);

 return VAR_7;
}
