
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int (* header ) (struct buf*,struct buf*,int,int ) ;int (* paragraph ) (struct buf*,struct buf*,int ) ;scalar_t__ blockhtml; } ;
struct sd_markdown {int ext_flags; int opaque; TYPE_1__ cb; } ;
struct buf {char* member_0; size_t size; size_t data; int member_3; int member_2; int member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sd_markdown*,char*,size_t) ;
 scalar_t__ FUNC_1 (char*,size_t,int *) ;
 scalar_t__ FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*,size_t) ;
 scalar_t__ FUNC_4 (char*,size_t) ;
 int FUNC_5 (char) ;
 scalar_t__ FUNC_6 (struct buf*,struct sd_markdown*,char*,size_t,int ) ;
 int FUNC_7 (struct buf*,struct sd_markdown*,size_t,int) ;
 scalar_t__ FUNC_8 (char*,size_t) ;
 scalar_t__ FUNC_9 (char*,size_t) ;
 scalar_t__ FUNC_10 (char*,size_t) ;
 struct buf* FUNC_11 (struct sd_markdown*,int ) ;
 int FUNC_12 (struct sd_markdown*,int ) ;
 int FUNC_13 (struct buf*,struct buf*,int ) ;
 int FUNC_14 (struct buf*,struct buf*,int ) ;
 int FUNC_15 (struct buf*,struct buf*,int,int ) ;

__attribute__((used)) static size_t
FUNC_16(struct buf *VAR_4, struct sd_markdown *VAR_5, uint8_t *VAR_6, size_t VAR_7)
{
 size_t VAR_8 = 0, VAR_9 = 0;
 int VAR_10 = 0, VAR_11 = 1;
 struct buf VAR_12 = { VAR_6, 0, 0, 0 };

 while (VAR_8 < VAR_7) {
  for (VAR_9 = VAR_8 + 1; VAR_9 < VAR_7 && VAR_6[VAR_9 - 1] != '\n'; VAR_9++) ;

  if (FUNC_2(VAR_6 + VAR_8, VAR_7 - VAR_8))
   break;

  if (!VAR_11 && (VAR_10 = FUNC_3(VAR_6 + VAR_8, VAR_7 - VAR_8)) != 0)
   break;

  VAR_11 = 0;

  if (FUNC_0(VAR_5, VAR_6 + VAR_8, VAR_7 - VAR_8) ||
   FUNC_4(VAR_6 + VAR_8, VAR_7 - VAR_8) ||
   FUNC_9(VAR_6 + VAR_8, VAR_7 - VAR_8)) {
   VAR_9 = VAR_8;
   break;
  }
  if ((VAR_5->ext_flags & VAR_3) && !FUNC_5(VAR_6[VAR_8])) {
   if (FUNC_8(VAR_6 + VAR_8, VAR_7 - VAR_8) ||
    FUNC_10(VAR_6 + VAR_8, VAR_7 - VAR_8)) {
    VAR_9 = VAR_8;
    break;
   }


   if (VAR_6[VAR_8] == '<' && VAR_5->cb.blockhtml &&
    FUNC_6(VAR_4, VAR_5, VAR_6 + VAR_8, VAR_7 - VAR_8, 0)) {
    VAR_9 = VAR_8;
    break;
   }


   if ((VAR_5->ext_flags & VAR_2) != 0 &&
    FUNC_1(VAR_6 + VAR_8, VAR_7 - VAR_8, ((void*)0)) != 0) {
    VAR_9 = VAR_8;
    break;
   }
  }

  VAR_8 = VAR_9;
 }

 VAR_12.size = VAR_8;
 while (VAR_12.size && VAR_6[VAR_12.size - 1] == '\n')
  VAR_12.size--;

 if (!VAR_10) {
  struct buf *VAR_13 = FUNC_11(VAR_5, VAR_0);
  FUNC_7(VAR_13, VAR_5, VAR_12.data, VAR_12.size);
  if (VAR_5->cb.paragraph)
   VAR_5->cb.paragraph(VAR_4, VAR_13, VAR_5->opaque);
  FUNC_12(VAR_5, VAR_0);
 } else {
  struct buf *VAR_14;

  if (VAR_12.size) {
   size_t VAR_15;
   VAR_8 = VAR_12.size;
   VAR_12.size -= 1;

   while (VAR_12.size && VAR_6[VAR_12.size] != '\n')
    VAR_12.size -= 1;

   VAR_15 = VAR_12.size + 1;
   while (VAR_12.size && VAR_6[VAR_12.size - 1] == '\n')
    VAR_12.size -= 1;

   if (VAR_12.size > 0) {
    struct buf *VAR_16 = FUNC_11(VAR_5, VAR_0);
    FUNC_7(VAR_16, VAR_5, VAR_12.data, VAR_12.size);

    if (VAR_5->cb.paragraph)
     VAR_5->cb.paragraph(VAR_4, VAR_16, VAR_5->opaque);

    FUNC_12(VAR_5, VAR_0);
    VAR_12.data += VAR_15;
    VAR_12.size = VAR_8 - VAR_15;
   }
   else VAR_12.size = VAR_8;
  }

  VAR_14 = FUNC_11(VAR_5, VAR_1);
  FUNC_7(VAR_14, VAR_5, VAR_12.data, VAR_12.size);

  if (VAR_5->cb.header)
   VAR_5->cb.header(VAR_4, VAR_14, (int)VAR_10, VAR_5->opaque);

  FUNC_12(VAR_5, VAR_1);
 }

 return VAR_9;
}
