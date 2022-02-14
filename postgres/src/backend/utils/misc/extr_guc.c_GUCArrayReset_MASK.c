
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Datum ;
typedef int ArrayType ;


 int* FUNC_0 (int *) ;
 int VAR_0 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int*,int,int,int,char,int*) ;
 int * FUNC_3 (int *,int,int*,int ,int,int,int,int,char) ;
 int * FUNC_4 (int *,int,int ,int,int,char) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (char*,int *,int) ;

ArrayType *
FUNC_9(ArrayType *VAR_1)
{
 ArrayType *VAR_2;
 int VAR_3;
 int VAR_4;


 if (!VAR_1)
  return ((void*)0);


 if (FUNC_7())
  return ((void*)0);

 VAR_2 = ((void*)0);
 VAR_4 = 1;

 for (VAR_3 = 1; VAR_3 <= FUNC_0(VAR_1)[0]; VAR_3++)
 {
  Datum VAR_5;
  char *VAR_6;
  char *VAR_7;
  bool VAR_8;

  VAR_5 = FUNC_2(VAR_1, 1, &VAR_3,
       -1 ,
       -1 ,
       0 ,
       'i' ,
       &VAR_8);
  if (VAR_8)
   continue;
  VAR_6 = FUNC_1(VAR_5);

  VAR_7 = FUNC_6(VAR_6, '=');
  *VAR_7 = '\0';


  if (FUNC_8(VAR_6, ((void*)0), 1))
   continue;


  if (VAR_2)
   VAR_2 = FUNC_3(VAR_2, 1, &VAR_4,
         VAR_5,
         0,
         -1 ,
         -1 ,
         0 ,
         'i' );
  else
   VAR_2 = FUNC_4(&VAR_5, 1,
            VAR_0,
            -1, 0, 'i');

  VAR_4++;
  FUNC_5(VAR_6);
 }

 return VAR_2;
}
