
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
struct TYPE_5__ {int argc; char** argv; TYPE_1__ lines; } ;
typedef TYPE_2__ Command ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,char*) ;
 char* FUNC_2 (char*,int*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char**,char*,int,char*) ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_1 ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static bool
FUNC_8(Command *VAR_2)
{
 char *VAR_3,
      *VAR_4;

 VAR_2->argc = 1;

 VAR_4 = VAR_3 = FUNC_4(VAR_2->lines.data);
 while ((VAR_4 = FUNC_7(VAR_4, ':')) != ((void*)0))
 {
  char VAR_5[13];
  char *VAR_6;
  int VAR_7;

  VAR_6 = FUNC_2(VAR_4, &VAR_7);
  if (VAR_6 == ((void*)0))
  {
   while (*VAR_4 == ':')
   {
    VAR_4++;
   }
   continue;
  }





  if (VAR_2->argc >= VAR_0)
  {
   FUNC_1(VAR_1, "statement has too many arguments (maximum is %d): %s\n",
     VAR_0 - 1, VAR_2->lines.data);
   FUNC_3(VAR_6);
   return 0;
  }

  FUNC_6(VAR_5, "$%d", VAR_2->argc);
  VAR_4 = FUNC_5(&VAR_3, VAR_4, VAR_7, VAR_5);

  VAR_2->argv[VAR_2->argc] = VAR_6;
  VAR_2->argc++;
 }

 FUNC_0(VAR_2->argv[0] == ((void*)0));
 VAR_2->argv[0] = VAR_3;
 return 1;
}
