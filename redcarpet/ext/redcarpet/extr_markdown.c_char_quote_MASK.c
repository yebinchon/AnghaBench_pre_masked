
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int (* quote ) (struct buf*,struct buf*,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {char* member_0; size_t member_1; int member_3; int member_2; } ;


 int FUNC_0 (struct buf*,struct buf*,int ) ;
 int FUNC_1 (struct buf*,struct buf*,int ) ;

__attribute__((used)) static size_t
FUNC_2(struct buf *VAR_0, struct sd_markdown *VAR_1, uint8_t *VAR_2, size_t VAR_3, size_t VAR_4)
{
 size_t VAR_5, VAR_6 = 0, VAR_7, VAR_8, VAR_9;


 while (VAR_6 < VAR_4 && VAR_2[VAR_6] == '"')
  VAR_6++;


 VAR_7 = 0;
 for (VAR_5 = VAR_6; VAR_5 < VAR_4 && VAR_7 < VAR_6; VAR_5++) {
  if (VAR_2[VAR_5] == '"') VAR_7++;
  else VAR_7 = 0;
 }

 if (VAR_7 < VAR_6 && VAR_5 >= VAR_4)
  return 0;


 VAR_8 = VAR_6;
 while (VAR_8 < VAR_5 && VAR_2[VAR_8] == ' ')
  VAR_8++;

 VAR_9 = VAR_5 - VAR_6;
 while (VAR_9 > VAR_6 && VAR_2[VAR_9-1] == ' ')
  VAR_9--;


 if (VAR_8 < VAR_9) {
  struct buf VAR_10 = { VAR_2 + VAR_8, VAR_9 - VAR_8, 0, 0 };
  if (!VAR_1->cb.quote(VAR_0, &VAR_10, VAR_1->opaque))
   VAR_5 = 0;
 } else {
  if (!VAR_1->cb.quote(VAR_0, 0, VAR_1->opaque))
   VAR_5 = 0;
 }

 return VAR_5;
}
