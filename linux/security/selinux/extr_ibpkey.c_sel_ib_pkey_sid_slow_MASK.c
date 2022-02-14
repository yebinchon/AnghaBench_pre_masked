
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int sid; int pkey; int subnet_prefix; } ;
struct sel_ib_pkey {TYPE_1__ psec; } ;


 int VAR_0 ;
 struct sel_ib_pkey* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 struct sel_ib_pkey* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sel_ib_pkey*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(u64 VAR_3, u16 VAR_4, u32 *VAR_5)
{
 int VAR_6;
 struct sel_ib_pkey *VAR_7;
 struct sel_ib_pkey *VAR_8 = ((void*)0);
 unsigned long VAR_9;

 FUNC_4(&VAR_1, VAR_9);
 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (VAR_7) {
  *VAR_5 = VAR_7->psec.sid;
  FUNC_5(&VAR_1, VAR_9);
  return 0;
 }

 VAR_6 = FUNC_1(&VAR_2, VAR_3, VAR_4,
       VAR_5);
 if (VAR_6)
  goto out;




 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  goto out;

 VAR_8->psec.subnet_prefix = VAR_3;
 VAR_8->psec.pkey = VAR_4;
 VAR_8->psec.sid = *VAR_5;
 FUNC_3(VAR_8);

out:
 FUNC_5(&VAR_1, VAR_9);
 return VAR_6;
}
