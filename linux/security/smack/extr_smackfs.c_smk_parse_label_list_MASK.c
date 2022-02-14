
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smack_known_list_elem {int list; struct smack_known* smk_label; } ;
struct smack_known {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct smack_known*) ;
 int FUNC_1 (struct smack_known*) ;
 struct smack_known_list_elem* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct list_head*) ;
 struct smack_known* FUNC_4 (char*,int ) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static int FUNC_6(char *VAR_2, struct list_head *VAR_3)
{
 char *VAR_4;
 struct smack_known *VAR_5;
 struct smack_known_list_elem *VAR_6;

 while ((VAR_4 = FUNC_5(&VAR_2, " ")) != ((void*)0)) {
  if (!*VAR_4)
   continue;

  VAR_5 = FUNC_4(VAR_4, 0);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);

  VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
  if (VAR_6 == ((void*)0))
   return -VAR_0;

  VAR_6->smk_label = VAR_5;
  FUNC_3(&VAR_6->list, VAR_3);
 }

 return 0;
}
