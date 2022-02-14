
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int php_stream_filter_status_t ;
struct TYPE_11__ {int abstract; } ;
typedef TYPE_1__ php_stream_filter ;
struct TYPE_12__ {TYPE_3__* head; } ;
typedef TYPE_2__ php_stream_bucket_brigade ;
struct TYPE_13__ {scalar_t__ buflen; } ;
typedef TYPE_3__ php_stream_bucket ;
typedef int php_stream ;
struct TYPE_14__ {scalar_t__ consumed; int offset; } ;
typedef TYPE_4__ php_consumed_filter_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static php_stream_filter_status_t FUNC_5(
 php_stream *VAR_3,
 php_stream_filter *VAR_4,
 php_stream_bucket_brigade *VAR_5,
 php_stream_bucket_brigade *VAR_6,
 size_t *VAR_7,
 int VAR_8
 )
{
 php_consumed_filter_data *VAR_9 = (php_consumed_filter_data *)FUNC_0(VAR_4->abstract);
 php_stream_bucket *VAR_10;
 size_t VAR_11 = 0;

 if (VAR_9->offset == ~0) {
  VAR_9->offset = FUNC_4(VAR_3);
 }
 while ((VAR_10 = VAR_5->head) != ((void*)0)) {
  FUNC_2(VAR_10);
  VAR_11 += VAR_10->buflen;
  FUNC_1(VAR_6, VAR_10);
 }
 if (VAR_7) {
  *VAR_7 = VAR_11;
 }
 if (VAR_8 & VAR_0) {
  FUNC_3(VAR_3, VAR_9->offset + VAR_9->consumed, VAR_2);
 }
 VAR_9->consumed += VAR_11;

 return VAR_1;
}
