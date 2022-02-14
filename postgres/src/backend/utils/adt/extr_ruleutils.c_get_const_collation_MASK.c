
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buf; } ;
typedef TYPE_1__ deparse_context ;
struct TYPE_6__ {scalar_t__ constcollid; int consttype; } ;
typedef int StringInfo ;
typedef scalar_t__ Oid ;
typedef TYPE_2__ Const ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(Const *VAR_0, deparse_context *VAR_1)
{
 StringInfo VAR_2 = VAR_1->buf;

 if (FUNC_0(VAR_0->constcollid))
 {
  Oid VAR_3 = FUNC_3(VAR_0->consttype);

  if (VAR_0->constcollid != VAR_3)
  {
   FUNC_1(VAR_2, " COLLATE %s",
        FUNC_2(VAR_0->constcollid));
  }
 }
}
