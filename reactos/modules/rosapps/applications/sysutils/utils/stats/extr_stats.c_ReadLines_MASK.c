
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ EmptyLines; scalar_t__ LineCount; } ;
typedef TYPE_1__* PFILE_INFO ;
typedef int FileBuffer ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int,int*,int *) ;
 scalar_t__ VAR_1 ;

VOID
FUNC_1(PFILE_INFO VAR_2)
{
  DWORD VAR_3, VAR_4;
  static char VAR_5[1024];
  char VAR_6 = '\0';
  char *VAR_7;

  VAR_4 = 0;
  while(FUNC_0 (VAR_0, VAR_5, sizeof(VAR_5), &VAR_3, ((void*)0)) && VAR_3 >= sizeof(char))
  {
    for(VAR_7 = VAR_5; VAR_3 > 0; VAR_3 -= sizeof(char), VAR_7++)
    {
      if(*VAR_7 == '\n' && VAR_6 == '\r')
      {
        VAR_6 = '\0';
        if(!VAR_1 || (VAR_4 > 0))
          VAR_2->LineCount++;
        if(VAR_4 == 0)
          VAR_2->EmptyLines++;
        VAR_4 = 0;
        continue;
      }
      VAR_6 = *VAR_7;
      if(VAR_1 && (*VAR_7 == ' ' || *VAR_7 == '\t'))
      {
        continue;
      }
      if(*VAR_7 != '\r')
        VAR_4++;
    }
  }

  VAR_2->LineCount += (VAR_4 > 0);
  VAR_2->EmptyLines += ((VAR_6 != '\0') && (VAR_4 == 0));
}
