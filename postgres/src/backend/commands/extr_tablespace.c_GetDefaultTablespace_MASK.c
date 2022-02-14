
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 char VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,int) ;

Oid
FUNC_6(char VAR_6, bool VAR_7)
{
 Oid VAR_8;


 if (VAR_6 == VAR_4)
 {
  FUNC_1();
  return FUNC_0();
 }


 if (VAR_5 == ((void*)0) || VAR_5[0] == '\0')
  return VAR_2;
 VAR_8 = FUNC_5(VAR_5, 1);







 if (VAR_8 == VAR_3)
 {
  if (VAR_7)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_4("cannot specify default tablespace for partitioned relations")));
  VAR_8 = VAR_2;
 }
 return VAR_8;
}
