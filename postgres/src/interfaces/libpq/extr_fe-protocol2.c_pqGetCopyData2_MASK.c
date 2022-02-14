
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ inCursor; scalar_t__ inStart; scalar_t__ inEnd; char* inBuffer; int errorMessage; int asyncStatus; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int,int,TYPE_1__*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

int
FUNC_7(PGconn *VAR_1, char **VAR_2, int VAR_3)
{
 bool VAR_4;
 int VAR_5;

 for (;;)
 {



  VAR_1->inCursor = VAR_1->inStart;
  VAR_4 = 0;
  while (VAR_1->inCursor < VAR_1->inEnd)
  {
   char VAR_6 = VAR_1->inBuffer[VAR_1->inCursor++];

   if (VAR_6 == '\n')
   {
    VAR_4 = 1;
    break;
   }
  }
  if (!VAR_4)
   goto nodata;
  VAR_5 = VAR_1->inCursor - VAR_1->inStart;





  if (VAR_5 == 3 &&
   FUNC_6(&VAR_1->inBuffer[VAR_1->inStart], "\\.\n", 3) == 0)
  {
   VAR_1->inStart = VAR_1->inCursor;
   VAR_1->asyncStatus = VAR_0;
   return -1;
  }




  *VAR_2 = (char *) FUNC_1(VAR_5 + 1);
  if (*VAR_2 == ((void*)0))
  {
   FUNC_5(&VAR_1->errorMessage,
         FUNC_0("out of memory\n"));
   return -2;
  }
  FUNC_2(*VAR_2, &VAR_1->inBuffer[VAR_1->inStart], VAR_5);
  (*VAR_2)[VAR_5] = '\0';


  VAR_1->inStart = VAR_1->inCursor;

  return VAR_5;

nodata:

  if (VAR_3)
   return 0;

  if (FUNC_4(1, 0, VAR_1) ||
   FUNC_3(VAR_1) < 0)
   return -2;
 }
}
