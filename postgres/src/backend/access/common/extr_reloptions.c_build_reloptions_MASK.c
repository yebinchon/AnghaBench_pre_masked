
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int relopt_value ;
typedef int relopt_parse_elt ;
typedef int relopt_kind ;
typedef int Size ;
typedef int Datum ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ,int *,int) ;
 int FUNC_2 (void*,int ,int *,int,int,int const*,int) ;
 int * FUNC_3 (int ,int,int ,int*) ;
 int FUNC_4 (int *) ;

void *
FUNC_5(Datum VAR_0, bool VAR_1,
     relopt_kind VAR_2,
     Size VAR_3,
     const relopt_parse_elt *VAR_4,
     int VAR_5)
{
 int VAR_6;
 relopt_value *VAR_7;
 void *VAR_8;


 VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_2, &VAR_6);
 FUNC_0(VAR_6 <= VAR_5);


 if (VAR_6 == 0)
 {
  FUNC_0(VAR_7 == ((void*)0));
  return ((void*)0);
 }


 VAR_8 = FUNC_1(VAR_3, VAR_7, VAR_6);
 FUNC_2(VAR_8, VAR_3, VAR_7, VAR_6,
       VAR_1, VAR_4, VAR_5);

 FUNC_4(VAR_7);

 return VAR_8;
}
