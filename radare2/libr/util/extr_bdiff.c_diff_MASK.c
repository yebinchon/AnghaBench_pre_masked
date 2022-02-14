
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pos {int dummy; } ;
struct line {int dummy; } ;
struct hunklist {struct hunk* head; struct hunk* base; } ;
struct hunk {int a1; int a2; int b1; int b2; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct line*,struct line*) ;
 int FUNC_2 (struct line*,int,struct line*,int) ;
 int FUNC_3 (struct pos*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct line*,struct line*,struct pos*,int ,int,int ,int,struct hunklist*) ;

__attribute__((used)) static struct hunklist FUNC_6(struct line *VAR_0, int VAR_1, struct line *VAR_2, int VAR_3)
{
 struct hunklist VAR_4;
 struct hunk *VAR_5;
 struct pos *VAR_6;
 int VAR_7;


 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_6 = (struct pos *)FUNC_0(VAR_3 ? VAR_3 : 1, sizeof(struct pos));

 VAR_4.head = VAR_4.base = (struct hunk *)FUNC_4(sizeof(struct hunk) *
                                         ((VAR_1<VAR_3 ? VAR_1:VAR_3) + 1));

 if (VAR_6 && VAR_4.base && VAR_7) {

  FUNC_5(VAR_0, VAR_2, VAR_6, 0, VAR_1, 0, VAR_3, &VAR_4);
  VAR_4.head->a1 = VAR_4.head->a2 = VAR_1;
  VAR_4.head->b1 = VAR_4.head->b2 = VAR_3;
  VAR_4.head++;
 }

 FUNC_3(VAR_6);


 for (VAR_5 = VAR_4.base; VAR_5 != VAR_4.head; VAR_5++) {
  struct hunk *VAR_8 = VAR_5+1;
  int VAR_9 = 0;

  if (VAR_8 == VAR_4.head) {
   break;
  }

  if (VAR_5->a2 == VAR_8->a1) {
   while (VAR_5->a2 + VAR_9 < VAR_1 && VAR_5->b2 + VAR_9 < VAR_3 && !FUNC_1 (VAR_0 + VAR_5->a2 + VAR_9, VAR_2 + VAR_5->b2 + VAR_9)) {
    VAR_9++;
   }
  } else if (VAR_5->b2 == VAR_8->b1) {
   while (VAR_5->b2 + VAR_9 < VAR_3 && VAR_5->a2 + VAR_9 < VAR_1 && !FUNC_1 (VAR_2 + VAR_5->b2 + VAR_9, VAR_0 + VAR_5->a2 + VAR_9)) {
    VAR_9++;
   }
  }
  if (!VAR_9) {
   continue;
  }
  VAR_5->b2 += VAR_9;
  VAR_8->b1 += VAR_9;
  VAR_5->a2 += VAR_9;
  VAR_8->a1 += VAR_9;
 }

 return VAR_4;
}
