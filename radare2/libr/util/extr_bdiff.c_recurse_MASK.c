
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pos {int dummy; } ;
struct line {int dummy; } ;
struct hunklist {TYPE_1__* head; } ;
struct TYPE_2__ {int a1; int a2; int b1; int b2; } ;


 int FUNC_0 (struct line*,struct line*,struct pos*,int,int,int,int,int*,int*) ;

__attribute__((used)) static void FUNC_1(struct line *VAR_0, struct line *VAR_1, struct pos *VAR_2,
      int VAR_3, int VAR_4, int VAR_5, int VAR_6, struct hunklist *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;


 VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_8, &VAR_9);
 if (!VAR_10) {
  return;
 }


 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_8, VAR_5, VAR_9, VAR_7);
 VAR_7->head->a1 = VAR_8;
 VAR_7->head->a2 = VAR_8 + VAR_10;
 VAR_7->head->b1 = VAR_9;
 VAR_7->head->b2 = VAR_9 + VAR_10;
 VAR_7->head++;
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_8 + VAR_10, VAR_4, VAR_9 + VAR_10, VAR_6, VAR_7);
}
