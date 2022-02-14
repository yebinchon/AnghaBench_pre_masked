
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ n; scalar_t__ segment_length; unsigned char* pos; unsigned char separator; int dlen; int delim; } ;
typedef TYPE_1__ coap_parse_iterator_t ;


 scalar_t__ FUNC_0 (int ,int ,unsigned char) ;

unsigned char * FUNC_1(coap_parse_iterator_t *VAR_0) {
  unsigned char *VAR_1;

  if (!VAR_0)
    return ((void*)0);


  VAR_0->n -= VAR_0->segment_length;
  VAR_0->pos += VAR_0->segment_length;
  VAR_0->segment_length = 0;


  if (!VAR_0->n || FUNC_0(VAR_0->delim, VAR_0->dlen, *VAR_0->pos)) {
    VAR_0->pos = ((void*)0);
    return ((void*)0);
  }


  if (*VAR_0->pos == VAR_0->separator) {
    ++VAR_0->pos;
    --VAR_0->n;
  }

  VAR_1 = VAR_0->pos;

  while (VAR_0->segment_length < VAR_0->n && *VAR_1 != VAR_0->separator &&
  !FUNC_0(VAR_0->delim, VAR_0->dlen, *VAR_1)) {
    ++VAR_1;
    ++VAR_0->segment_length;
  }

  if (!VAR_0->n) {
    VAR_0->pos = ((void*)0);
    VAR_0->segment_length = 0;
  }

  return VAR_0->pos;
}
