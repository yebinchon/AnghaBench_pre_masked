
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_logger {int me; } ;
typedef enum nf_log_type { ____Placeholder_nf_log_type } nf_log_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int *** VAR_3 ;
 int FUNC_1 (int ) ;
 struct nf_logger* FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(int VAR_4, enum nf_log_type VAR_5)
{
 struct nf_logger *VAR_6;

 if (VAR_4 == VAR_0) {
  FUNC_5(VAR_1, VAR_5);
  FUNC_5(VAR_2, VAR_5);
  return;
 }

 FUNC_0(VAR_3[VAR_4][VAR_5] == ((void*)0));

 FUNC_3();
 VAR_6 = FUNC_2(VAR_3[VAR_4][VAR_5]);
 FUNC_1(VAR_6->me);
 FUNC_4();
}
