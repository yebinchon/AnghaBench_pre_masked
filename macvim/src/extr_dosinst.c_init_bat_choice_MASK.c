
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int arg; int active; int (* changefunc ) (size_t) ;int * text; int installfunc; } ;
struct TYPE_3__ {char* batpath; char* oldbat; int batname; } ;


 char VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (size_t) ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 char* VAR_3 ;
 char* FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (size_t,char*,int ) ;
 int FUNC_4 (char*,char*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (size_t) ;

__attribute__((used)) static void
FUNC_6(int VAR_6)
{
    char *VAR_7 = VAR_5[VAR_6].batpath;
    char *VAR_8 = VAR_5[VAR_6].oldbat;
    char *VAR_9;
    int VAR_10;

    VAR_2[VAR_1].arg = VAR_6;
    VAR_2[VAR_1].installfunc = VAR_4;
    VAR_2[VAR_1].active = 1;
    VAR_2[VAR_1].text = ((void*)0);
    if (VAR_8 != ((void*)0))
    {

 VAR_2[VAR_1].changefunc = FUNC_5;
 *VAR_7 = VAR_0;
 FUNC_5(VAR_1);
    }
    else
    {
 if (VAR_3 != ((void*)0))

     FUNC_4(VAR_7, VAR_3);
 else
 {


     VAR_9 = FUNC_2("WINDIR");
     if (VAR_9 != ((void*)0) && *VAR_9 != VAR_0)
  FUNC_4(VAR_7, VAR_9);
     else
     {
  VAR_9 = FUNC_2("PATH");
  if (VAR_9 == ((void*)0) || *VAR_9 == VAR_0)
      FUNC_4(VAR_7, "C:/Windows");
  else
  {
      VAR_10 = 0;
      while (*VAR_9 != VAR_0 && *VAR_9 != ';')
   VAR_7[VAR_10++] = *VAR_9++;
      VAR_7[VAR_10] = VAR_0;
  }
     }
 }
 FUNC_0(VAR_7);
 FUNC_3(VAR_1, VAR_7, VAR_5[VAR_6].batname);

 VAR_2[VAR_1].changefunc = FUNC_1;
    }
    ++VAR_1;
}
