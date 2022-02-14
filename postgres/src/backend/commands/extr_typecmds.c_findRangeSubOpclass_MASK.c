
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_4 ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,char*) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *,int) ;

__attribute__((used)) static Oid
FUNC_11(List *VAR_5, Oid VAR_6)
{
 Oid VAR_7;
 Oid VAR_8;

 if (VAR_5 != VAR_4)
 {
  VAR_7 = FUNC_10(VAR_0, VAR_5, 0);





  VAR_8 = FUNC_9(VAR_7);
  if (!FUNC_1(VAR_6, VAR_8))
   FUNC_4(VAR_3,
     (FUNC_5(VAR_1),
      FUNC_7("operator class \"%s\" does not accept data type %s",
       FUNC_2(VAR_5),
       FUNC_8(VAR_6))));
 }
 else
 {
  VAR_7 = FUNC_0(VAR_6, VAR_0);
  if (!FUNC_3(VAR_7))
  {

   FUNC_4(VAR_3,
     (FUNC_5(VAR_2),
      FUNC_7("data type %s has no default operator class for access method \"%s\"",
       FUNC_8(VAR_6), "btree"),
      FUNC_6("You must specify an operator class for the range type or define a default operator class for the subtype.")));
  }
 }

 return VAR_7;
}
