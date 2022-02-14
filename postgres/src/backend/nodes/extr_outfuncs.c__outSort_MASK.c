
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numCols; } ;
typedef int StringInfo ;
typedef TYPE_1__ Sort ;
typedef int Plan ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(StringInfo VAR_5, const Sort *VAR_6)
{
 FUNC_3("SORT");

 FUNC_5(VAR_5, (const Plan *) VAR_6);

 FUNC_2(VAR_2);
 FUNC_0(VAR_3, VAR_6->numCols);
 FUNC_4(VAR_4, VAR_6->numCols);
 FUNC_4(VAR_0, VAR_6->numCols);
 FUNC_1(VAR_1, VAR_6->numCols);
}
