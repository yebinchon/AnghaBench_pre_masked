
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int php_stream_filter_status_t ;
struct TYPE_15__ {int abstract; } ;
typedef TYPE_1__ php_stream_filter ;
struct TYPE_16__ {scalar_t__ head; } ;
typedef TYPE_2__ php_stream_bucket_brigade ;
struct TYPE_17__ {size_t buflen; scalar_t__ buf; } ;
typedef TYPE_3__ php_stream_bucket ;
typedef int php_stream ;
struct TYPE_14__ {size_t avail_in; scalar_t__ avail_out; int next_out; int next_in; } ;
struct TYPE_18__ {size_t inbuf_len; scalar_t__ outbuf_len; int outbuf; TYPE_13__ strm; int inbuf; } ;
typedef TYPE_4__ php_bz2_filter_data ;


 int FUNC_0 (TYPE_13__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,scalar_t__,size_t) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (scalar_t__) ;
 TYPE_3__* FUNC_7 (int *,int ,size_t,int,int ) ;

__attribute__((used)) static php_stream_filter_status_t FUNC_8(
 php_stream *VAR_11,
 php_stream_filter *VAR_12,
 php_stream_bucket_brigade *VAR_13,
 php_stream_bucket_brigade *VAR_14,
 size_t *VAR_15,
 int VAR_16
 )
{
 php_bz2_filter_data *VAR_17;
 php_stream_bucket *VAR_18;
 size_t VAR_19 = 0;
 int VAR_20;
 php_stream_filter_status_t VAR_21 = VAR_7;

 if (!FUNC_1(VAR_12->abstract)) {

  return VAR_6;
 }

 VAR_17 = (php_bz2_filter_data *)FUNC_1(VAR_12->abstract);

 while (VAR_13->head) {
  size_t VAR_22 = 0, VAR_23;

  VAR_18 = FUNC_6(VAR_13->head);

  while (VAR_22 < VAR_18->buflen) {
   VAR_23 = VAR_18->buflen - VAR_22;
   if (VAR_23 > VAR_17->inbuf_len) {
    VAR_23 = VAR_17->inbuf_len;
   }
   FUNC_3(VAR_17->strm.next_in, VAR_18->buf + VAR_22, VAR_23);
   VAR_17->strm.avail_in = VAR_23;

   VAR_20 = FUNC_0(&(VAR_17->strm), VAR_16 & VAR_8 ? VAR_0 : (VAR_16 & VAR_9 ? VAR_2 : VAR_4));
   if (VAR_20 != VAR_5 && VAR_20 != VAR_3 && VAR_20 != VAR_1) {

    FUNC_5(VAR_18);
    return VAR_6;
   }
   VAR_23 -= VAR_17->strm.avail_in;
   VAR_17->strm.next_in = VAR_17->inbuf;
   VAR_17->strm.avail_in = 0;
   VAR_19 += VAR_23;
   VAR_22 += VAR_23;

   if (VAR_17->strm.avail_out < VAR_17->outbuf_len) {
    php_stream_bucket *VAR_24;
    size_t VAR_25 = VAR_17->outbuf_len - VAR_17->strm.avail_out;

    VAR_24 = FUNC_7(VAR_11, FUNC_2(VAR_17->outbuf, VAR_25), VAR_25, 1, 0);
    FUNC_4(VAR_14, VAR_24);
    VAR_17->strm.avail_out = VAR_17->outbuf_len;
    VAR_17->strm.next_out = VAR_17->outbuf;
    VAR_21 = VAR_10;
   }
  }
  FUNC_5(VAR_18);
 }

 if (VAR_16 & VAR_8) {

  VAR_20 = VAR_1;
  while (VAR_20 == VAR_1) {
   VAR_20 = FUNC_0(&(VAR_17->strm), VAR_0);
   if (VAR_17->strm.avail_out < VAR_17->outbuf_len) {
    size_t VAR_26 = VAR_17->outbuf_len - VAR_17->strm.avail_out;

    VAR_18 = FUNC_7(VAR_11, FUNC_2(VAR_17->outbuf, VAR_26), VAR_26, 1, 0);
    FUNC_4(VAR_14, VAR_18);
    VAR_17->strm.avail_out = VAR_17->outbuf_len;
    VAR_17->strm.next_out = VAR_17->outbuf;
    VAR_21 = VAR_10;
   }
  }
 }

 if (VAR_15) {
  *VAR_15 = VAR_19;
 }
 return VAR_21;
}
