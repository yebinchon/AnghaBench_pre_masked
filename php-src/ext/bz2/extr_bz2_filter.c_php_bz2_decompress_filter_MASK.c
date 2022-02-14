
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int php_stream_filter_status_t ;
struct TYPE_17__ {int abstract; } ;
typedef TYPE_1__ php_stream_filter ;
struct TYPE_18__ {scalar_t__ head; } ;
typedef TYPE_2__ php_stream_bucket_brigade ;
struct TYPE_19__ {size_t buflen; scalar_t__ buf; } ;
typedef TYPE_3__ php_stream_bucket ;
typedef int php_stream ;
struct TYPE_21__ {size_t avail_in; scalar_t__ avail_out; int next_out; int next_in; } ;
struct TYPE_20__ {scalar_t__ status; size_t inbuf_len; scalar_t__ outbuf_len; int outbuf; TYPE_5__ strm; int inbuf; scalar_t__ expect_concatenated; int small_footprint; } ;
typedef TYPE_4__ php_bz2_filter_data ;
typedef TYPE_5__ bz_stream ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int ,scalar_t__,size_t) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (scalar_t__) ;
 TYPE_3__* FUNC_9 (int *,int ,size_t,int,int ) ;

__attribute__((used)) static php_stream_filter_status_t FUNC_10(
 php_stream *VAR_9,
 php_stream_filter *VAR_10,
 php_stream_bucket_brigade *VAR_11,
 php_stream_bucket_brigade *VAR_12,
 size_t *VAR_13,
 int VAR_14
 )
{
 php_bz2_filter_data *VAR_15;
 php_stream_bucket *VAR_16;
 size_t VAR_17 = 0;
 int VAR_18;
 php_stream_filter_status_t VAR_19 = VAR_6;
 bz_stream *VAR_20;

 if (!FUNC_3(VAR_10->abstract)) {

  return VAR_5;
 }

 VAR_15 = (php_bz2_filter_data *)FUNC_3(VAR_10->abstract);
 VAR_20 = &(VAR_15->strm);

 while (VAR_11->head) {
  size_t VAR_21 = 0, VAR_22;

  VAR_16 = FUNC_8(VAR_11->head);
  while (VAR_21 < VAR_16->buflen) {
   if (VAR_15->status == VAR_4) {
    VAR_18 = FUNC_2(VAR_20, 0, VAR_15->small_footprint);

    if (VAR_0 != VAR_18) {
     FUNC_7(VAR_16);
     return VAR_5;
    }

    VAR_15->status = VAR_3;
   }

   if (VAR_15->status != VAR_3) {
    VAR_17 += VAR_16->buflen;
    break;
   }

   VAR_22 = VAR_16->buflen - VAR_21;
   if (VAR_22 > VAR_15->inbuf_len) {
    VAR_22 = VAR_15->inbuf_len;
   }
   FUNC_5(VAR_15->strm.next_in, VAR_16->buf + VAR_21, VAR_22);
   VAR_15->strm.avail_in = VAR_22;

   VAR_18 = FUNC_0(&(VAR_15->strm));

   if (VAR_18 == VAR_1) {
    FUNC_1(&(VAR_15->strm));
    if (VAR_15->expect_concatenated) {
     VAR_15->status = VAR_4;
    } else {
     VAR_15->status = VAR_2;
    }
   } else if (VAR_18 != VAR_0) {

    FUNC_7(VAR_16);
    return VAR_5;
   }
   VAR_22 -= VAR_15->strm.avail_in;
   VAR_15->strm.next_in = VAR_15->inbuf;
   VAR_15->strm.avail_in = 0;
   VAR_17 += VAR_22;
   VAR_21 += VAR_22;

   if (VAR_15->strm.avail_out < VAR_15->outbuf_len) {
    php_stream_bucket *VAR_23;
    size_t VAR_24 = VAR_15->outbuf_len - VAR_15->strm.avail_out;
    VAR_23 = FUNC_9(VAR_9, FUNC_4(VAR_15->outbuf, VAR_24), VAR_24, 1, 0);
    FUNC_6(VAR_12, VAR_23);
    VAR_15->strm.avail_out = VAR_15->outbuf_len;
    VAR_15->strm.next_out = VAR_15->outbuf;
    VAR_19 = VAR_8;
   } else if (VAR_18 == VAR_1 && VAR_15->strm.avail_out >= VAR_15->outbuf_len) {

    FUNC_7(VAR_16);
    return VAR_8;
   }
  }

  FUNC_7(VAR_16);
 }

 if ((VAR_15->status == VAR_3) && (VAR_14 & VAR_7)) {

  VAR_18 = VAR_0;
  while (VAR_18 == VAR_0) {
   VAR_18 = FUNC_0(&(VAR_15->strm));
   if (VAR_15->strm.avail_out < VAR_15->outbuf_len) {
    size_t VAR_25 = VAR_15->outbuf_len - VAR_15->strm.avail_out;

    VAR_16 = FUNC_9(VAR_9, FUNC_4(VAR_15->outbuf, VAR_25), VAR_25, 1, 0);
    FUNC_6(VAR_12, VAR_16);
    VAR_15->strm.avail_out = VAR_15->outbuf_len;
    VAR_15->strm.next_out = VAR_15->outbuf;
    VAR_19 = VAR_8;
   } else if (VAR_18 == VAR_0) {
    break;
   }
  }
 }

 if (VAR_13) {
  *VAR_13 = VAR_17;
 }

 return VAR_19;
}
