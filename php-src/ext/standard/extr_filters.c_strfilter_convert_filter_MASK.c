
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int php_stream_filter_status_t ;
struct TYPE_11__ {int abstract; } ;
typedef TYPE_1__ php_stream_filter ;
struct TYPE_12__ {TYPE_3__* head; } ;
typedef TYPE_2__ php_stream_bucket_brigade ;
struct TYPE_13__ {int buflen; int * buf; } ;
typedef TYPE_3__ php_stream_bucket ;
typedef int php_stream ;
typedef int php_convert_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,TYPE_1__*,TYPE_2__*,int *,int ,size_t*,int ) ;

__attribute__((used)) static php_stream_filter_status_t FUNC_5(
 php_stream *VAR_4,
 php_stream_filter *VAR_5,
 php_stream_bucket_brigade *VAR_6,
 php_stream_bucket_brigade *VAR_7,
 size_t *VAR_8,
 int VAR_9
 )
{
 php_stream_bucket *VAR_10 = ((void*)0);
 size_t VAR_11 = 0;
 php_convert_filter *VAR_12 = (php_convert_filter *)FUNC_0(VAR_5->abstract);

 while (VAR_6->head != ((void*)0)) {
  VAR_10 = VAR_6->head;

  FUNC_2(VAR_10);

  if (FUNC_4(VAR_12, VAR_4, VAR_5,
    VAR_7, VAR_10->buf, VAR_10->buflen, &VAR_11,
    FUNC_3(VAR_4)) != VAR_3) {
   goto out_failure;
  }

  FUNC_1(VAR_10);
 }

 if (VAR_9 != VAR_1) {
  if (FUNC_4(VAR_12, VAR_4, VAR_5,
    VAR_7, ((void*)0), 0, &VAR_11,
    FUNC_3(VAR_4)) != VAR_3) {
   goto out_failure;
  }
 }

 if (VAR_8) {
  *VAR_8 = VAR_11;
 }

 return VAR_2;

out_failure:
 if (VAR_10 != ((void*)0)) {
  FUNC_1(VAR_10);
 }
 return VAR_0;
}
