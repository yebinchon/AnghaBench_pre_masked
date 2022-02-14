
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ opfuncid; } ;
typedef TYPE_1__ DistinctExpr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static bool
FUNC_3(const DistinctExpr *VAR_7, const DistinctExpr *VAR_8)
{
 FUNC_2(VAR_4);







 if (VAR_7->opfuncid != VAR_8->opfuncid &&
  VAR_7->opfuncid != 0 &&
  VAR_8->opfuncid != 0)
  return 0;

 FUNC_2(VAR_5);
 FUNC_2(VAR_6);
 FUNC_2(VAR_3);
 FUNC_2(VAR_1);
 FUNC_1(VAR_0);
 FUNC_0(VAR_2);

 return 1;
}
