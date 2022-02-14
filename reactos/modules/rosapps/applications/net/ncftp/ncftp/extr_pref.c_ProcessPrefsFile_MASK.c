
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int line ;
struct TYPE_2__ {scalar_t__ visible; int (* proc ) (int,char*,int *) ;int varname; } ;
typedef int (* PrefProc ) (int,char*,int *) ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*,int ) ;
 int * FUNC_1 (char*,int,int * const) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (int,char*,int *) ;

void
FUNC_4(FILE *const VAR_4)
{
 char VAR_5[1024];
 char *VAR_6, *VAR_7;
 int VAR_8;

 VAR_5[sizeof(VAR_5) - 1] = '\0';
 while (FUNC_1(VAR_5, sizeof(VAR_5) - 1, VAR_4) != ((void*)0)) {
  VAR_6 = FUNC_2(VAR_5, " =\t\r\n");
  if ((VAR_6 == ((void*)0)) || (VAR_6[0] == '#'))
   continue;
  VAR_7 = FUNC_2(((void*)0), "\r\n");
  if (VAR_7 == ((void*)0))
   continue;

  for (VAR_8=0; VAR_8<VAR_0; VAR_8++) {
   if (FUNC_0(VAR_6, VAR_1[VAR_8].varname)) {
    if (VAR_1[VAR_8].visible == VAR_3) {



     VAR_2++;
    } else if (VAR_1[VAR_8].proc != (PrefProc) 0) {
     (*VAR_1[VAR_8].proc)(VAR_8, VAR_7, ((void*)0));
    }
   }
  }
 }
}
