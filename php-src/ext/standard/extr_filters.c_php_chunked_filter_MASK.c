
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int php_stream_filter_status_t ;
struct TYPE_10__ {int abstract; } ;
typedef TYPE_1__ php_stream_filter ;
struct TYPE_11__ {scalar_t__ head; } ;
typedef TYPE_2__ php_stream_bucket_brigade ;
struct TYPE_12__ {scalar_t__ buflen; int buf; } ;
typedef TYPE_3__ php_stream_bucket ;
typedef int php_stream ;
typedef int php_chunked_filter_data ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (scalar_t__) ;

__attribute__((used)) static php_stream_filter_status_t FUNC_4(
 php_stream *VAR_1,
 php_stream_filter *VAR_2,
 php_stream_bucket_brigade *VAR_3,
 php_stream_bucket_brigade *VAR_4,
 size_t *VAR_5,
 int VAR_6
 )
{
 php_stream_bucket *VAR_7;
 size_t VAR_8 = 0;
 php_chunked_filter_data *VAR_9 = (php_chunked_filter_data *) FUNC_0(VAR_2->abstract);

 while (VAR_3->head) {
  VAR_7 = FUNC_3(VAR_3->head);
  VAR_8 += VAR_7->buflen;
  VAR_7->buflen = FUNC_1(VAR_7->buf, VAR_7->buflen, VAR_9);
  FUNC_2(VAR_4, VAR_7);
 }

 if (VAR_5) {
  *VAR_5 = VAR_8;
 }

 return VAR_0;
}
