
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParseState ;
typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,char,int ,int ) ;
 int FUNC_6 (int *,int) ;

Oid
FUNC_7(ParseState *VAR_3, List *VAR_4, Oid VAR_5, Oid VAR_6,
      bool VAR_7, int VAR_8)
{
 Oid VAR_9;

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (FUNC_0(VAR_9))
  return VAR_9;


 if (!VAR_7)
 {
  char VAR_10;

  if (!FUNC_0(VAR_5))
   VAR_10 = 'l';
  else if (!FUNC_0(VAR_6))
   VAR_10 = 'r';
  else
   VAR_10 = 'b';

  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("operator does not exist: %s",
      FUNC_5(VAR_4, VAR_10,
           VAR_5, VAR_6)),
     FUNC_6(VAR_3, VAR_8)));
 }

 return VAR_2;
}
