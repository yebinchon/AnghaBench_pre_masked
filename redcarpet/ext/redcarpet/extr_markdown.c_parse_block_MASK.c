
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_4__ {int (* hrule ) (struct buf*,int ) ;scalar_t__ blockhtml; } ;
struct sd_markdown {scalar_t__ max_nesting; int ext_flags; int opaque; TYPE_2__ cb; TYPE_1__* work_bufs; } ;
struct buf {int dummy; } ;
struct TYPE_3__ {scalar_t__ size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sd_markdown*,char*,size_t) ;
 size_t FUNC_1 (char*,size_t) ;
 scalar_t__ FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (struct buf*,struct sd_markdown*,char*,size_t) ;
 scalar_t__ FUNC_4 (struct buf*,struct sd_markdown*,char*,size_t) ;
 scalar_t__ FUNC_5 (struct buf*,struct sd_markdown*,char*,size_t) ;
 size_t FUNC_6 (struct buf*,struct sd_markdown*,char*,size_t) ;
 size_t FUNC_7 (struct buf*,struct sd_markdown*,char*,size_t,int) ;
 scalar_t__ FUNC_8 (struct buf*,struct sd_markdown*,char*,size_t,int ) ;
 scalar_t__ FUNC_9 (struct buf*,struct sd_markdown*,char*,size_t) ;
 size_t FUNC_10 (struct buf*,struct sd_markdown*,char*,size_t) ;
 scalar_t__ FUNC_11 (char*,size_t) ;
 scalar_t__ FUNC_12 (char*,size_t) ;
 scalar_t__ FUNC_13 (char*,size_t) ;
 scalar_t__ FUNC_14 (char*,size_t) ;
 int FUNC_15 (struct buf*,int ) ;

__attribute__((used)) static void
FUNC_16(struct buf *VAR_6, struct sd_markdown *VAR_7, uint8_t *VAR_8, size_t VAR_9)
{
 size_t VAR_10, VAR_11, VAR_12;
 uint8_t *VAR_13;
 VAR_10 = 0;

 if (VAR_7->work_bufs[VAR_1].size +
  VAR_7->work_bufs[VAR_0].size > VAR_7->max_nesting)
  return;

 while (VAR_10 < VAR_9) {
  VAR_13 = VAR_8 + VAR_10;
  VAR_11 = VAR_9 - VAR_10;

  if (FUNC_0(VAR_7, VAR_13, VAR_11))
   VAR_10 += FUNC_3(VAR_6, VAR_7, VAR_13, VAR_11);

  else if (VAR_8[VAR_10] == '<' && VAR_7->cb.blockhtml &&
    (VAR_12 = FUNC_7(VAR_6, VAR_7, VAR_13, VAR_11, 1)) != 0)
   VAR_10 += VAR_12;

  else if ((VAR_12 = FUNC_1(VAR_13, VAR_11)) != 0)
   VAR_10 += VAR_12;

  else if (FUNC_2(VAR_13, VAR_11)) {
   if (VAR_7->cb.hrule)
    VAR_7->cb.hrule(VAR_6, VAR_7->opaque);

   while (VAR_10 < VAR_9 && VAR_8[VAR_10] != '\n')
    VAR_10++;

   VAR_10++;
  }

  else if ((VAR_7->ext_flags & VAR_3) != 0 &&
   (VAR_12 = FUNC_6(VAR_6, VAR_7, VAR_13, VAR_11)) != 0)
   VAR_10 += VAR_12;

  else if ((VAR_7->ext_flags & VAR_4) != 0 &&
   (VAR_12 = FUNC_10(VAR_6, VAR_7, VAR_13, VAR_11)) != 0)
   VAR_10 += VAR_12;

  else if (FUNC_13(VAR_13, VAR_11))
   VAR_10 += FUNC_5(VAR_6, VAR_7, VAR_13, VAR_11);

  else if (!(VAR_7->ext_flags & VAR_2) && FUNC_11(VAR_13, VAR_11))
   VAR_10 += FUNC_4(VAR_6, VAR_7, VAR_13, VAR_11);

  else if (FUNC_14(VAR_13, VAR_11))
   VAR_10 += FUNC_8(VAR_6, VAR_7, VAR_13, VAR_11, 0);

  else if (FUNC_12(VAR_13, VAR_11))
   VAR_10 += FUNC_8(VAR_6, VAR_7, VAR_13, VAR_11, VAR_5);

  else
   VAR_10 += FUNC_9(VAR_6, VAR_7, VAR_13, VAR_11);
 }
}
