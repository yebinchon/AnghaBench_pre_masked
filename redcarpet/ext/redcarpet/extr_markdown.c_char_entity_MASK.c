
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int (* entity ) (struct buf*,struct buf*,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {char* data; size_t size; int member_3; int member_2; int member_1; int member_0; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct buf*,char*,size_t) ;
 int FUNC_2 (struct buf*,struct buf*,int ) ;

__attribute__((used)) static size_t
FUNC_3(struct buf *VAR_0, struct sd_markdown *VAR_1, uint8_t *VAR_2, size_t VAR_3, size_t VAR_4)
{
 size_t VAR_5 = 1;
 struct buf VAR_6 = { 0, 0, 0, 0 };

 if (VAR_5 < VAR_4 && VAR_2[VAR_5] == '#')
  VAR_5++;

 while (VAR_5 < VAR_4 && FUNC_0(VAR_2[VAR_5]))
  VAR_5++;

 if (VAR_5 < VAR_4 && VAR_2[VAR_5] == ';')
  VAR_5++;
 else
  return 0;

 if (VAR_1->cb.entity) {
  VAR_6.data = VAR_2;
  VAR_6.size = VAR_5;
  VAR_1->cb.entity(VAR_0, &VAR_6, VAR_1->opaque);
 }
 else FUNC_1(VAR_0, VAR_2, VAR_5);

 return VAR_5;
}
