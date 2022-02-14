
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_gre_net {int * timeouts; int keymap_list; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nf_gre_net* FUNC_1 (struct net*) ;
 int * VAR_1 ;

void FUNC_2(struct net *VAR_2)
{
 struct nf_gre_net *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_0(&VAR_3->keymap_list);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->timeouts[VAR_4] = VAR_1[VAR_4];
}
