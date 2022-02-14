
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int UV ;
struct TYPE_4__ {int tupdesc; int * vals; } ;
typedef int SV ;
typedef TYPE_1__ SPITupleTable ;
typedef int NV ;
typedef int HV ;
typedef int AV ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,char*,int ) ;
 int * FUNC_10 () ;
 int * FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int * FUNC_15 (int ,int ,int) ;

__attribute__((used)) static HV *
FUNC_16(SPITupleTable *VAR_5, uint64 VAR_6,
        int VAR_7)
{
 VAR_4;
 HV *VAR_8;

 FUNC_4();

 VAR_8 = FUNC_11();

 FUNC_9(VAR_8, "status",
     FUNC_5(FUNC_1(VAR_7)));
 FUNC_9(VAR_8, "processed",
     (VAR_6 > (uint64) VAR_3) ?
     FUNC_13((NV) VAR_6) :
     FUNC_14((UV) VAR_6));

 if (VAR_7 > 0 && VAR_5)
 {
  AV *VAR_9;
  SV *VAR_10;
  uint64 VAR_11;


  if (VAR_6 > (uint64) VAR_0)
   FUNC_6(VAR_2,
     (FUNC_7(VAR_1),
      FUNC_8("query result has too many rows to fit in a Perl array")));

  VAR_9 = FUNC_10();
  FUNC_2(VAR_9, VAR_6);
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  {
   VAR_10 = FUNC_15(VAR_5->vals[VAR_11], VAR_5->tupdesc, 1);
   FUNC_3(VAR_9, VAR_10);
  }
  FUNC_9(VAR_8, "rows",
      FUNC_12((SV *) VAR_9));
 }

 FUNC_0(VAR_5);

 return VAR_8;
}
