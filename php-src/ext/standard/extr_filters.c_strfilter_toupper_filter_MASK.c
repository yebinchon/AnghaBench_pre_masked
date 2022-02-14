
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int php_stream_filter_status_t ;
typedef int php_stream_filter ;
struct TYPE_8__ {scalar_t__ head; } ;
typedef TYPE_1__ php_stream_bucket_brigade ;
struct TYPE_9__ {scalar_t__ buflen; int buf; } ;
typedef TYPE_2__ php_stream_bucket ;
typedef int php_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static php_stream_filter_status_t FUNC_3(
 php_stream *VAR_3,
 php_stream_filter *VAR_4,
 php_stream_bucket_brigade *VAR_5,
 php_stream_bucket_brigade *VAR_6,
 size_t *VAR_7,
 int VAR_8
 )
{
 php_stream_bucket *VAR_9;
 size_t VAR_10 = 0;

 while (VAR_5->head) {
  VAR_9 = FUNC_1(VAR_5->head);

  FUNC_2(VAR_9->buf, VAR_9->buflen, VAR_1, VAR_2, 26);
  VAR_10 += VAR_9->buflen;

  FUNC_0(VAR_6, VAR_9);
 }

 if (VAR_7) {
  *VAR_7 = VAR_10;
 }

 return VAR_0;
}
