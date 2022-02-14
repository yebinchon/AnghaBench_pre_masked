
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_15__ {size_t avail_in; scalar_t__ avail_out; scalar_t__ next_out; int next_in; } ;
struct TYPE_16__ {size_t inbuf_len; scalar_t__ outbuf_len; scalar_t__ outbuf; TYPE_14__ strm; int inbuf; } ;
typedef TYPE_1__ php_zlib_filter_data ;
typedef int php_stream_filter_status_t ;
struct TYPE_17__ {int abstract; } ;
typedef TYPE_2__ php_stream_filter ;
struct TYPE_18__ {TYPE_4__* head; } ;
typedef TYPE_3__ php_stream_bucket_brigade ;
struct TYPE_19__ {size_t buflen; scalar_t__ buf; } ;
typedef TYPE_4__ php_stream_bucket ;
typedef int php_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (TYPE_14__*,int ) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (int ,scalar_t__,size_t) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (int *,int ,size_t,int,int ) ;

__attribute__((used)) static php_stream_filter_status_t FUNC_8(
 php_stream *VAR_10,
 php_stream_filter *VAR_11,
 php_stream_bucket_brigade *VAR_12,
 php_stream_bucket_brigade *VAR_13,
 size_t *VAR_14,
 int VAR_15
 )
{
 php_zlib_filter_data *VAR_16;
 php_stream_bucket *VAR_17;
 size_t VAR_18 = 0;
 int VAR_19;
 php_stream_filter_status_t VAR_20 = VAR_1;

 if (!VAR_11 || !FUNC_0(VAR_11->abstract)) {

  return VAR_0;
 }

 VAR_16 = (php_zlib_filter_data *)(FUNC_0(VAR_11->abstract));

 while (VAR_12->head) {
  size_t VAR_21 = 0, VAR_22;

  VAR_17 = VAR_12->head;

  VAR_17 = FUNC_6(VAR_17);

  while (VAR_21 < (unsigned int) VAR_17->buflen) {
   VAR_22 = VAR_17->buflen - VAR_21;
   if (VAR_22 > VAR_16->inbuf_len) {
    VAR_22 = VAR_16->inbuf_len;
   }
   FUNC_3(VAR_16->strm.next_in, VAR_17->buf + VAR_21, VAR_22);
   VAR_16->strm.avail_in = VAR_22;

   VAR_19 = FUNC_1(&(VAR_16->strm), VAR_15 & VAR_2 ? VAR_6 : (VAR_15 & VAR_3 ? VAR_9 : VAR_7));
   if (VAR_19 != VAR_8) {

    FUNC_5(VAR_17);
    return VAR_0;
   }
   VAR_22 -= VAR_16->strm.avail_in;
   VAR_16->strm.next_in = VAR_16->inbuf;
   VAR_16->strm.avail_in = 0;
   VAR_21 += VAR_22;

   if (VAR_16->strm.avail_out < VAR_16->outbuf_len) {
    php_stream_bucket *VAR_23;
    size_t VAR_24 = VAR_16->outbuf_len - VAR_16->strm.avail_out;

    VAR_23 = FUNC_7(
     VAR_10, FUNC_2((char *) VAR_16->outbuf, VAR_24), VAR_24, 1, 0);
    FUNC_4(VAR_13, VAR_23);
    VAR_16->strm.avail_out = VAR_16->outbuf_len;
    VAR_16->strm.next_out = VAR_16->outbuf;
    VAR_20 = VAR_4;
   }
  }
  VAR_18 += VAR_17->buflen;
  FUNC_5(VAR_17);
 }

 if (VAR_15 & VAR_2) {

  VAR_19 = VAR_8;
  while (VAR_19 == VAR_8) {
   VAR_19 = FUNC_1(&(VAR_16->strm), VAR_5);
   if (VAR_16->strm.avail_out < VAR_16->outbuf_len) {
    size_t VAR_25 = VAR_16->outbuf_len - VAR_16->strm.avail_out;

    VAR_17 = FUNC_7(
     VAR_10, FUNC_2((char *) VAR_16->outbuf, VAR_25), VAR_25, 1, 0);
    FUNC_4(VAR_13, VAR_17);
    VAR_16->strm.avail_out = VAR_16->outbuf_len;
    VAR_16->strm.next_out = VAR_16->outbuf;
    VAR_20 = VAR_4;
   }
  }
 }

 if (VAR_14) {
  *VAR_14 = VAR_18;
 }

 return VAR_20;
}
