
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_6__ {char* cur; int buflen; char* buf; TYPE_1__* curpol; } ;
struct TYPE_5__ {scalar_t__ type; int val; } ;
typedef TYPE_2__ INFIX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,...) ;
 void* FUNC_5 (char*,char) ;

__attribute__((used)) static void
FUNC_6(INFIX *VAR_2, bool VAR_3)
{

 FUNC_1();

 if (VAR_2->curpol->type == VAR_1)
 {
  FUNC_0(VAR_2, 11);
  FUNC_4(VAR_2->cur, "%d", VAR_2->curpol->val);
  VAR_2->cur = FUNC_5(VAR_2->cur, '\0');
  VAR_2->curpol--;
 }
 else if (VAR_2->curpol->val == (int32) '!')
 {
  bool VAR_4 = 0;

  FUNC_0(VAR_2, 1);
  *(VAR_2->cur) = '!';
  VAR_2->cur++;
  *(VAR_2->cur) = '\0';
  VAR_2->curpol--;
  if (VAR_2->curpol->type == VAR_0)
  {
   VAR_4 = 1;
   FUNC_0(VAR_2, 2);
   FUNC_4(VAR_2->cur, "( ");
   VAR_2->cur = FUNC_5(VAR_2->cur, '\0');
  }
  FUNC_6(VAR_2, VAR_4);
  if (VAR_4)
  {
   FUNC_0(VAR_2, 2);
   FUNC_4(VAR_2->cur, " )");
   VAR_2->cur = FUNC_5(VAR_2->cur, '\0');
  }
 }
 else
 {
  int32 VAR_5 = VAR_2->curpol->val;
  INFIX VAR_6;

  VAR_2->curpol--;
  if (VAR_5 == (int32) '|' && !VAR_3)
  {
   FUNC_0(VAR_2, 2);
   FUNC_4(VAR_2->cur, "( ");
   VAR_2->cur = FUNC_5(VAR_2->cur, '\0');
  }

  VAR_6.curpol = VAR_2->curpol;
  VAR_6.buflen = 16;
  VAR_6.cur = VAR_6.buf = (char *) FUNC_2(sizeof(char) * VAR_6.buflen);


  FUNC_6(&VAR_6, 0);


  VAR_2->curpol = VAR_6.curpol;
  FUNC_6(VAR_2, 0);


  FUNC_0(VAR_2, 3 + (VAR_6.cur - VAR_6.buf));
  FUNC_4(VAR_2->cur, " %c %s", VAR_5, VAR_6.buf);
  VAR_2->cur = FUNC_5(VAR_2->cur, '\0');
  FUNC_3(VAR_6.buf);

  if (VAR_5 == (int32) '|' && !VAR_3)
  {
   FUNC_0(VAR_2, 2);
   FUNC_4(VAR_2->cur, " )");
   VAR_2->cur = FUNC_5(VAR_2->cur, '\0');
  }
 }
}
