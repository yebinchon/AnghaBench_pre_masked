
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_3__ {int (* doc_footer ) (struct buf*,int ) ;int (* doc_header ) (struct buf*,int ) ;} ;
struct sd_markdown {int ext_flags; TYPE_2__* work_bufs; int footnotes_used; int footnotes_found; int refs; int opaque; TYPE_1__ cb; } ;
struct buf {int size; char* data; } ;
struct TYPE_4__ {scalar_t__ size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*,size_t) ;
 struct buf* FUNC_4 (int) ;
 int FUNC_5 (struct buf*,char) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct buf*,char const*,size_t) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char const*,size_t,int *) ;
 scalar_t__ FUNC_11 (char const*,size_t,size_t,size_t*,int *) ;
 scalar_t__ FUNC_12 (char const*,size_t,size_t,size_t*,int ) ;
 scalar_t__ FUNC_13 (char const*,char const*,int) ;
 int FUNC_14 (int *,int,int) ;
 int FUNC_15 (struct buf*,struct sd_markdown*,char*,int) ;
 int FUNC_16 (struct buf*,struct sd_markdown*,int *) ;
 int FUNC_17 (struct buf*,int ) ;
 int FUNC_18 (struct buf*,int ) ;

void
FUNC_19(struct buf *VAR_5, const uint8_t *VAR_6, size_t VAR_7, struct sd_markdown *VAR_8)
{

 static const char VAR_9[] = {0xEF, 0xBB, 0xBF};

 struct buf *VAR_10;
 size_t VAR_11, VAR_12;
 int VAR_13 = 0;

 VAR_10 = FUNC_4(64);
 if (!VAR_10)
  return;


 FUNC_3(VAR_10, VAR_7);


 FUNC_14(&VAR_8->refs, 0x0, VAR_4 * sizeof(void *));

 int VAR_14 = VAR_8->ext_flags & VAR_3;
 int VAR_15 = VAR_8->ext_flags & VAR_2;


 if (VAR_14) {
  FUNC_14(&VAR_8->footnotes_found, 0x0, sizeof(VAR_8->footnotes_found));
  FUNC_14(&VAR_8->footnotes_used, 0x0, sizeof(VAR_8->footnotes_used));
 }


 VAR_11 = 0;



 if (VAR_7 >= 3 && FUNC_13(VAR_6, VAR_9, 3) == 0)
  VAR_11 += 3;

 while (VAR_11 < VAR_7) {
  if (VAR_15 && (FUNC_10(VAR_6 + VAR_11, VAR_7 - VAR_11, ((void*)0)) != 0))
   VAR_13 = !VAR_13;

  if (!VAR_13 && VAR_14 && FUNC_11(VAR_6, VAR_11, VAR_7, &VAR_12, &VAR_8->footnotes_found))
   VAR_11 = VAR_12;
  else if (!VAR_13 && FUNC_12(VAR_6, VAR_11, VAR_7, &VAR_12, VAR_8->refs))
   VAR_11 = VAR_12;
  else {
   VAR_12 = VAR_11;
   while (VAR_12 < VAR_7 && VAR_6[VAR_12] != '\n' && VAR_6[VAR_12] != '\r')
    VAR_12++;


   if (VAR_12 > VAR_11)
    FUNC_7(VAR_10, VAR_6 + VAR_11, VAR_12 - VAR_11);

   while (VAR_12 < VAR_7 && (VAR_6[VAR_12] == '\n' || VAR_6[VAR_12] == '\r')) {

    if (VAR_6[VAR_12] == '\n' || (VAR_12 + 1 < VAR_7 && VAR_6[VAR_12 + 1] != '\n'))
     FUNC_5(VAR_10, '\n');
    VAR_12++;
   }

   VAR_11 = VAR_12;
  }
 }


 FUNC_3(VAR_5, ((VAR_10->size) + ((VAR_10->size) >> 1)));


 if (VAR_8->cb.doc_header)
  VAR_8->cb.doc_header(VAR_5, VAR_8->opaque);

 if (VAR_10->size) {

  if (VAR_10->data[VAR_10->size - 1] != '\n' && VAR_10->data[VAR_10->size - 1] != '\r')
   FUNC_5(VAR_10, '\n');

  FUNC_15(VAR_5, VAR_8, VAR_10->data, VAR_10->size);
 }


 if (VAR_14)
  FUNC_16(VAR_5, VAR_8, &VAR_8->footnotes_used);

 if (VAR_8->cb.doc_footer)
  VAR_8->cb.doc_footer(VAR_5, VAR_8->opaque);


 FUNC_2(VAR_5);


 FUNC_6(VAR_10);
 FUNC_9(VAR_8->refs);
 if (VAR_14) {
  FUNC_8(&VAR_8->footnotes_found, 1);
  FUNC_8(&VAR_8->footnotes_used, 0);
 }

 FUNC_1(VAR_8->work_bufs[VAR_1].size == 0);
 FUNC_1(VAR_8->work_bufs[VAR_0].size == 0);
}
