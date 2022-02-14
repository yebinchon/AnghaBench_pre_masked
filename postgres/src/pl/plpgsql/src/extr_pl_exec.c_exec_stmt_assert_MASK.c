
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int * message; int cond; } ;
typedef TYPE_1__ PLpgSQL_stmt_assert ;
typedef int PLpgSQL_execstate ;
typedef int Oid ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int*,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_8(PLpgSQL_execstate *VAR_4, PLpgSQL_stmt_assert *VAR_5)
{
 bool VAR_6;
 bool VAR_7;


 if (!VAR_3)
  return VAR_2;

 VAR_6 = FUNC_5(VAR_4, VAR_5->cond, &VAR_7);
 FUNC_6(VAR_4);

 if (VAR_7 || !VAR_6)
 {
  char *VAR_8 = ((void*)0);

  if (VAR_5->message != ((void*)0))
  {
   Datum VAR_9;
   Oid VAR_10;
   int32 VAR_11;

   VAR_9 = FUNC_7(VAR_4, VAR_5->message,
         &VAR_7, &VAR_10, &VAR_11);
   if (!VAR_7)
    VAR_8 = FUNC_0(VAR_4, VAR_9, VAR_10);

  }

  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     VAR_8 ? FUNC_4("%s", VAR_8) :
     FUNC_3("assertion failed")));
 }

 return VAR_2;
}
