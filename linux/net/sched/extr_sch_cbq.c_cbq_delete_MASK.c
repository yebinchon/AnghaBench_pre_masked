
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbq_class {scalar_t__ defmap; int tparent; scalar_t__ next_alive; int q; scalar_t__ children; scalar_t__ filters; } ;
struct cbq_sched_data {struct cbq_class* rx_class; struct cbq_class* tx_borrowed; struct cbq_class* tx_class; struct cbq_class link; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cbq_class*) ;
 int FUNC_2 (struct Qdisc*,struct cbq_class*) ;
 int FUNC_3 (struct cbq_sched_data*,struct cbq_class*) ;
 int FUNC_4 (struct cbq_class*) ;
 int FUNC_5 (struct cbq_class*) ;
 struct cbq_sched_data* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct Qdisc*) ;
 int FUNC_9 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_10(struct Qdisc *VAR_1, unsigned long VAR_2)
{
 struct cbq_sched_data *VAR_3 = FUNC_6(VAR_1);
 struct cbq_class *VAR_4 = (struct cbq_class *)VAR_2;

 if (VAR_4->filters || VAR_4->children || VAR_4 == &VAR_3->link)
  return -VAR_0;

 FUNC_8(VAR_1);

 FUNC_7(VAR_4->q);

 if (VAR_4->next_alive)
  FUNC_1(VAR_4);

 if (VAR_3->tx_borrowed == VAR_4)
  VAR_3->tx_borrowed = VAR_3->tx_class;
 if (VAR_3->tx_class == VAR_4) {
  VAR_3->tx_class = ((void*)0);
  VAR_3->tx_borrowed = ((void*)0);
 }





 FUNC_5(VAR_4);
 FUNC_0(VAR_4->tparent);
 VAR_4->defmap = 0;
 FUNC_4(VAR_4);

 FUNC_3(VAR_3, VAR_4);
 FUNC_9(VAR_1);

 FUNC_2(VAR_1, VAR_4);
 return 0;
}
