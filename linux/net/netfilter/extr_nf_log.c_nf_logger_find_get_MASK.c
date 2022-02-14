
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_logger {int me; } ;
typedef enum nf_log_type { ____Placeholder_nf_log_type } nf_log_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 int FUNC_0 (int,int) ;
 int * FUNC_1 (int ) ;
 struct nf_logger* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,int) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(int VAR_5, enum nf_log_type VAR_6)
{
 struct nf_logger *VAR_7;
 int VAR_8 = -VAR_0;

 if (VAR_5 == VAR_1) {
  VAR_8 = FUNC_7(VAR_2, VAR_6);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_7(VAR_3, VAR_6);
  if (VAR_8 < 0) {
   FUNC_0(VAR_2, VAR_6);
   return VAR_8;
  }

  return 0;
 }

 if (FUNC_1(VAR_4[VAR_5][VAR_6]) == ((void*)0))
  FUNC_5("nf-logger-%u-%u", VAR_5, VAR_6);

 FUNC_3();
 VAR_7 = FUNC_2(VAR_4[VAR_5][VAR_6]);
 if (VAR_7 == ((void*)0))
  goto out;

 if (FUNC_6(VAR_7->me))
  VAR_8 = 0;
out:
 FUNC_4();
 return VAR_8;
}
