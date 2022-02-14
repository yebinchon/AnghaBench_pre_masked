
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_4__ {int parseState; void* res; } ;
typedef int Oid ;
typedef int JsonbTypeCategory ;
typedef TYPE_1__ JsonbInState ;
typedef int Datum ;
typedef int ArrayType ;


 int* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int*) ;
 int * FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*,int ,int,int*,int*,int*,int*,int ,int ) ;
 int FUNC_6 (int *,int ,int ,int,char,int**,int**,int*) ;
 int FUNC_7 (int ,int *,int*,char*) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int*) ;
 void* FUNC_10 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_11(Datum VAR_2, JsonbInState *VAR_3)
{
 ArrayType *VAR_4 = FUNC_4(VAR_2);
 Oid VAR_5 = FUNC_1(VAR_4);
 int *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 Datum *VAR_10;
 bool *VAR_11;
 int16 VAR_12;
 bool VAR_13;
 char VAR_14;
 JsonbTypeCategory VAR_15;
 Oid VAR_16;

 VAR_7 = FUNC_2(VAR_4);
 VAR_6 = FUNC_0(VAR_4);
 VAR_8 = FUNC_3(VAR_7, VAR_6);

 if (VAR_8 <= 0)
 {
  VAR_3->res = FUNC_10(&VAR_3->parseState, VAR_0, ((void*)0));
  VAR_3->res = FUNC_10(&VAR_3->parseState, VAR_1, ((void*)0));
  return;
 }

 FUNC_7(VAR_5,
       &VAR_12, &VAR_13, &VAR_14);

 FUNC_8(VAR_5,
        &VAR_15, &VAR_16);

 FUNC_6(VAR_4, VAR_5, VAR_12, VAR_13,
       VAR_14, &VAR_10, &VAR_11,
       &VAR_8);

 FUNC_5(VAR_3, 0, VAR_7, VAR_6, VAR_10, VAR_11, &VAR_9, VAR_15,
        VAR_16);

 FUNC_9(VAR_10);
 FUNC_9(VAR_11);
}
