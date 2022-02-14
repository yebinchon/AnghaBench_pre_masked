
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_6__ {char* op; char* cur; int buflen; char* buf; TYPE_1__* curpol; } ;
struct TYPE_5__ {scalar_t__ type; int distance; int length; int flag; scalar_t__ val; } ;
typedef TYPE_2__ INFIX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,...) ;
 void* FUNC_5 (char*,char) ;

__attribute__((used)) static void
FUNC_6(INFIX *VAR_5, bool VAR_6)
{

 FUNC_1();

 if (VAR_5->curpol->type == VAR_4)
 {
  char *VAR_7 = VAR_5->op + VAR_5->curpol->distance;

  FUNC_0(VAR_5, VAR_5->curpol->length * 2 + 5);
  while (*VAR_7)
  {
   *(VAR_5->cur) = *VAR_7;
   VAR_7++;
   VAR_5->cur++;
  }
  if (VAR_5->curpol->flag & VAR_2)
  {
   *(VAR_5->cur) = '%';
   VAR_5->cur++;
  }
  if (VAR_5->curpol->flag & VAR_1)
  {
   *(VAR_5->cur) = '@';
   VAR_5->cur++;
  }
  if (VAR_5->curpol->flag & VAR_0)
  {
   *(VAR_5->cur) = '*';
   VAR_5->cur++;
  }
  *(VAR_5->cur) = '\0';
  VAR_5->curpol++;
 }
 else if (VAR_5->curpol->val == (int32) '!')
 {
  bool VAR_8 = 0;

  FUNC_0(VAR_5, 1);
  *(VAR_5->cur) = '!';
  VAR_5->cur++;
  *(VAR_5->cur) = '\0';
  VAR_5->curpol++;
  if (VAR_5->curpol->type == VAR_3)
  {
   VAR_8 = 1;
   FUNC_0(VAR_5, 2);
   FUNC_4(VAR_5->cur, "( ");
   VAR_5->cur = FUNC_5(VAR_5->cur, '\0');
  }
  FUNC_6(VAR_5, VAR_8);
  if (VAR_8)
  {
   FUNC_0(VAR_5, 2);
   FUNC_4(VAR_5->cur, " )");
   VAR_5->cur = FUNC_5(VAR_5->cur, '\0');
  }
 }
 else
 {
  int32 VAR_9 = VAR_5->curpol->val;
  INFIX VAR_10;

  VAR_5->curpol++;
  if (VAR_9 == (int32) '|' && !VAR_6)
  {
   FUNC_0(VAR_5, 2);
   FUNC_4(VAR_5->cur, "( ");
   VAR_5->cur = FUNC_5(VAR_5->cur, '\0');
  }

  VAR_10.curpol = VAR_5->curpol;
  VAR_10.op = VAR_5->op;
  VAR_10.buflen = 16;
  VAR_10.cur = VAR_10.buf = (char *) FUNC_2(sizeof(char) * VAR_10.buflen);


  FUNC_6(&VAR_10, 0);


  VAR_5->curpol = VAR_10.curpol;
  FUNC_6(VAR_5, 0);


  FUNC_0(VAR_5, 3 + (VAR_10.cur - VAR_10.buf));
  FUNC_4(VAR_5->cur, " %c %s", VAR_9, VAR_10.buf);
  VAR_5->cur = FUNC_5(VAR_5->cur, '\0');
  FUNC_3(VAR_10.buf);

  if (VAR_9 == (int32) '|' && !VAR_6)
  {
   FUNC_0(VAR_5, 2);
   FUNC_4(VAR_5->cur, " )");
   VAR_5->cur = FUNC_5(VAR_5->cur, '\0');
  }
 }
}
