
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int List ;
typedef int Datum ;
typedef int ArrayType ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int,int,char,int **,int *,int*) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int *,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;

List *
FUNC_10(Datum VAR_2)
{
 List *VAR_3 = VAR_0;
 ArrayType *VAR_4;
 Datum *VAR_5;
 int VAR_6;
 int VAR_7;


 if (!FUNC_2(FUNC_1(VAR_2)))
  return VAR_3;

 VAR_4 = FUNC_0(VAR_2);

 FUNC_4(VAR_4, VAR_1, -1, 0, 'i',
       &VAR_5, ((void*)0), &VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  char *VAR_8;
  char *VAR_9;
  Node *VAR_10 = ((void*)0);

  VAR_8 = FUNC_3(VAR_5[VAR_7]);
  VAR_9 = FUNC_9(VAR_8, '=');
  if (VAR_9)
  {
   *VAR_9++ = '\0';
   VAR_10 = (Node *) FUNC_7(FUNC_8(VAR_9));
  }
  VAR_3 = FUNC_5(VAR_3, FUNC_6(FUNC_8(VAR_8), VAR_10, -1));
 }

 return VAR_3;
}
