
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct to_kill {int dummy; } ;
struct page {int mapping; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,struct list_head*,struct to_kill**,int) ;
 int FUNC_2 (struct page*,struct list_head*,struct to_kill**,int) ;
 int FUNC_3 (struct to_kill*) ;
 struct to_kill* FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct page *VAR_1, struct list_head *VAR_2,
    int VAR_3)
{
 struct to_kill *VAR_4;

 if (!VAR_1->mapping)
  return;

 VAR_4 = FUNC_4(sizeof(struct to_kill), VAR_0);
 if (!VAR_4)
  return;
 if (FUNC_0(VAR_1))
  FUNC_1(VAR_1, VAR_2, &VAR_4, VAR_3);
 else
  FUNC_2(VAR_1, VAR_2, &VAR_4, VAR_3);
 FUNC_3(VAR_4);
}
