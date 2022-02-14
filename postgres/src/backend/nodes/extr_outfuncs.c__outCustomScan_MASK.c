
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* methods; } ;
struct TYPE_4__ {int CustomName; } ;
typedef int StringInfo ;
typedef int Scan ;
typedef TYPE_2__ CustomScan ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int const*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(StringInfo VAR_6, const CustomScan *VAR_7)
{
 FUNC_2("CUSTOMSCAN");

 FUNC_4(VAR_6, (const Scan *) VAR_7);

 FUNC_3(VAR_5);
 FUNC_1(VAR_1);
 FUNC_1(VAR_0);
 FUNC_1(VAR_2);
 FUNC_1(VAR_4);
 FUNC_0(VAR_3);

 FUNC_5(VAR_6, " :methods ");
 FUNC_6(VAR_6, VAR_7->methods->CustomName);
}
