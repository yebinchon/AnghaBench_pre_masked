
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_8__ {int (* DeleteGlobalRef ) (TYPE_2__**,int ) ;} ;
struct TYPE_7__ {int array; int stream; } ;
typedef TYPE_1__ SeekableStreamState ;
typedef TYPE_2__* JNIEnv ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;
 TYPE_2__** FUNC_2 (int *,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__**,int ) ;
 int FUNC_5 (TYPE_2__**,int ) ;

__attribute__((used)) static void FUNC_6(fz_context *VAR_0, void *VAR_1)
{
 SeekableStreamState *VAR_2 = VAR_1;
 JNIEnv *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_0, &VAR_4);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_0, "cannot attach to JVM in SeekableInputStream_drop; leaking input stream");
  return;
 }

 (*VAR_3)->DeleteGlobalRef(VAR_3, VAR_2->stream);
 (*VAR_3)->DeleteGlobalRef(VAR_3, VAR_2->array);

 FUNC_0(VAR_0, VAR_2);

 FUNC_3(VAR_4);
}
