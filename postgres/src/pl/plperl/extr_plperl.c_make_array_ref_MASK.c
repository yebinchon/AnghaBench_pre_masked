
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fn_oid; } ;
struct TYPE_4__ {int proc; scalar_t__ elem_is_rowtype; TYPE_3__ transform_proc; int * elements; scalar_t__* nulls; } ;
typedef TYPE_1__ plperl_array_info ;
typedef int SV ;
typedef int Datum ;
typedef int AV ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (char*) ;
 int VAR_0 ;
 int * FUNC_5 () ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;

__attribute__((used)) static SV *
FUNC_9(plperl_array_info *VAR_1, int VAR_2, int VAR_3)
{
 VAR_0;
 int VAR_4;
 AV *VAR_5 = FUNC_5();

 for (VAR_4 = VAR_2; VAR_4 < VAR_3; VAR_4++)
 {
  if (VAR_1->nulls[VAR_4])
  {




   FUNC_3(VAR_5, FUNC_7(0));
  }
  else
  {
   Datum VAR_6 = VAR_1->elements[VAR_4];

   if (VAR_1->transform_proc.fn_oid)
    FUNC_3(VAR_5, (SV *) FUNC_0(FUNC_1(&VAR_1->transform_proc, VAR_6)));
   else if (VAR_1->elem_is_rowtype)

    FUNC_3(VAR_5, FUNC_8(VAR_6));
   else
   {
    char *VAR_7 = FUNC_2(&VAR_1->proc, VAR_6);

    FUNC_3(VAR_5, FUNC_4(VAR_7));
   }
  }
 }
 return FUNC_6((SV *) VAR_5);
}
