
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int rowBufLen; scalar_t__ inBuffer; scalar_t__ inCursor; scalar_t__ inStart; int errorMessage; TYPE_2__* rowBuf; TYPE_1__* result; } ;
struct TYPE_12__ {int len; scalar_t__ value; } ;
struct TYPE_11__ {int numAttributes; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGdataValue ;
typedef TYPE_3__ PGconn ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int*,int,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,char const**) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int,TYPE_3__*) ;
 int FUNC_6 (int *,char*,char const*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_8(PGconn *VAR_0, int VAR_1)
{
 PGresult *VAR_2 = VAR_0->result;
 int VAR_3 = VAR_2->numAttributes;
 const char *VAR_4;
 PGdataValue *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;


 if (FUNC_2(&VAR_6, 2, VAR_0))
 {

  VAR_4 = FUNC_0("insufficient data in \"D\" message");
  goto advance_and_error;
 }

 if (VAR_6 != VAR_3)
 {
  VAR_4 = FUNC_0("unexpected field count in \"D\" message");
  goto advance_and_error;
 }


 VAR_5 = VAR_0->rowBuf;
 if (VAR_3 > VAR_0->rowBufLen)
 {
  VAR_5 = (PGdataValue *) FUNC_7(VAR_5,
           VAR_3 * sizeof(PGdataValue));
  if (!VAR_5)
  {
   VAR_4 = ((void*)0);
   goto advance_and_error;
  }
  VAR_0->rowBuf = VAR_5;
  VAR_0->rowBufLen = VAR_3;
 }


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
 {

  if (FUNC_2(&VAR_7, 4, VAR_0))
  {

   VAR_4 = FUNC_0("insufficient data in \"D\" message");
   goto advance_and_error;
  }
  VAR_5[VAR_8].len = VAR_7;






  VAR_5[VAR_8].value = VAR_0->inBuffer + VAR_0->inCursor;


  if (VAR_7 > 0)
  {
   if (FUNC_5(VAR_7, VAR_0))
   {

    VAR_4 = FUNC_0("insufficient data in \"D\" message");
    goto advance_and_error;
   }
  }
 }


 if (VAR_0->inCursor != VAR_0->inStart + 5 + VAR_1)
 {
  VAR_4 = FUNC_0("extraneous data in \"D\" message");
  goto advance_and_error;
 }


 VAR_0->inStart = VAR_0->inCursor;


 VAR_4 = ((void*)0);
 if (FUNC_3(VAR_0, &VAR_4))
  return 0;

 goto set_error_result;

advance_and_error:

 VAR_0->inStart += 5 + VAR_1;

set_error_result:





 FUNC_1(VAR_0);







 if (!VAR_4)
  VAR_4 = FUNC_0("out of memory for query result");

 FUNC_6(&VAR_0->errorMessage, "%s\n", VAR_4);
 FUNC_4(VAR_0);






 return 0;
}
