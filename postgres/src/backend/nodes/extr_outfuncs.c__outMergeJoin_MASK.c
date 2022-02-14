
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mergeclauses; } ;
typedef int StringInfo ;
typedef TYPE_1__ MergeJoin ;
typedef int Join ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int const*) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_8(StringInfo VAR_6, const MergeJoin *VAR_7)
{
 int VAR_8;

 FUNC_4("MERGEJOIN");

 FUNC_6(VAR_6, (const Join *) VAR_7);

 FUNC_1(VAR_5);
 FUNC_3(VAR_4);

 VAR_8 = FUNC_7(VAR_7->mergeclauses);

 FUNC_5(VAR_1, VAR_8);
 FUNC_5(VAR_0, VAR_8);
 FUNC_2(VAR_3, VAR_8);
 FUNC_0(VAR_2, VAR_8);
}
