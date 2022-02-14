
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numCols; } ;
typedef int StringInfo ;
typedef int Plan ;
typedef TYPE_1__ Group ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(StringInfo VAR_4, const Group *VAR_5)
{
 FUNC_2("GROUP");

 FUNC_4(VAR_4, (const Plan *) VAR_5);

 FUNC_1(VAR_3);
 FUNC_0(VAR_0, VAR_5->numCols);
 FUNC_3(VAR_2, VAR_5->numCols);
 FUNC_3(VAR_1, VAR_5->numCols);
}
