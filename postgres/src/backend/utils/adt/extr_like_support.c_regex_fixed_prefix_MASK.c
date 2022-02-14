
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ consttype; int constvalue; } ;
typedef double Selectivity ;
typedef int Pattern_Prefix_Status ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ Const ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 double FUNC_6 (char*,int ,int,int ) ;
 char* FUNC_7 (int ,int,scalar_t__,int*) ;
 TYPE_1__* FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static Pattern_Prefix_Status
FUNC_10(Const *VAR_6, bool VAR_7, Oid VAR_8,
       Const **VAR_9, Selectivity *VAR_10)
{
 Oid VAR_11 = VAR_6->consttype;
 char *VAR_12;
 bool VAR_13;






 if (VAR_11 == VAR_0)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("regular-expression matching not supported on type bytea")));


 VAR_12 = FUNC_7(FUNC_0(VAR_6->constvalue),
         VAR_7, VAR_8,
         &VAR_13);

 if (VAR_12 == ((void*)0))
 {
  *VAR_9 = ((void*)0);

  if (VAR_10 != ((void*)0))
  {
   char *VAR_14 = FUNC_1(VAR_6->constvalue);

   *VAR_10 = FUNC_6(VAR_14, FUNC_9(VAR_14),
           VAR_7,
           0);
   FUNC_5(VAR_14);
  }

  return VAR_4;
 }

 *VAR_9 = FUNC_8(VAR_12, VAR_11);

 if (VAR_10 != ((void*)0))
 {
  if (VAR_13)
  {

   *VAR_10 = 1.0;
  }
  else
  {
   char *VAR_15 = FUNC_1(VAR_6->constvalue);

   *VAR_10 = FUNC_6(VAR_15, FUNC_9(VAR_15),
           VAR_7,
           FUNC_9(VAR_12));
   FUNC_5(VAR_15);
  }
 }

 FUNC_5(VAR_12);

 if (VAR_13)
  return VAR_3;
 else
  return VAR_5;
}
