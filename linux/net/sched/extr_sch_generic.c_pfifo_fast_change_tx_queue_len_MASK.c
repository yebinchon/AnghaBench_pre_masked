
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_array {int dummy; } ;
struct pfifo_fast_priv {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct skb_array* FUNC_0 (struct pfifo_fast_priv*,int) ;
 struct pfifo_fast_priv* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct skb_array**,int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_2,
       unsigned int VAR_3)
{
 struct pfifo_fast_priv *VAR_4 = FUNC_1(VAR_2);
 struct skb_array *VAR_5[VAR_1];
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct skb_array *VAR_7 = FUNC_0(VAR_4, VAR_6);

  VAR_5[VAR_6] = VAR_7;
 }

 return FUNC_2(VAR_5, VAR_1, VAR_3,
      VAR_0);
}
