
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numCols; } ;
typedef int StringInfo ;
typedef int Plan ;
typedef TYPE_1__ MergeAppend ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_7(StringInfo VAR_7, const MergeAppend *VAR_8)
{
 FUNC_4("MERGEAPPEND");

 FUNC_6(VAR_7, (const Plan *) VAR_8);

 FUNC_3(VAR_1);
 FUNC_2(VAR_3);
 FUNC_0(VAR_5, VAR_8->numCols);
 FUNC_5(VAR_6, VAR_8->numCols);
 FUNC_5(VAR_0, VAR_8->numCols);
 FUNC_1(VAR_2, VAR_8->numCols);
 FUNC_3(VAR_4);
}
