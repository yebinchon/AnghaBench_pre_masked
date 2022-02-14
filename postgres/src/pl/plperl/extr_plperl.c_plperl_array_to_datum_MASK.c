
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int dims ;
typedef int SV ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int ArrayBuildState ;
typedef int AV ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,int *,int*,int*,int,int ,int ,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int *,int,int*,int*,int ,int) ;
 int FUNC_11 (int*,int ,int) ;

__attribute__((used)) static Datum
FUNC_12(SV *VAR_5, Oid VAR_6, int32 VAR_7)
{
 VAR_4;
 ArrayBuildState *VAR_8;
 Oid VAR_9;
 FmgrInfo VAR_10;
 Oid VAR_11;
 int VAR_12[VAR_3];
 int VAR_13[VAR_3];
 int VAR_14 = 1;
 int VAR_15;

 VAR_9 = FUNC_8(VAR_6);
 if (!VAR_9)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_6("cannot convert Perl array to non-array type %s",
      FUNC_7(VAR_6))));

 VAR_8 = FUNC_9(VAR_9, VAR_0, 1);

 FUNC_1(VAR_9, &VAR_10, &VAR_11);

 FUNC_11(VAR_12, 0, sizeof(VAR_12));
 VAR_12[0] = FUNC_3((AV *) FUNC_0(VAR_5)) + 1;

 FUNC_2((AV *) FUNC_0(VAR_5), VAR_8,
       &VAR_14, VAR_12, 1,
       VAR_6, VAR_9, VAR_7,
       &VAR_10, VAR_11);


 if (VAR_12[0] <= 0)
  VAR_14 = 0;

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
  VAR_13[VAR_15] = 1;

 return FUNC_10(VAR_8, VAR_14, VAR_12, VAR_13,
        VAR_0, 1);
}
