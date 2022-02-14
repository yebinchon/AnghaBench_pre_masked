
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {unsigned char* rp; unsigned char* wp; int pos; TYPE_2__* state; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;
struct TYPE_12__ {int (* CallIntMethod ) (TYPE_3__**,int ,int ,int ) ;int (* GetByteArrayRegion ) (TYPE_3__**,int ,int ,int,scalar_t__) ;scalar_t__ (* ExceptionCheck ) (TYPE_3__**) ;} ;
struct TYPE_11__ {scalar_t__ buffer; int array; int stream; } ;
typedef TYPE_2__ SeekableStreamState ;
typedef TYPE_3__* JNIEnv ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,TYPE_3__**) ;
 TYPE_3__** FUNC_2 (int *,int*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__**,int ,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__**) ;
 int FUNC_6 (TYPE_3__**,int ,int ,int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(fz_context *VAR_3, fz_stream *VAR_4, size_t VAR_5)
{
 SeekableStreamState *VAR_6 = VAR_4->state;
 JNIEnv *VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_2(VAR_3, &VAR_8);
 if (VAR_7 == ((void*)0))
  FUNC_0(VAR_3, VAR_1, "cannot attach to JVM in SeekableInputStream_next");

 VAR_9 = (*VAR_7)->CallIntMethod(VAR_7, VAR_6->stream, VAR_2, VAR_6->array);
 if ((*VAR_7)->ExceptionCheck(VAR_7)) {
  FUNC_3(VAR_8);
  FUNC_1(VAR_3, VAR_7);
 }

 if (VAR_9 > 0)
 {
  (*VAR_7)->GetByteArrayRegion(VAR_7, VAR_6->array, 0, VAR_9, VAR_6->buffer);


  VAR_4->rp = (unsigned char *)VAR_6->buffer;
  VAR_4->wp = VAR_4->rp + VAR_9;
  VAR_4->pos += VAR_9;

  VAR_10 = *VAR_4->rp++;
 }
 else if (VAR_9 < 0)
 {
  VAR_10 = VAR_0;
 }
 else
 {
  FUNC_3(VAR_8);
  FUNC_0(VAR_3, VAR_1, "no bytes read");
 }

 FUNC_3(VAR_8);
 return VAR_10;
}
