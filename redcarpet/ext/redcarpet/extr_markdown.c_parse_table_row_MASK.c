
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int (* table_row ) (struct buf*,struct buf*,int ) ;int (* table_cell ) (struct buf*,struct buf*,int,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {int member_3; int member_2; int member_1; int member_0; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct buf*,struct sd_markdown*,char*,int) ;
 struct buf* FUNC_2 (struct sd_markdown*,int ) ;
 int FUNC_3 (struct sd_markdown*,int ) ;
 int FUNC_4 (struct buf*,struct buf*,int,int ) ;
 int FUNC_5 (struct buf*,struct buf*,int,int ) ;
 int FUNC_6 (struct buf*,struct buf*,int ) ;

__attribute__((used)) static void
FUNC_7(
 struct buf *VAR_1,
 struct sd_markdown *VAR_2,
 uint8_t *VAR_3,
 size_t VAR_4,
 size_t VAR_5,
 int *VAR_6,
 int VAR_7)
{
 size_t VAR_8 = 0, VAR_9;
 struct buf *VAR_10 = 0;

 if (!VAR_2->cb.table_cell || !VAR_2->cb.table_row)
  return;

 VAR_10 = FUNC_2(VAR_2, VAR_0);

 if (VAR_8 < VAR_4 && VAR_3[VAR_8] == '|')
  VAR_8++;

 for (VAR_9 = 0; VAR_9 < VAR_5 && VAR_8 < VAR_4; ++VAR_9) {
  size_t VAR_11, VAR_12;
  struct buf *VAR_13;

  VAR_13 = FUNC_2(VAR_2, VAR_0);

  while (VAR_8 < VAR_4 && FUNC_0(VAR_3[VAR_8]))
   VAR_8++;

  VAR_11 = VAR_8;

  while (VAR_8 < VAR_4 && VAR_3[VAR_8] != '|')
   VAR_8++;

  VAR_12 = VAR_8 - 1;

  while (VAR_12 > VAR_11 && FUNC_0(VAR_3[VAR_12]))
   VAR_12--;

  FUNC_1(VAR_13, VAR_2, VAR_3 + VAR_11, 1 + VAR_12 - VAR_11);
  VAR_2->cb.table_cell(VAR_10, VAR_13, VAR_6[VAR_9] | VAR_7, VAR_2->opaque);

  FUNC_3(VAR_2, VAR_0);
  VAR_8++;
 }

 for (; VAR_9 < VAR_5; ++VAR_9) {
  struct buf VAR_14 = { 0, 0, 0, 0 };
  VAR_2->cb.table_cell(VAR_10, &VAR_14, VAR_6[VAR_9] | VAR_7, VAR_2->opaque);
 }

 VAR_2->cb.table_row(VAR_1, VAR_10, VAR_2->opaque);

 FUNC_3(VAR_2, VAR_0);
}
