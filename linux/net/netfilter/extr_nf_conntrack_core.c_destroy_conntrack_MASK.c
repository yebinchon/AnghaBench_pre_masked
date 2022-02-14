
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack {int use; } ;
struct nf_conn {scalar_t__ master; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct nf_conn*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (struct nf_conn*) ;
 int FUNC_7 (struct nf_conn*) ;
 scalar_t__ FUNC_8 (struct nf_conn*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct nf_conn*) ;
 int FUNC_11 (struct nf_conn*) ;
 int FUNC_12 (char*,struct nf_conn*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14(struct nf_conntrack *VAR_1)
{
 struct nf_conn *VAR_2 = (struct nf_conn *)VAR_1;

 FUNC_12("destroy_conntrack(%p)\n", VAR_2);
 FUNC_0(FUNC_1(&VAR_1->use) != 0);

 if (FUNC_13(FUNC_7(VAR_2))) {
  FUNC_11(VAR_2);
  return;
 }

 if (FUNC_13(FUNC_8(VAR_2) == VAR_0))
  FUNC_2(VAR_2);

 FUNC_3();





 FUNC_10(VAR_2);

 FUNC_6(VAR_2);

 FUNC_4();

 if (VAR_2->master)
  FUNC_9(VAR_2->master);

 FUNC_12("destroy_conntrack: returning ct=%p to slab\n", VAR_2);
 FUNC_5(VAR_2);
}
