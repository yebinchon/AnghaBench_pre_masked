
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {char* name; } ;
typedef int Datum ;
typedef int ArrayType ;


 int* FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 char* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int,int*,int,int,int,char,int*) ;
 int * FUNC_4 (int *,int,int*,int ,int,int,int,int,char) ;
 int * FUNC_5 (int *,int,int ,int,int,char) ;
 struct config_generic* FUNC_6 (char const*,int,int ) ;
 size_t FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,char const*,size_t) ;
 int FUNC_9 (char const*,int *,int) ;

ArrayType *
FUNC_10(ArrayType *VAR_2, const char *VAR_3)
{
 struct config_generic *VAR_4;
 ArrayType *VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_1(VAR_3);


 (void) FUNC_9(VAR_3, ((void*)0), 0);


 VAR_4 = FUNC_6(VAR_3, 0, VAR_1);
 if (VAR_4)
  VAR_3 = VAR_4->name;


 if (!VAR_2)
  return ((void*)0);

 VAR_5 = ((void*)0);
 VAR_7 = 1;

 for (VAR_6 = 1; VAR_6 <= FUNC_0(VAR_2)[0]; VAR_6++)
 {
  Datum VAR_8;
  char *VAR_9;
  bool VAR_10;

  VAR_8 = FUNC_3(VAR_2, 1, &VAR_6,
       -1 ,
       -1 ,
       0 ,
       'i' ,
       &VAR_10);
  if (VAR_10)
   continue;
  VAR_9 = FUNC_2(VAR_8);


  if (FUNC_8(VAR_9, VAR_3, FUNC_7(VAR_3)) == 0
   && VAR_9[FUNC_7(VAR_3)] == '=')
   continue;


  if (VAR_5)
   VAR_5 = FUNC_4(VAR_5, 1, &VAR_7,
         VAR_8,
         0,
         -1 ,
         -1 ,
         0 ,
         'i' );
  else
   VAR_5 = FUNC_5(&VAR_8, 1,
            VAR_0,
            -1, 0, 'i');

  VAR_7++;
 }

 return VAR_5;
}
