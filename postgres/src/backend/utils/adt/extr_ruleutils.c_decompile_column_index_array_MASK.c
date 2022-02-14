
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int,int,char,int **,int *,int*) ;
 char* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(Datum VAR_1, Oid VAR_2,
        StringInfo VAR_3)
{
 Datum *VAR_4;
 int VAR_5;
 int VAR_6;


 FUNC_4(FUNC_0(VAR_1),
       VAR_0, 2, 1, 's',
       &VAR_4, ((void*)0), &VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  char *VAR_7;

  VAR_7 = FUNC_5(VAR_2, FUNC_1(VAR_4[VAR_6]), 0);

  if (VAR_6 == 0)
   FUNC_3(VAR_3, FUNC_6(VAR_7));
  else
   FUNC_2(VAR_3, ", %s", FUNC_6(VAR_7));
 }

 return VAR_5;
}
