
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int (* strikethrough ) (struct buf*,struct buf*,int ) ;int (* highlight ) (struct buf*,struct buf*,int ) ;int (* double_emphasis ) (struct buf*,struct buf*,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__*,size_t,scalar_t__) ;
 int FUNC_2 (struct buf*,struct sd_markdown*,scalar_t__*,size_t) ;
 struct buf* FUNC_3 (struct sd_markdown*,int ) ;
 int FUNC_4 (struct sd_markdown*,int ) ;
 int FUNC_5 (struct buf*,struct buf*,int ) ;
 int FUNC_6 (struct buf*,struct buf*,int ) ;
 int FUNC_7 (struct buf*,struct buf*,int ) ;

__attribute__((used)) static size_t
FUNC_8(struct buf *VAR_1, struct sd_markdown *VAR_2, uint8_t *VAR_3, size_t VAR_4, uint8_t VAR_5)
{
 size_t VAR_6 = 0, VAR_7;
 struct buf *VAR_8 = 0;
 int VAR_9;

 while (VAR_6 < VAR_4) {
  VAR_7 = FUNC_1(VAR_3 + VAR_6, VAR_4 - VAR_6, VAR_5);
  if (!VAR_7) return 0;
  VAR_6 += VAR_7;

  if (VAR_6 + 1 < VAR_4 && VAR_3[VAR_6] == VAR_5 && VAR_3[VAR_6 + 1] == VAR_5 && VAR_6 && !FUNC_0(VAR_3[VAR_6 - 1])) {
   VAR_8 = FUNC_3(VAR_2, VAR_0);
   FUNC_2(VAR_8, VAR_2, VAR_3, VAR_6);

   if (VAR_5 == '~')
    VAR_9 = VAR_2->cb.strikethrough(VAR_1, VAR_8, VAR_2->opaque);
   else if (VAR_5 == '=')
    VAR_9 = VAR_2->cb.highlight(VAR_1, VAR_8, VAR_2->opaque);
   else
    VAR_9 = VAR_2->cb.double_emphasis(VAR_1, VAR_8, VAR_2->opaque);

   FUNC_4(VAR_2, VAR_0);
   return VAR_9 ? VAR_6 + 2 : 0;
  }
  VAR_6++;
 }
 return 0;
}
