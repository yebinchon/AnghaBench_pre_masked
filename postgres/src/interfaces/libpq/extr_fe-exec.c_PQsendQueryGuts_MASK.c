
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int asyncStatus; int * last_query; int queryclass; int errorMessage; int pversion; } ;
typedef TYPE_1__ PGconn ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int const,int,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (char,int,TYPE_1__*) ;
 scalar_t__ FUNC_7 (char,TYPE_1__*) ;
 scalar_t__ FUNC_8 (char const* const,int,TYPE_1__*) ;
 scalar_t__ FUNC_9 (char const*,TYPE_1__*) ;
 int FUNC_10 (int *,int ) ;
 int * FUNC_11 (char const*) ;
 int FUNC_12 (char const* const) ;

__attribute__((used)) static int
FUNC_13(PGconn *VAR_2,
    const char *VAR_3,
    const char *VAR_4,
    int VAR_5,
    const Oid *VAR_6,
    const char *const *VAR_7,
    const int *VAR_8,
    const int *VAR_9,
    int VAR_10)
{
 int VAR_11;


 if (FUNC_0(VAR_2->pversion) < 3)
 {
  FUNC_10(&VAR_2->errorMessage,
        FUNC_2("function requires at least protocol version 3.0\n"));
  return 0;
 }






 if (VAR_3)
 {

  if (FUNC_6('P', 0, VAR_2) < 0 ||
   FUNC_9(VAR_4, VAR_2) < 0 ||
   FUNC_9(VAR_3, VAR_2) < 0)
   goto sendFailed;
  if (VAR_5 > 0 && VAR_6)
  {
   if (FUNC_4(VAR_5, 2, VAR_2) < 0)
    goto sendFailed;
   for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
   {
    if (FUNC_4(VAR_6[VAR_11], 4, VAR_2) < 0)
     goto sendFailed;
   }
  }
  else
  {
   if (FUNC_4(0, 2, VAR_2) < 0)
    goto sendFailed;
  }
  if (FUNC_5(VAR_2) < 0)
   goto sendFailed;
 }


 if (FUNC_6('B', 0, VAR_2) < 0 ||
  FUNC_9("", VAR_2) < 0 ||
  FUNC_9(VAR_4, VAR_2) < 0)
  goto sendFailed;


 if (VAR_5 > 0 && VAR_9)
 {
  if (FUNC_4(VAR_5, 2, VAR_2) < 0)
   goto sendFailed;
  for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  {
   if (FUNC_4(VAR_9[VAR_11], 2, VAR_2) < 0)
    goto sendFailed;
  }
 }
 else
 {
  if (FUNC_4(0, 2, VAR_2) < 0)
   goto sendFailed;
 }

 if (FUNC_4(VAR_5, 2, VAR_2) < 0)
  goto sendFailed;


 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
 {
  if (VAR_7 && VAR_7[VAR_11])
  {
   int VAR_12;

   if (VAR_9 && VAR_9[VAR_11] != 0)
   {

    if (VAR_8)
     VAR_12 = VAR_8[VAR_11];
    else
    {
     FUNC_10(&VAR_2->errorMessage,
           FUNC_2("length must be given for binary parameter\n"));
     goto sendFailed;
    }
   }
   else
   {

    VAR_12 = FUNC_12(VAR_7[VAR_11]);
   }
   if (FUNC_4(VAR_12, 4, VAR_2) < 0 ||
    FUNC_8(VAR_7[VAR_11], VAR_12, VAR_2) < 0)
    goto sendFailed;
  }
  else
  {

   if (FUNC_4(-1, 4, VAR_2) < 0)
    goto sendFailed;
  }
 }
 if (FUNC_4(1, 2, VAR_2) < 0 ||
  FUNC_4(VAR_10, 2, VAR_2))
  goto sendFailed;
 if (FUNC_5(VAR_2) < 0)
  goto sendFailed;


 if (FUNC_6('D', 0, VAR_2) < 0 ||
  FUNC_7('P', VAR_2) < 0 ||
  FUNC_9("", VAR_2) < 0 ||
  FUNC_5(VAR_2) < 0)
  goto sendFailed;


 if (FUNC_6('E', 0, VAR_2) < 0 ||
  FUNC_9("", VAR_2) < 0 ||
  FUNC_4(0, 4, VAR_2) < 0 ||
  FUNC_5(VAR_2) < 0)
  goto sendFailed;


 if (FUNC_6('S', 0, VAR_2) < 0 ||
  FUNC_5(VAR_2) < 0)
  goto sendFailed;


 VAR_2->queryclass = VAR_1;



 if (VAR_2->last_query)
  FUNC_1(VAR_2->last_query);
 if (VAR_3)
  VAR_2->last_query = FUNC_11(VAR_3);
 else
  VAR_2->last_query = ((void*)0);





 if (FUNC_3(VAR_2) < 0)
  goto sendFailed;


 VAR_2->asyncStatus = VAR_0;
 return 1;

sendFailed:

 return 0;
}
