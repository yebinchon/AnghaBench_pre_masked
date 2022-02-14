
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* methods; } ;
struct TYPE_4__ {int CustomName; } ;
typedef int StringInfo ;
typedef int Path ;
typedef TYPE_2__ CustomPath ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int const*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(StringInfo VAR_3, const CustomPath *VAR_4)
{
 FUNC_1("CUSTOMPATH");

 FUNC_3(VAR_3, (const Path *) VAR_4);

 FUNC_2(VAR_2);
 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
 FUNC_4(VAR_3, " :methods ");
 FUNC_5(VAR_3, VAR_4->methods->CustomName);
}
