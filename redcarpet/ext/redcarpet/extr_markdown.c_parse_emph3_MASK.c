
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int (* triple_emphasis ) (struct buf*,struct buf*,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__*,size_t,scalar_t__) ;
 size_t FUNC_2 (struct buf*,struct sd_markdown*,scalar_t__*,size_t,scalar_t__) ;
 size_t FUNC_3 (struct buf*,struct sd_markdown*,scalar_t__*,size_t,scalar_t__) ;
 int FUNC_4 (struct buf*,struct sd_markdown*,scalar_t__*,size_t) ;
 struct buf* FUNC_5 (struct sd_markdown*,int ) ;
 int FUNC_6 (struct sd_markdown*,int ) ;
 int FUNC_7 (struct buf*,struct buf*,int ) ;

__attribute__((used)) static size_t
FUNC_8(struct buf *VAR_1, struct sd_markdown *VAR_2, uint8_t *VAR_3, size_t VAR_4, uint8_t VAR_5)
{
 size_t VAR_6 = 0, VAR_7;
 int VAR_8;

 while (VAR_6 < VAR_4) {
  VAR_7 = FUNC_1(VAR_3 + VAR_6, VAR_4 - VAR_6, VAR_5);
  if (!VAR_7) return 0;
  VAR_6 += VAR_7;


  if (VAR_3[VAR_6] != VAR_5 || FUNC_0(VAR_3[VAR_6 - 1]))
   continue;

  if (VAR_6 + 2 < VAR_4 && VAR_3[VAR_6 + 1] == VAR_5 && VAR_3[VAR_6 + 2] == VAR_5 && VAR_2->cb.triple_emphasis) {

   struct buf *VAR_9 = FUNC_5(VAR_2, VAR_0);

   FUNC_4(VAR_9, VAR_2, VAR_3, VAR_6);
   VAR_8 = VAR_2->cb.triple_emphasis(VAR_1, VAR_9, VAR_2->opaque);
   FUNC_6(VAR_2, VAR_0);
   return VAR_8 ? VAR_6 + 3 : 0;

  } else if (VAR_6 + 1 < VAR_4 && VAR_3[VAR_6 + 1] == VAR_5) {

   VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3 - 2, VAR_4 + 2, VAR_5);
   if (!VAR_7) return 0;
   else return VAR_7 - 2;

  } else {

   VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3 - 1, VAR_4 + 1, VAR_5);
   if (!VAR_7) return 0;
   else return VAR_7 - 1;
  }
 }
 return 0;
}
