
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ndims; int* nelems; int nulls; int elements; int elem_is_rowtype; int proc; int transform_proc; } ;
typedef TYPE_2__ plperl_array_info ;
typedef int int16 ;
struct TYPE_8__ {TYPE_1__* prodesc; } ;
struct TYPE_6__ {int trftypes; int lang_oid; } ;
typedef int SV ;
typedef int Oid ;
typedef int HV ;
typedef int Datum ;
typedef int ArrayType ;


 int* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,int ,int,char,int *,int *,int*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int *,int*,char*,char*,int *,int *) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,char*,int,int *,int ) ;
 scalar_t__ FUNC_11 () ;
 int * FUNC_12 () ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (int ) ;
 int* FUNC_15 (int) ;
 TYPE_2__* FUNC_16 (int) ;
 int * FUNC_17 (TYPE_2__*,int ,int,int ) ;
 int * FUNC_18 (int *,int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static SV *
FUNC_20(Datum VAR_3, Oid VAR_4)
{
 VAR_2;
 ArrayType *VAR_5 = FUNC_3(VAR_3);
 Oid VAR_6 = FUNC_1(VAR_5);
 int16 VAR_7;
 bool VAR_8;
 char VAR_9,
    VAR_10;
 Oid VAR_11;
 Oid VAR_12;
 Oid VAR_13;
 int VAR_14,
    VAR_15,
      *VAR_16;
 plperl_array_info *VAR_17;
 SV *VAR_18;
 HV *VAR_19;





 VAR_17 = FUNC_16(sizeof(plperl_array_info));


 FUNC_8(VAR_6, VAR_0,
      &VAR_7, &VAR_8, &VAR_9,
      &VAR_10, &VAR_11, &VAR_12);


 VAR_13 = FUNC_7(VAR_6,
            VAR_1->prodesc->lang_oid,
            VAR_1->prodesc->trftypes);


 if (FUNC_4(VAR_13))
  FUNC_6(VAR_13, &VAR_17->transform_proc);
 else
  FUNC_6(VAR_12, &VAR_17->proc);

 VAR_17->elem_is_rowtype = FUNC_19(VAR_6);


 VAR_17->ndims = FUNC_2(VAR_5);
 VAR_16 = FUNC_0(VAR_5);


 if (VAR_17->ndims == 0)
 {
  VAR_18 = FUNC_13((SV *) FUNC_11());
 }
 else
 {
  FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8,
        VAR_9, &VAR_17->elements, &VAR_17->nulls,
        &VAR_15);


  VAR_17->nelems = FUNC_15(sizeof(int) * VAR_17->ndims);
  VAR_17->nelems[0] = VAR_15;
  for (VAR_14 = 1; VAR_14 < VAR_17->ndims; VAR_14++)
   VAR_17->nelems[VAR_14] = VAR_17->nelems[VAR_14 - 1] / VAR_16[VAR_14 - 1];

  VAR_18 = FUNC_17(VAR_17, 0, VAR_15, 0);
 }

 VAR_19 = FUNC_12();
 (void) FUNC_10(VAR_19, "array", 5, VAR_18, 0);
 (void) FUNC_10(VAR_19, "typeoid", 7, FUNC_14(VAR_4), 0);

 return FUNC_18(FUNC_13((SV *) VAR_19),
     FUNC_9("PostgreSQL::InServer::ARRAY", 0));
}
