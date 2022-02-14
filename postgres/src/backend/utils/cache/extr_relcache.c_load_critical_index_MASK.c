
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rd_isnailed; int rd_refcnt; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_4(Oid VAR_2, Oid VAR_3)
{
 Relation VAR_4;







 FUNC_0(VAR_3, VAR_0);
 FUNC_0(VAR_2, VAR_0);
 VAR_4 = FUNC_1(VAR_2, 1);
 if (VAR_4 == ((void*)0))
  FUNC_3(VAR_1, "could not open critical system index %u", VAR_2);
 VAR_4->rd_isnailed = 1;
 VAR_4->rd_refcnt = 1;
 FUNC_2(VAR_2, VAR_0);
 FUNC_2(VAR_3, VAR_0);
}
