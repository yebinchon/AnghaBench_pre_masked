
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t inCursor; int inStart; int * inBuffer; int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int,int,TYPE_1__*) ;
 int FUNC_6 (int *,int ) ;

int
FUNC_7(PGconn *VAR_0, char **VAR_1, int VAR_2)
{
 int VAR_3;

 for (;;)
 {





  VAR_3 = FUNC_0(VAR_0);
  if (VAR_3 < 0)
   return VAR_3;
  if (VAR_3 == 0)
  {

   if (VAR_2)
    return 0;

   if (FUNC_5(1, 0, VAR_0) ||
    FUNC_4(VAR_0) < 0)
    return -2;
   continue;
  }





  VAR_3 -= 4;
  if (VAR_3 > 0)
  {
   *VAR_1 = (char *) FUNC_2(VAR_3 + 1);
   if (*VAR_1 == ((void*)0))
   {
    FUNC_6(&VAR_0->errorMessage,
          FUNC_1("out of memory\n"));
    return -2;
   }
   FUNC_3(*VAR_1, &VAR_0->inBuffer[VAR_0->inCursor], VAR_3);
   (*VAR_1)[VAR_3] = '\0';


   VAR_0->inStart = VAR_0->inCursor + VAR_3;

   return VAR_3;
  }


  VAR_0->inStart = VAR_0->inCursor;
 }
}
