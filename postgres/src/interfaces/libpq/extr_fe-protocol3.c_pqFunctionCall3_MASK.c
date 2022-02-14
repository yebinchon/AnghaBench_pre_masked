
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_27__ {int inCursor; int inStart; int inEnd; int errorMessage; int result; } ;
struct TYPE_25__ {int integer; scalar_t__ ptr; } ;
struct TYPE_26__ {int len; TYPE_1__ u; scalar_t__ isint; } ;
typedef TYPE_2__ PQArgBlock ;
typedef int PGresult ;
typedef TYPE_3__ PGconn ;
typedef int Oid ;
typedef int ExecStatusType ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (char) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int) ;
 scalar_t__ FUNC_10 (int*,int,TYPE_3__*) ;
 scalar_t__ FUNC_11 (char*,TYPE_3__*) ;
 int FUNC_12 (char*,int,TYPE_3__*) ;
 int * FUNC_13 (TYPE_3__*) ;
 scalar_t__ FUNC_14 (int,int,TYPE_3__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*) ;
 scalar_t__ FUNC_16 (float,int,TYPE_3__*) ;
 scalar_t__ FUNC_17 (char*,int,TYPE_3__*) ;
 scalar_t__ FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 scalar_t__ FUNC_20 (int,int,TYPE_3__*) ;
 int FUNC_21 (int *,int ,char) ;

PGresult *
FUNC_22(PGconn *VAR_2, Oid VAR_3,
    int *VAR_4, int *VAR_5,
    int VAR_6,
    const PQArgBlock *VAR_7, int VAR_8)
{
 bool VAR_9 = 0;
 ExecStatusType VAR_10 = VAR_1;
 char VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;



 if (FUNC_16('F', 0, VAR_2) < 0 ||
  FUNC_14(VAR_3, 4, VAR_2) < 0 ||
  FUNC_14(1, 2, VAR_2) < 0 ||
  FUNC_14(1, 2, VAR_2) < 0 ||
  FUNC_14(VAR_8, 2, VAR_2) < 0)
 {

  return ((void*)0);
 }

 for (VAR_14 = 0; VAR_14 < VAR_8; ++VAR_14)
 {
  if (FUNC_14(VAR_7[VAR_14].len, 4, VAR_2))
   return ((void*)0);
  if (VAR_7[VAR_14].len == -1)
   continue;

  if (VAR_7[VAR_14].isint)
  {
   if (FUNC_14(VAR_7[VAR_14].u.integer, VAR_7[VAR_14].len, VAR_2))
    return ((void*)0);
  }
  else
  {
   if (FUNC_17((char *) VAR_7[VAR_14].u.ptr, VAR_7[VAR_14].len, VAR_2))
    return ((void*)0);
  }
 }

 if (FUNC_14(1, 2, VAR_2) < 0)
  return ((void*)0);

 if (FUNC_15(VAR_2) < 0 ||
  FUNC_8(VAR_2))
  return ((void*)0);

 for (;;)
 {
  if (VAR_9)
  {

   if (FUNC_20(1, 0, VAR_2) ||
    FUNC_18(VAR_2) < 0)
    break;
  }




  VAR_9 = 1;

  VAR_2->inCursor = VAR_2->inStart;
  if (FUNC_11(&VAR_11, VAR_2))
   continue;
  if (FUNC_10(&VAR_12, 4, VAR_2))
   continue;






  if (VAR_12 < 4)
  {
   FUNC_5(VAR_2, VAR_11, VAR_12);
   break;
  }
  if (VAR_12 > 30000 && !FUNC_1(VAR_11))
  {
   FUNC_5(VAR_2, VAR_11, VAR_12);
   break;
  }




  VAR_12 -= 4;
  VAR_13 = VAR_2->inEnd - VAR_2->inCursor;
  if (VAR_13 < VAR_12)
  {




   if (FUNC_7(VAR_2->inCursor + (size_t) VAR_12,
          VAR_2))
   {






    FUNC_5(VAR_2, VAR_11, VAR_12);
    break;
   }
   continue;
  }






  switch (VAR_11)
  {
   case 'V':
    if (FUNC_10(VAR_5, 4, VAR_2))
     continue;
    if (*VAR_5 != -1)
    {
     if (VAR_6)
     {
      if (FUNC_10(VAR_4, *VAR_5, VAR_2))
       continue;
     }
     else
     {
      if (FUNC_12((char *) VAR_4,
            *VAR_5,
            VAR_2))
       continue;
     }
    }

    VAR_10 = VAR_0;
    break;
   case 'E':
    if (FUNC_9(VAR_2, 1))
     continue;
    VAR_10 = VAR_1;
    break;
   case 'A':

    if (FUNC_2(VAR_2))
     continue;
    break;
   case 'N':

    if (FUNC_9(VAR_2, 0))
     continue;
    break;
   case 'Z':
    if (FUNC_4(VAR_2))
     continue;

    VAR_2->inStart += 5 + VAR_12;

    if (VAR_2->result)
     return FUNC_13(VAR_2);
    return FUNC_0(VAR_2, VAR_10);
   case 'S':
    if (FUNC_3(VAR_2))
     continue;
    break;
   default:

    FUNC_21(&VAR_2->errorMessage,
          FUNC_6("protocol error: id=0x%x\n"),
          VAR_11);
    FUNC_19(VAR_2);

    VAR_2->inStart += 5 + VAR_12;
    return FUNC_13(VAR_2);
  }


  VAR_2->inStart += 5 + VAR_12;
  VAR_9 = 0;
 }






 FUNC_19(VAR_2);
 return FUNC_13(VAR_2);
}
