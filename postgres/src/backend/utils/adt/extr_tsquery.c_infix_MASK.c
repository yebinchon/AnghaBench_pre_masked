
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int8 ;
typedef int int16 ;
struct TYPE_7__ {scalar_t__ oper; int distance; } ;
struct TYPE_8__ {int distance; int length; int weight; scalar_t__ prefix; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_1__ qoperator; TYPE_2__ qoperand; } ;
struct TYPE_9__ {char* op; char* cur; int buflen; char* buf; TYPE_6__* curpol; } ;
typedef TYPE_2__ QueryOperand ;
typedef TYPE_3__ INFIX ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;

 scalar_t__ VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,...) ;
 void* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*,char) ;

__attribute__((used)) static void
FUNC_12(INFIX *VAR_3, int VAR_4, bool VAR_5)
{

 FUNC_3();

 if (VAR_3->curpol->type == VAR_2)
 {
  QueryOperand *VAR_6 = &VAR_3->curpol->qoperand;
  char *VAR_7 = VAR_3->op + VAR_6->distance;
  int VAR_8;

  FUNC_2(VAR_3, VAR_6->length * (FUNC_7() + 1) + 2 + 6);
  *(VAR_3->cur) = '\'';
  VAR_3->cur++;
  while (*VAR_7)
  {
   if (FUNC_11(VAR_7, '\''))
   {
    *(VAR_3->cur) = '\'';
    VAR_3->cur++;
   }
   else if (FUNC_11(VAR_7, '\\'))
   {
    *(VAR_3->cur) = '\\';
    VAR_3->cur++;
   }
   FUNC_0(VAR_3->cur, VAR_7);

   VAR_8 = FUNC_8(VAR_7);
   VAR_7 += VAR_8;
   VAR_3->cur += VAR_8;
  }
  *(VAR_3->cur) = '\'';
  VAR_3->cur++;
  if (VAR_6->weight || VAR_6->prefix)
  {
   *(VAR_3->cur) = ':';
   VAR_3->cur++;
   if (VAR_6->prefix)
   {
    *(VAR_3->cur) = '*';
    VAR_3->cur++;
   }
   if (VAR_6->weight & (1 << 3))
   {
    *(VAR_3->cur) = 'A';
    VAR_3->cur++;
   }
   if (VAR_6->weight & (1 << 2))
   {
    *(VAR_3->cur) = 'B';
    VAR_3->cur++;
   }
   if (VAR_6->weight & (1 << 1))
   {
    *(VAR_3->cur) = 'C';
    VAR_3->cur++;
   }
   if (VAR_6->weight & 1)
   {
    *(VAR_3->cur) = 'D';
    VAR_3->cur++;
   }
  }
  *(VAR_3->cur) = '\0';
  VAR_3->curpol++;
 }
 else if (VAR_3->curpol->qoperator.oper == VAR_1)
 {
  int VAR_9 = FUNC_1(VAR_3->curpol);

  if (VAR_9 < VAR_4)
  {
   FUNC_2(VAR_3, 2);
   FUNC_9(VAR_3->cur, "( ");
   VAR_3->cur = FUNC_10(VAR_3->cur, '\0');
  }
  FUNC_2(VAR_3, 1);
  *(VAR_3->cur) = '!';
  VAR_3->cur++;
  *(VAR_3->cur) = '\0';
  VAR_3->curpol++;

  FUNC_12(VAR_3, VAR_9, 0);
  if (VAR_9 < VAR_4)
  {
   FUNC_2(VAR_3, 2);
   FUNC_9(VAR_3->cur, " )");
   VAR_3->cur = FUNC_10(VAR_3->cur, '\0');
  }
 }
 else
 {
  int8 VAR_10 = VAR_3->curpol->qoperator.oper;
  int VAR_11 = FUNC_1(VAR_3->curpol);
  int16 VAR_12 = VAR_3->curpol->qoperator.distance;
  INFIX VAR_13;
  bool VAR_14 = 0;

  VAR_3->curpol++;
  if (VAR_11 < VAR_4 ||

   (VAR_10 == 128 && VAR_5))
  {
   VAR_14 = 1;
   FUNC_2(VAR_3, 2);
   FUNC_9(VAR_3->cur, "( ");
   VAR_3->cur = FUNC_10(VAR_3->cur, '\0');
  }

  VAR_13.curpol = VAR_3->curpol;
  VAR_13.op = VAR_3->op;
  VAR_13.buflen = 16;
  VAR_13.cur = VAR_13.buf = (char *) FUNC_5(sizeof(char) * VAR_13.buflen);


  FUNC_12(&VAR_13, VAR_11, (VAR_10 == 128));


  VAR_3->curpol = VAR_13.curpol;
  FUNC_12(VAR_3, VAR_11, 0);


  FUNC_2(VAR_3, 3 + (2 + 10 ) + (VAR_13.cur - VAR_13.buf));
  switch (VAR_10)
  {
   case 129:
    FUNC_9(VAR_3->cur, " | %s", VAR_13.buf);
    break;
   case 130:
    FUNC_9(VAR_3->cur, " & %s", VAR_13.buf);
    break;
   case 128:
    if (VAR_12 != 1)
     FUNC_9(VAR_3->cur, " <%d> %s", VAR_12, VAR_13.buf);
    else
     FUNC_9(VAR_3->cur, " <-> %s", VAR_13.buf);
    break;
   default:

    FUNC_4(VAR_0, "unrecognized operator type: %d", VAR_10);
  }
  VAR_3->cur = FUNC_10(VAR_3->cur, '\0');
  FUNC_6(VAR_13.buf);

  if (VAR_14)
  {
   FUNC_2(VAR_3, 2);
   FUNC_9(VAR_3->cur, " )");
   VAR_3->cur = FUNC_10(VAR_3->cur, '\0');
  }
 }
}
