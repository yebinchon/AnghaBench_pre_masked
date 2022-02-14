
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_15__ {size_t avail_in; scalar_t__ avail_out; scalar_t__ next_out; int next_in; } ;
struct TYPE_16__ {char finished; size_t inbuf_len; scalar_t__ outbuf_len; scalar_t__ outbuf; TYPE_13__ strm; int inbuf; } ;
typedef TYPE_1__ php_zlib_filter_data ;
typedef int php_stream_filter_status_t ;
struct TYPE_17__ {int abstract; } ;
typedef TYPE_2__ php_stream_filter ;
struct TYPE_18__ {scalar_t__ head; } ;
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
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (TYPE_13__*,int ) ;
 int FUNC_3 (TYPE_13__*) ;
 int FUNC_4 (int ,scalar_t__,size_t) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (scalar_t__) ;
 TYPE_4__* FUNC_8 (int *,int ,size_t,int,int ) ;

__attribute__((used)) static php_stream_filter_status_t FUNC_9(
 php_stream *VAR_8,
 php_stream_filter *VAR_9,
 php_stream_bucket_brigade *VAR_10,
 php_stream_bucket_brigade *VAR_11,
 size_t *VAR_12,
 int VAR_13
 )
{
 php_zlib_filter_data *VAR_14;
 php_stream_bucket *VAR_15;
 size_t VAR_16 = 0;
 int VAR_17;
 php_stream_filter_status_t VAR_18 = VAR_1;

 if (!VAR_9 || !FUNC_0(VAR_9->abstract)) {

  return VAR_0;
 }

 VAR_14 = (php_zlib_filter_data *)(FUNC_0(VAR_9->abstract));

 while (VAR_10->head) {
  size_t VAR_19 = 0, VAR_20;

  VAR_15 = FUNC_7(VAR_10->head);

  while (VAR_19 < (unsigned int) VAR_15->buflen && !VAR_14->finished) {

   VAR_20 = VAR_15->buflen - VAR_19;
   if (VAR_20 > VAR_14->inbuf_len) {
    VAR_20 = VAR_14->inbuf_len;
   }
   FUNC_4(VAR_14->strm.next_in, VAR_15->buf + VAR_19, VAR_20);
   VAR_14->strm.avail_in = VAR_20;

   VAR_17 = FUNC_2(&(VAR_14->strm), VAR_13 & VAR_2 ? VAR_4 : VAR_7);
   if (VAR_17 == VAR_6) {
    FUNC_3(&(VAR_14->strm));
    VAR_14->finished = '\1';
    VAR_18 = VAR_3;
   } else if (VAR_17 != VAR_5) {

    FUNC_6(VAR_15);

    VAR_14->strm.next_in = VAR_14->inbuf;
    VAR_14->strm.avail_in = 0;
    return VAR_0;
   }
   VAR_20 -= VAR_14->strm.avail_in;
   VAR_14->strm.next_in = VAR_14->inbuf;
   VAR_14->strm.avail_in = 0;
   VAR_19 += VAR_20;

   if (VAR_14->strm.avail_out < VAR_14->outbuf_len) {
    php_stream_bucket *VAR_21;
    size_t VAR_22 = VAR_14->outbuf_len - VAR_14->strm.avail_out;
    VAR_21 = FUNC_8(
     VAR_8, FUNC_1((char *) VAR_14->outbuf, VAR_22), VAR_22, 1, 0);
    FUNC_5(VAR_11, VAR_21);
    VAR_14->strm.avail_out = VAR_14->outbuf_len;
    VAR_14->strm.next_out = VAR_14->outbuf;
    VAR_18 = VAR_3;
   }

  }
  VAR_16 += VAR_15->buflen;
  FUNC_6(VAR_15);
 }

 if (!VAR_14->finished && VAR_13 & VAR_2) {

  VAR_17 = VAR_5;
  while (VAR_17 == VAR_5) {
   VAR_17 = FUNC_2(&(VAR_14->strm), VAR_4);
   if (VAR_14->strm.avail_out < VAR_14->outbuf_len) {
    size_t VAR_23 = VAR_14->outbuf_len - VAR_14->strm.avail_out;

    VAR_15 = FUNC_8(
     VAR_8, FUNC_1((char *) VAR_14->outbuf, VAR_23), VAR_23, 1, 0);
    FUNC_5(VAR_11, VAR_15);
    VAR_14->strm.avail_out = VAR_14->outbuf_len;
    VAR_14->strm.next_out = VAR_14->outbuf;
    VAR_18 = VAR_3;
   }
  }
 }

 if (VAR_12) {
  *VAR_12 = VAR_16;
 }

 return VAR_18;
}
