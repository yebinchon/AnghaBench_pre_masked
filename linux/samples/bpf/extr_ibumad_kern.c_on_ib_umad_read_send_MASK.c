
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ib_umad_rw_args {int mgmt_class; } ;


 int VAR_0 ;
 int* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int*,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;

int FUNC_3(struct ib_umad_rw_args *VAR_2)
{
 u64 VAR_3 = 0, *VAR_4;
 u8 VAR_5 = VAR_2->mgmt_class;

 FUNC_2("ib_umad read send : class 0x%x\n", VAR_5);

 VAR_4 = FUNC_0(&VAR_1, &VAR_5);
 if (!VAR_4) {
  FUNC_1(&VAR_1, &VAR_5, &VAR_3, VAR_0);
  VAR_4 = FUNC_0(&VAR_1, &VAR_5);
  if (!VAR_4)
   return 0;
 }

 (*VAR_4) += 1;

 return 0;
}
