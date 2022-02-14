
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int (* header ) (struct buf*,struct buf*,int,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf*,struct sd_markdown*,char*,size_t) ;
 struct buf* FUNC_1 (struct sd_markdown*,int ) ;
 int FUNC_2 (struct sd_markdown*,int ) ;
 int FUNC_3 (struct buf*,struct buf*,int,int ) ;

__attribute__((used)) static size_t
FUNC_4(struct buf *VAR_1, struct sd_markdown *VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
 size_t VAR_5 = 0;
 size_t VAR_6, VAR_7, VAR_8;

 while (VAR_5 < VAR_4 && VAR_5 < 6 && VAR_3[VAR_5] == '#')
  VAR_5++;

 for (VAR_6 = VAR_5; VAR_6 < VAR_4 && VAR_3[VAR_6] == ' '; VAR_6++);

 for (VAR_7 = VAR_6; VAR_7 < VAR_4 && VAR_3[VAR_7] != '\n'; VAR_7++);
 VAR_8 = VAR_7;

 while (VAR_7 && VAR_3[VAR_7 - 1] == '#')
  VAR_7--;

 while (VAR_7 && VAR_3[VAR_7 - 1] == ' ')
  VAR_7--;

 if (VAR_7 > VAR_6) {
  struct buf *VAR_9 = FUNC_1(VAR_2, VAR_0);

  FUNC_0(VAR_9, VAR_2, VAR_3 + VAR_6, VAR_7 - VAR_6);

  if (VAR_2->cb.header)
   VAR_2->cb.header(VAR_1, VAR_9, (int)VAR_5, VAR_2->opaque);

  FUNC_2(VAR_2, VAR_0);
 }

 return VAR_8;
}
