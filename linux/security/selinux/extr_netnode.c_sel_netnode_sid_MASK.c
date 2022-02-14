
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int sid; } ;
struct sel_netnode {TYPE_1__ nsec; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sel_netnode* FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ,int *) ;

int FUNC_4(void *VAR_0, u16 VAR_1, u32 *VAR_2)
{
 struct sel_netnode *VAR_3;

 FUNC_0();
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3 != ((void*)0)) {
  *VAR_2 = VAR_3->nsec.sid;
  FUNC_1();
  return 0;
 }
 FUNC_1();

 return FUNC_3(VAR_0, VAR_1, VAR_2);
}
