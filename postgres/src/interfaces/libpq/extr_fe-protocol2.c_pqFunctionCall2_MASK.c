
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {int inCursor; int inStart; int errorMessage; int result; } ;
struct TYPE_22__ {int integer; scalar_t__ ptr; } ;
struct TYPE_23__ {int len; TYPE_1__ u; scalar_t__ isint; } ;
typedef TYPE_2__ PQArgBlock ;
typedef int PGresult ;
typedef TYPE_3__ PGconn ;
typedef int Oid ;
typedef int ExecStatusType ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int*,int,TYPE_3__*) ;
 scalar_t__ FUNC_6 (char*,TYPE_3__*) ;
 int FUNC_7 (char*,int,TYPE_3__*) ;
 int * FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (int,int,TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (float,int,TYPE_3__*) ;
 scalar_t__ FUNC_12 (char*,int,TYPE_3__*) ;
 scalar_t__ FUNC_13 (char*,TYPE_3__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 scalar_t__ FUNC_16 (int,int,TYPE_3__*) ;
 int FUNC_17 (int *,int ,char) ;

PGresult *
FUNC_18(PGconn *VAR_2, Oid VAR_3,
    int *VAR_4, int *VAR_5,
    int VAR_6,
    const PQArgBlock *VAR_7, int VAR_8)
{
 bool VAR_9 = 0;
 ExecStatusType VAR_10 = VAR_1;
 char VAR_11;
 int VAR_12;



 if (FUNC_11('F', 0, VAR_2) < 0 ||
  FUNC_13(" ", VAR_2) < 0 ||
  FUNC_9(VAR_3, 4, VAR_2) != 0 ||
  FUNC_9(VAR_8, 4, VAR_2) != 0)
 {

  return ((void*)0);
 }

 for (VAR_12 = 0; VAR_12 < VAR_8; ++VAR_12)
 {
  if (FUNC_9(VAR_7[VAR_12].len, 4, VAR_2))
   return ((void*)0);

  if (VAR_7[VAR_12].isint)
  {
   if (FUNC_9(VAR_7[VAR_12].u.integer, 4, VAR_2))
    return ((void*)0);
  }
  else
  {
   if (FUNC_12((char *) VAR_7[VAR_12].u.ptr, VAR_7[VAR_12].len, VAR_2))
    return ((void*)0);
  }
 }

 if (FUNC_10(VAR_2) < 0 ||
  FUNC_3(VAR_2))
  return ((void*)0);

 for (;;)
 {
  if (VAR_9)
  {

   if (FUNC_16(1, 0, VAR_2) ||
    FUNC_14(VAR_2) < 0)
    break;
  }




  VAR_2->inCursor = VAR_2->inStart;
  VAR_9 = 1;

  if (FUNC_6(&VAR_11, VAR_2))
   continue;






  switch (VAR_11)
  {
   case 'V':
    if (FUNC_6(&VAR_11, VAR_2))
     continue;
    if (VAR_11 == 'G')
    {

     if (FUNC_5(VAR_5, 4, VAR_2))
      continue;
     if (VAR_6)
     {
      if (FUNC_5(VAR_4, 4, VAR_2))
       continue;
     }
     else
     {
      if (FUNC_7((char *) VAR_4,
            *VAR_5,
            VAR_2))
       continue;
     }
     if (FUNC_6(&VAR_11, VAR_2))
      continue;
    }
    if (VAR_11 == '0')
    {

     VAR_10 = VAR_0;
    }
    else
    {

     FUNC_17(&VAR_2->errorMessage,
           FUNC_2("protocol error: id=0x%x\n"),
           VAR_11);
     FUNC_15(VAR_2);
     VAR_2->inStart = VAR_2->inCursor;
     return FUNC_8(VAR_2);
    }
    break;
   case 'E':
    if (FUNC_4(VAR_2, 1))
     continue;
    VAR_10 = VAR_1;
    break;
   case 'A':

    if (FUNC_1(VAR_2))
     continue;
    break;
   case 'N':

    if (FUNC_4(VAR_2, 0))
     continue;
    break;
   case 'Z':

    VAR_2->inStart = VAR_2->inCursor;

    if (VAR_2->result)
     return FUNC_8(VAR_2);
    return FUNC_0(VAR_2, VAR_10);
   default:

    FUNC_17(&VAR_2->errorMessage,
          FUNC_2("protocol error: id=0x%x\n"),
          VAR_11);
    FUNC_15(VAR_2);
    VAR_2->inStart = VAR_2->inCursor;
    return FUNC_8(VAR_2);
  }

  VAR_2->inStart = VAR_2->inCursor;
  VAR_9 = 0;
 }






 FUNC_15(VAR_2);
 return FUNC_8(VAR_2);
}
