
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int sid; } ;
struct sel_ib_pkey {TYPE_1__ psec; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sel_ib_pkey* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;

int FUNC_4(u64 VAR_0, u16 VAR_1, u32 *VAR_2)
{
 struct sel_ib_pkey *VAR_3;

 FUNC_0();
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3) {
  *VAR_2 = VAR_3->psec.sid;
  FUNC_1();
  return 0;
 }
 FUNC_1();

 return FUNC_3(VAR_0, VAR_1, VAR_2);
}
