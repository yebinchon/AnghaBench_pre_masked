
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conn {TYPE_1__* tuplehash; } ;
struct TYPE_2__ {int hnnode; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (char*,struct nf_conn*) ;

__attribute__((used)) static void
FUNC_3(struct nf_conn *VAR_2)
{
 FUNC_2("clean_from_lists(%p)\n", VAR_2);
 FUNC_0(&VAR_2->tuplehash[VAR_0].hnnode);
 FUNC_0(&VAR_2->tuplehash[VAR_1].hnnode);


 FUNC_1(VAR_2);
}
