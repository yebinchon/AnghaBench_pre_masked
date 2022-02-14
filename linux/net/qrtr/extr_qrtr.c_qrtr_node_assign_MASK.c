
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qrtr_node {unsigned int nid; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned int,struct qrtr_node*) ;

__attribute__((used)) static void FUNC_3(struct qrtr_node *VAR_3, unsigned int VAR_4)
{
 if (VAR_3->nid != VAR_0 || VAR_4 == VAR_0)
  return;

 FUNC_0(&VAR_1);
 FUNC_2(&VAR_2, VAR_4, VAR_3);
 VAR_3->nid = VAR_4;
 FUNC_1(&VAR_1);
}
