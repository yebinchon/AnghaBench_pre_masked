
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_ct_pptp_master {struct nf_conn** keymap; } ;
struct nf_conn {int list; } ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nf_conn*,int ) ;
 int FUNC_1 (int *) ;
 struct nf_ct_pptp_master* FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (char*,struct nf_conn*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct nf_conn *VAR_4)
{
 struct nf_ct_pptp_master *VAR_5 = FUNC_2(VAR_4);
 enum ip_conntrack_dir VAR_6;

 FUNC_3("entering for ct %p\n", VAR_4);

 FUNC_4(&VAR_2);
 for (VAR_6 = VAR_1; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_5->keymap[VAR_6]) {
   FUNC_3("removing %p from list\n",
     VAR_5->keymap[VAR_6]);
   FUNC_1(&VAR_5->keymap[VAR_6]->list);
   FUNC_0(VAR_5->keymap[VAR_6], VAR_3);
   VAR_5->keymap[VAR_6] = ((void*)0);
  }
 }
 FUNC_5(&VAR_2);
}
