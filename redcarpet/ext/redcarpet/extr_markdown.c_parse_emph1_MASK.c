
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int (* underline ) (struct buf*,struct buf*,int ) ;int (* emphasis ) (struct buf*,struct buf*,int ) ;} ;
struct sd_markdown {int ext_flags; int opaque; TYPE_1__ cb; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char) ;
 size_t FUNC_2 (char*,size_t,char) ;
 int FUNC_3 (struct buf*,struct sd_markdown*,char*,size_t) ;
 struct buf* FUNC_4 (struct sd_markdown*,int ) ;
 int FUNC_5 (struct sd_markdown*,int ) ;
 int FUNC_6 (struct buf*,struct buf*,int ) ;
 int FUNC_7 (struct buf*,struct buf*,int ) ;

__attribute__((used)) static size_t
FUNC_8(struct buf *VAR_3, struct sd_markdown *VAR_4, uint8_t *VAR_5, size_t VAR_6, uint8_t VAR_7)
{
 size_t VAR_8 = 0, VAR_9;
 struct buf *VAR_10 = 0;
 int VAR_11;


 if (VAR_6 > 1 && VAR_5[0] == VAR_7 && VAR_5[1] == VAR_7) VAR_8 = 1;

 while (VAR_8 < VAR_6) {
  VAR_9 = FUNC_2(VAR_5 + VAR_8, VAR_6 - VAR_8, VAR_7);
  if (!VAR_9) return 0;
  VAR_8 += VAR_9;
  if (VAR_8 >= VAR_6) return 0;

  if (VAR_5[VAR_8] == VAR_7 && !FUNC_1(VAR_5[VAR_8 - 1])) {

   if (VAR_4->ext_flags & VAR_1) {
    if (VAR_8 + 1 < VAR_6 && FUNC_0(VAR_5[VAR_8 + 1]))
     continue;
   }

   VAR_10 = FUNC_4(VAR_4, VAR_0);
   FUNC_3(VAR_10, VAR_4, VAR_5, VAR_8);

   if (VAR_4->ext_flags & VAR_2 && VAR_7 == '_')
    VAR_11 = VAR_4->cb.underline(VAR_3, VAR_10, VAR_4->opaque);
   else
    VAR_11 = VAR_4->cb.emphasis(VAR_3, VAR_10, VAR_4->opaque);

   FUNC_5(VAR_4, VAR_0);
   return VAR_11 ? VAR_8 + 1 : 0;
  }
 }

 return 0;
}
