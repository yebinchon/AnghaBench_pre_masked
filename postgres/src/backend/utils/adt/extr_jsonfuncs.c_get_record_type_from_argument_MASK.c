
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ typcat; } ;
struct TYPE_7__ {int flinfo; } ;
struct TYPE_6__ {TYPE_3__ c; int fn_mcxt; int argtype; } ;
typedef TYPE_1__ PopulateRecordCache ;
typedef TYPE_2__* FunctionCallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_5(FunctionCallInfo VAR_4,
         const char *VAR_5,
         PopulateRecordCache *VAR_6)
{
 VAR_6->argtype = FUNC_3(VAR_4->flinfo, 0);
 FUNC_4(&VAR_6->c,
       VAR_6->argtype, -1,
       VAR_6->fn_mcxt, 0);
 if (VAR_6->c.typcat != VAR_2 &&
  VAR_6->c.typcat != VAR_3)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),

     FUNC_2("first argument of %s must be a row type",
      VAR_5)));
}
