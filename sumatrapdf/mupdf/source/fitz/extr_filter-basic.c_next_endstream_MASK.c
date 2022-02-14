
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct endstream_filter {size_t remain; size_t offset; unsigned char* buffer; size_t extras; int size; int warned; TYPE_3__* chain; } ;
struct TYPE_5__ {unsigned char* rp; unsigned char* wp; size_t pos; int eof; struct endstream_filter* state; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;
struct TYPE_6__ {int rp; } ;


 int VAR_0 ;
 size_t FUNC_0 (int *,TYPE_3__*,size_t) ;
 unsigned char* FUNC_1 (unsigned char*,size_t,char*,int) ;
 int FUNC_2 (int *,TYPE_3__*,size_t,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (unsigned char*,int ,size_t) ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int
FUNC_6(fz_context *VAR_1, fz_stream *VAR_2, size_t VAR_3)
{
 struct endstream_filter *VAR_4 = VAR_2->state;
 size_t VAR_5, VAR_6, VAR_7;
 unsigned char *VAR_8;

 if (VAR_4->remain == 0)
  goto look_for_endstream;

 FUNC_2(VAR_1, VAR_4->chain, VAR_4->offset, 0);
 VAR_5 = FUNC_0(VAR_1, VAR_4->chain, VAR_3);
 if (VAR_5 == 0)
  return VAR_0;
 if (VAR_5 > VAR_4->remain)
  VAR_5 = VAR_4->remain;
 if (VAR_5 > sizeof(VAR_4->buffer))
  VAR_5 = sizeof(VAR_4->buffer);
 FUNC_4(VAR_4->buffer, VAR_4->chain->rp, VAR_5);
 VAR_2->rp = VAR_4->buffer;
 VAR_2->wp = VAR_2->rp + VAR_5;
 VAR_4->chain->rp += VAR_5;
 VAR_4->remain -= VAR_5;
 VAR_4->offset += VAR_5;
 VAR_2->pos += VAR_5;
 return *VAR_2->rp++;

look_for_endstream:
 VAR_6 = VAR_4->extras;
 if (VAR_6)
  FUNC_5(VAR_4->buffer, VAR_2->rp, VAR_6);
 VAR_2->rp = VAR_4->buffer;
 VAR_2->wp = VAR_2->rp + VAR_6;





 VAR_7 = VAR_4->size * 2;
 if (VAR_7 > sizeof(VAR_4->buffer))
  VAR_7 = sizeof(VAR_4->buffer);
 VAR_4->size = VAR_7;


 FUNC_2(VAR_1, VAR_4->chain, VAR_4->offset, 0);
 while (VAR_6 < VAR_7)
 {
  VAR_5 = FUNC_0(VAR_1, VAR_4->chain, VAR_7 - VAR_6);
  if (VAR_5 == 0)
   break;
  if (VAR_5 > VAR_7 - VAR_6)
   VAR_5 = VAR_7 - VAR_6;
  FUNC_4(VAR_2->wp, VAR_4->chain->rp, VAR_5);
  VAR_2->wp += VAR_5;
  VAR_4->chain->rp += VAR_5;
  VAR_6 += VAR_5;
  VAR_4->offset += VAR_5;
 }


 VAR_8 = FUNC_1(VAR_4->buffer, VAR_6, "endstream", 9);
 if (VAR_8)
 {

  if (VAR_8 > VAR_4->buffer && VAR_8[-1] == '\n') --VAR_8;
  if (VAR_8 > VAR_4->buffer && VAR_8[-1] == '\r') --VAR_8;
  VAR_5 = VAR_8 - VAR_4->buffer;
  VAR_2->eof = 1;
 }
 else if (VAR_6 > 11)
  VAR_5 = VAR_6 - 11;
 else
  VAR_5 = VAR_6;


 VAR_4->extras = VAR_6 - VAR_5;
 VAR_2->wp = VAR_2->rp + VAR_5;
 VAR_2->pos += VAR_5;

 if (VAR_5 == 0)
  return VAR_0;

 if (!VAR_4->warned)
 {
  VAR_4->warned = 1;
  FUNC_3(VAR_1, "PDF stream Length incorrect");
 }
 return *VAR_2->rp++;
}
