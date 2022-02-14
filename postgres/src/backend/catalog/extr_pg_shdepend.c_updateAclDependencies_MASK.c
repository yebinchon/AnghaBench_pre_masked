
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int Relation ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*,int*,scalar_t__*,int*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,int ,int,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

void
FUNC_7(Oid VAR_4, Oid VAR_5, int32 VAR_6,
       Oid VAR_7,
       int VAR_8, Oid *VAR_9,
       int VAR_10, Oid *VAR_11)
{
 Relation VAR_12;
 int VAR_13;







 FUNC_0(VAR_9, &VAR_8, VAR_11, &VAR_10);

 if (VAR_8 > 0 || VAR_10 > 0)
 {
  VAR_12 = FUNC_6(VAR_3, VAR_1);


  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
  {
   Oid VAR_14 = VAR_11[VAR_13];






   if (VAR_14 == VAR_7)
    continue;


   if (FUNC_1(VAR_0, VAR_14, VAR_12))
    continue;

   FUNC_3(VAR_12, VAR_4, VAR_5, VAR_6,
          VAR_0, VAR_14,
          VAR_2);
  }


  for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
  {
   Oid VAR_15 = VAR_9[VAR_13];


   if (VAR_15 == VAR_7)
    continue;


   if (FUNC_1(VAR_0, VAR_15, VAR_12))
    continue;

   FUNC_4(VAR_12, VAR_4, VAR_5, VAR_6,
        0,
        VAR_0, VAR_15,
        VAR_2);
  }

  FUNC_5(VAR_12, VAR_1);
 }

 if (VAR_9)
  FUNC_2(VAR_9);
 if (VAR_11)
  FUNC_2(VAR_11);
}
