
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int datum_context; } ;
struct TYPE_6__ {scalar_t__ rectypeid; int * erh; int refname; } ;
typedef TYPE_1__ PLpgSQL_rec ;
typedef TYPE_2__ PLpgSQL_execstate ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int * FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(PLpgSQL_execstate *VAR_3, PLpgSQL_rec *VAR_4)
{
 FUNC_0(VAR_4->erh == ((void*)0));


 if (VAR_4->rectypeid == VAR_2)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_4("record \"%s\" is not assigned yet", VAR_4->refname),
     FUNC_3("The tuple structure of a not-yet-assigned record is indeterminate.")));


 FUNC_6(VAR_4);


 VAR_4->erh = FUNC_5(VAR_4->rectypeid, -1,
            VAR_3->datum_context);
}
