
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SV ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int *,int*) ;
 int FUNC_8 (int *,int ,int,int *,int *,int ,int*) ;
 int VAR_3 ;

char *
FUNC_9(SV *VAR_4, char *VAR_5)
{
 Datum VAR_6 = FUNC_0(VAR_5);
 Oid VAR_7 = FUNC_1(VAR_3, VAR_6);
 Oid VAR_8;
 Datum VAR_9;
 bool VAR_10,
    VAR_11;

 if (!FUNC_2(VAR_7))
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("lookup failed for type %s", VAR_5)));

 VAR_9 = FUNC_8(VAR_4,
          VAR_7, -1,
          ((void*)0), ((void*)0), VAR_2,
          &VAR_11);

 if (VAR_11)
  return ((void*)0);

 FUNC_7(VAR_7,
       &VAR_8, &VAR_10);

 return FUNC_3(VAR_8, VAR_9);
}
