
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* rp; unsigned char* wp; int pos; TYPE_2__* state; } ;
typedef TYPE_1__ fz_stream ;
struct TYPE_6__ {unsigned char* buffer; int idx; TYPE_4__* page; int ctx; int chain; } ;
typedef TYPE_2__ fz_jbig2d ;
typedef int fz_context ;
struct TYPE_7__ {unsigned char* data; int height; int stride; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,int ,unsigned char*,int) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,unsigned char*,size_t) ;
 TYPE_4__* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(fz_context *VAR_2, fz_stream *VAR_3, size_t VAR_4)
{
 fz_jbig2d *VAR_5 = VAR_3->state;
 unsigned char VAR_6[4096];
 unsigned char *VAR_7 = VAR_5->buffer;
 unsigned char *VAR_8 = VAR_7;
 unsigned char *VAR_9;
 unsigned char *VAR_10;
 int VAR_11, VAR_12;
 size_t VAR_13;

 if (VAR_4 > sizeof(VAR_5->buffer))
  VAR_4 = sizeof(VAR_5->buffer);
 VAR_9 = VAR_7 + VAR_4;

 if (!VAR_5->page)
 {
  while (1)
  {
   VAR_13 = FUNC_0(VAR_2, VAR_5->chain, VAR_6, sizeof VAR_6);
   if (VAR_13 == 0)
    break;

   if (FUNC_3(VAR_5->ctx, VAR_6, VAR_13) < 0)
    FUNC_1(VAR_2, VAR_1, "cannot decode jbig2 image");
  }

  if (FUNC_2(VAR_5->ctx) < 0)
   FUNC_1(VAR_2, VAR_1, "cannot complete jbig2 image");

  VAR_5->page = FUNC_4(VAR_5->ctx);
  if (!VAR_5->page)
   FUNC_1(VAR_2, VAR_1, "no jbig2 image decoded");
 }

 VAR_10 = VAR_5->page->data;
 VAR_12 = VAR_5->page->height * VAR_5->page->stride;
 VAR_11 = VAR_5->idx;
 while (VAR_8 < VAR_9 && VAR_11 < VAR_12)
  *VAR_8++ = VAR_10[VAR_11++] ^ 0xff;
 VAR_5->idx = VAR_11;

 VAR_3->rp = VAR_7;
 VAR_3->wp = VAR_8;
 if (VAR_8 == VAR_7)
  return VAR_0;
 VAR_3->pos += VAR_8 - VAR_7;
 return *VAR_3->rp++;
}
