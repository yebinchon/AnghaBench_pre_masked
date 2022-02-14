
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int (* superscript ) (struct buf*,struct buf*,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (struct buf*,struct sd_markdown*,char*,size_t) ;
 struct buf* FUNC_2 (struct sd_markdown*,int ) ;
 int FUNC_3 (struct sd_markdown*,int ) ;
 int FUNC_4 (struct buf*,struct buf*,int ) ;

__attribute__((used)) static size_t
FUNC_5(struct buf *VAR_1, struct sd_markdown *VAR_2, uint8_t *VAR_3, size_t VAR_4, size_t VAR_5)
{
 size_t VAR_6, VAR_7;
 struct buf *VAR_8;

 if (!VAR_2->cb.superscript)
  return 0;

 if (VAR_5 < 2)
  return 0;

 if (VAR_3[1] == '(') {
  VAR_6 = VAR_7 = 2;

  while (VAR_7 < VAR_5 && VAR_3[VAR_7] != ')' && VAR_3[VAR_7 - 1] != '\\')
   VAR_7++;

  if (VAR_7 == VAR_5)
   return 0;
 } else {
  VAR_6 = VAR_7 = 1;

  while (VAR_7 < VAR_5 && !FUNC_0(VAR_3[VAR_7]))
   VAR_7++;
 }

 if (VAR_7 - VAR_6 == 0)
  return (VAR_6 == 2) ? 3 : 0;

 VAR_8 = FUNC_2(VAR_2, VAR_0);
 FUNC_1(VAR_8, VAR_2, VAR_3 + VAR_6, VAR_7 - VAR_6);
 VAR_2->cb.superscript(VAR_1, VAR_8, VAR_2->opaque);
 FUNC_3(VAR_2, VAR_0);

 return (VAR_6 == 2) ? VAR_7 + 1 : VAR_7;
}
