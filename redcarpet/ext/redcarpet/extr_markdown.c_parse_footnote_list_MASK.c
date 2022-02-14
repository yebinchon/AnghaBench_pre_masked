
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* footnotes ) (struct buf*,struct buf*,int ) ;} ;
struct sd_markdown {int opaque; TYPE_2__ cb; } ;
struct footnote_ref {TYPE_1__* contents; int num; } ;
struct footnote_list {scalar_t__ count; struct footnote_item* head; } ;
struct footnote_item {struct footnote_item* next; struct footnote_ref* ref; } ;
struct buf {int dummy; } ;
struct TYPE_3__ {int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf*,struct sd_markdown*,int ,int ,int ) ;
 struct buf* FUNC_1 (struct sd_markdown*,int ) ;
 int FUNC_2 (struct sd_markdown*,int ) ;
 int FUNC_3 (struct buf*,struct buf*,int ) ;

__attribute__((used)) static void
FUNC_4(struct buf *VAR_1, struct sd_markdown *VAR_2, struct footnote_list *VAR_3)
{
 struct buf *VAR_4 = 0;
 struct footnote_item *VAR_5;
 struct footnote_ref *VAR_6;

 if (VAR_3->count == 0)
  return;

 VAR_4 = FUNC_1(VAR_2, VAR_0);

 VAR_5 = VAR_3->head;
 while (VAR_5) {
  VAR_6 = VAR_5->ref;
  FUNC_0(VAR_4, VAR_2, VAR_6->num, VAR_6->contents->data, VAR_6->contents->size);
  VAR_5 = VAR_5->next;
 }

 if (VAR_2->cb.footnotes)
  VAR_2->cb.footnotes(VAR_1, VAR_4, VAR_2->opaque);
 FUNC_2(VAR_2, VAR_0);
}
