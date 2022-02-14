
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int curargalloc; int curargsize; char* curarg; TYPE_1__* ppp; } ;
typedef TYPE_2__ macexpstackentry_t ;
struct TYPE_4__ {scalar_t__ expanding; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char*,int) ;
 TYPE_2__* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, int VAR_2)
{
 macexpstackentry_t *VAR_3 = FUNC_3();

 FUNC_0(VAR_3->ppp->expanding == 0);

 if(VAR_3->curargalloc - VAR_3->curargsize <= VAR_2+1)
 {
  char *VAR_4;
  int VAR_5 = VAR_3->curargalloc + ((VAR_0 > VAR_2+1) ? VAR_0 : VAR_2+1);
  VAR_4 = FUNC_2(VAR_3->curarg, VAR_5 * sizeof(VAR_3->curarg[0]));
  if(!VAR_4)
   return;
  VAR_3->curarg = VAR_4;
  VAR_3->curargalloc = VAR_5;
 }
 FUNC_1(VAR_3->curarg + VAR_3->curargsize, VAR_1, VAR_2);
 VAR_3->curargsize += VAR_2;
 VAR_3->curarg[VAR_3->curargsize] = '\0';
}
