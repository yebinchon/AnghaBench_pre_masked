
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct nf_logger {size_t type; } const nf_logger ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int ** VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 struct nf_logger const* FUNC_3 (int ) ;
 int FUNC_4 () ;

void FUNC_5(struct nf_logger *VAR_3)
{
 const struct nf_logger *VAR_4;
 int VAR_5;

 FUNC_1(&VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_3(VAR_1[VAR_5][VAR_3->type]);
  if (VAR_4 == VAR_3)
   FUNC_0(VAR_1[VAR_5][VAR_3->type], ((void*)0));
 }
 FUNC_2(&VAR_2);
 FUNC_4();
}
