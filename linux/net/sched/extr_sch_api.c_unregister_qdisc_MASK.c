
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc_ops {struct Qdisc_ops* next; } ;


 int VAR_0 ;
 struct Qdisc_ops* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct Qdisc_ops *VAR_3)
{
 struct Qdisc_ops *VAR_4, **VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_0(&VAR_2);
 for (VAR_5 = &VAR_1; (VAR_4 = *VAR_5) != ((void*)0); VAR_5 = &VAR_4->next)
  if (VAR_4 == VAR_3)
   break;
 if (VAR_4) {
  *VAR_5 = VAR_4->next;
  VAR_4->next = ((void*)0);
  VAR_6 = 0;
 }
 FUNC_1(&VAR_2);
 return VAR_6;
}
