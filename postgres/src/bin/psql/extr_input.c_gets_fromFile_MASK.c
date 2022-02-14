
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int line ;
struct TYPE_6__ {int len; char* data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int FILE ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 char* FUNC_4 (char*,int,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_0 ;

char *
FUNC_8(FILE *VAR_1)
{
 static PQExpBuffer VAR_2 = ((void*)0);

 char VAR_3[1024];

 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_2();
 else
  FUNC_7(VAR_2);

 for (;;)
 {
  char *VAR_4;


  VAR_0 = 1;


  VAR_4 = FUNC_4(VAR_3, sizeof(VAR_3), VAR_1);


  VAR_0 = 0;


  if (VAR_4 == ((void*)0))
  {
   if (FUNC_3(VAR_1))
   {
    FUNC_5("could not read from input file: %m");
    return ((void*)0);
   }
   break;
  }

  FUNC_1(VAR_2, VAR_3);

  if (FUNC_0(VAR_2))
  {
   FUNC_5("out of memory");
   return ((void*)0);
  }


  if (VAR_2->len > 0 && VAR_2->data[VAR_2->len - 1] == '\n')
  {
   VAR_2->data[VAR_2->len - 1] = '\0';
   return FUNC_6(VAR_2->data);
  }
 }

 if (VAR_2->len > 0)
  return FUNC_6(VAR_2->data);


 return ((void*)0);
}
