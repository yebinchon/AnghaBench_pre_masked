
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int datum_context; } ;
struct TYPE_5__ {scalar_t__ dtype; int * erh; } ;
typedef TYPE_1__ PLpgSQL_rec ;
typedef TYPE_2__ PLpgSQL_execstate ;
typedef int ExpandedRecordHeader ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(PLpgSQL_execstate *VAR_1, PLpgSQL_rec *VAR_2,
      ExpandedRecordHeader *VAR_3)
{
 FUNC_0(VAR_2->dtype == VAR_0);


 FUNC_3(VAR_3, VAR_1->datum_context);


 if (VAR_2->erh)
  FUNC_1(FUNC_2(VAR_2->erh));


 VAR_2->erh = VAR_3;
}
