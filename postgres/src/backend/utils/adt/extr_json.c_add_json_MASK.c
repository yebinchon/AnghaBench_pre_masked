
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef scalar_t__ Oid ;
typedef int JsonTypeCategory ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ,scalar_t__,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,int *,scalar_t__*) ;

__attribute__((used)) static void
FUNC_5(Datum VAR_4, bool VAR_5, StringInfo VAR_6,
   Oid VAR_7, bool VAR_8)
{
 JsonTypeCategory VAR_9;
 Oid VAR_10;

 if (VAR_7 == VAR_2)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("could not determine input data type")));

 if (VAR_5)
 {
  VAR_9 = VAR_3;
  VAR_10 = VAR_2;
 }
 else
  FUNC_4(VAR_7,
        &VAR_9, &VAR_10);

 FUNC_0(VAR_4, VAR_5, VAR_6, VAR_9, VAR_10, VAR_8);
}
