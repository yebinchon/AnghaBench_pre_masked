
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int std_bitmap ;
struct TYPE_17__ {int rowBufLen; int asyncStatus; TYPE_2__* result; int errorMessage; scalar_t__ inEnd; scalar_t__ inStart; scalar_t__ inCursor; scalar_t__ inBuffer; TYPE_3__* rowBuf; } ;
struct TYPE_16__ {int len; scalar_t__ value; } ;
struct TYPE_15__ {int numAttributes; int binary; TYPE_1__* attDescs; } ;
struct TYPE_14__ {int format; } ;
typedef TYPE_2__ PGresult ;
typedef TYPE_3__ PGdataValue ;
typedef TYPE_4__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (int*,int,TYPE_4__*) ;
 scalar_t__ FUNC_6 (char*,size_t,TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,char const**) ;
 scalar_t__ FUNC_8 (int,TYPE_4__*) ;
 int FUNC_9 (int *,char*,char const*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_11(PGconn *VAR_5, bool VAR_6)
{
 PGresult *VAR_7 = VAR_5->result;
 int VAR_8 = VAR_7->numAttributes;
 const char *VAR_9;
 PGdataValue *VAR_10;


 char VAR_11[64];
 char *VAR_12 = VAR_11;
 int VAR_13;
 size_t VAR_14;
 char VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;


 VAR_10 = VAR_5->rowBuf;
 if (VAR_8 > VAR_5->rowBufLen)
 {
  VAR_10 = (PGdataValue *) FUNC_10(VAR_10,
           VAR_8 * sizeof(PGdataValue));
  if (!VAR_10)
  {
   VAR_9 = ((void*)0);
   goto advance_and_error;
  }
  VAR_5->rowBuf = VAR_10;
  VAR_5->rowBufLen = VAR_8;
 }


 VAR_7->binary = VAR_6;





 if (VAR_6)
 {
  for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
   VAR_7->attDescs[VAR_13].format = 1;
 }


 VAR_14 = (VAR_8 + VAR_0 - 1) / VAR_0;

 if (VAR_14 > sizeof(VAR_11))
 {
  VAR_12 = (char *) FUNC_3(VAR_14);
  if (!VAR_12)
  {
   VAR_9 = ((void*)0);
   goto advance_and_error;
  }
 }

 if (FUNC_6(VAR_12, VAR_14, VAR_5))
  goto EOFexit;


 VAR_16 = 0;
 VAR_15 = VAR_12[VAR_16];
 VAR_17 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
 {

  if (!(VAR_15 & 0200))
   VAR_18 = VAR_2;
  else if (FUNC_5(&VAR_18, 4, VAR_5))
   goto EOFexit;
  else
  {
   if (!VAR_6)
    VAR_18 = VAR_18 - 4;
   if (VAR_18 < 0)
    VAR_18 = 0;
  }
  VAR_10[VAR_13].len = VAR_18;






  VAR_10[VAR_13].value = VAR_5->inBuffer + VAR_5->inCursor;


  if (VAR_18 > 0)
  {
   if (FUNC_8(VAR_18, VAR_5))
    goto EOFexit;
  }


  VAR_17++;
  if (VAR_17 == VAR_0)
  {
   VAR_16++;
   VAR_15 = VAR_12[VAR_16];
   VAR_17 = 0;
  }
  else
   VAR_15 <<= 1;
 }


 if (VAR_12 != VAR_11)
  FUNC_1(VAR_12);
 VAR_12 = ((void*)0);


 VAR_5->inStart = VAR_5->inCursor;


 VAR_9 = ((void*)0);
 if (FUNC_7(VAR_5, &VAR_9))
  return 0;

 goto set_error_result;

advance_and_error:






 VAR_5->inStart = VAR_5->inEnd;

set_error_result:





 FUNC_4(VAR_5);







 if (!VAR_9)
  VAR_9 = FUNC_2("out of memory for query result");

 FUNC_9(&VAR_5->errorMessage, "%s\n", VAR_9);





 VAR_5->result = FUNC_0(VAR_5, VAR_4);
 VAR_5->asyncStatus = VAR_3;

EOFexit:
 if (VAR_12 != ((void*)0) && VAR_12 != VAR_11)
  FUNC_1(VAR_12);
 return VAR_1;
}
