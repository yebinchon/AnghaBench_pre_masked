
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_19__ {int data; } ;
struct TYPE_18__ {scalar_t__ queryclass; scalar_t__ inCursor; scalar_t__ inStart; int errorMessage; TYPE_1__* result; int asyncStatus; TYPE_7__ workBuffer; } ;
struct TYPE_17__ {int tableid; int columnid; int format; int typid; int typlen; int atttypmod; int name; } ;
struct TYPE_16__ {int numAttributes; int binary; TYPE_2__* attDescs; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGresAttDesc ;
typedef TYPE_3__ PGconn ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int*,int,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_7__*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,char*,char const*) ;

__attribute__((used)) static int
FUNC_11(PGconn *VAR_4, int VAR_5)
{
 PGresult *VAR_6;
 int VAR_7;
 const char *VAR_8;
 int VAR_9;






 if (VAR_4->queryclass == VAR_1)
 {
  if (VAR_4->result)
   VAR_6 = VAR_4->result;
  else
   VAR_6 = FUNC_2(VAR_4, VAR_2);
 }
 else
  VAR_6 = FUNC_2(VAR_4, VAR_3);
 if (!VAR_6)
 {
  VAR_8 = ((void*)0);
  goto advance_and_error;
 }



 if (FUNC_5(&(VAR_6->numAttributes), 2, VAR_4))
 {

  VAR_8 = FUNC_3("insufficient data in \"T\" message");
  goto advance_and_error;
 }
 VAR_7 = VAR_6->numAttributes;


 if (VAR_7 > 0)
 {
  VAR_6->attDescs = (PGresAttDesc *)
   FUNC_7(VAR_6, VAR_7 * sizeof(PGresAttDesc), 1);
  if (!VAR_6->attDescs)
  {
   VAR_8 = ((void*)0);
   goto advance_and_error;
  }
  FUNC_0(VAR_6->attDescs, 0, VAR_7 * sizeof(PGresAttDesc));
 }


 VAR_6->binary = (VAR_7 > 0) ? 1 : 0;


 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
  int VAR_10;
  int VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15;

  if (FUNC_6(&VAR_4->workBuffer, VAR_4) ||
   FUNC_5(&VAR_10, 4, VAR_4) ||
   FUNC_5(&VAR_11, 2, VAR_4) ||
   FUNC_5(&VAR_12, 4, VAR_4) ||
   FUNC_5(&VAR_13, 2, VAR_4) ||
   FUNC_5(&VAR_14, 4, VAR_4) ||
   FUNC_5(&VAR_15, 2, VAR_4))
  {

   VAR_8 = FUNC_3("insufficient data in \"T\" message");
   goto advance_and_error;
  }





  VAR_11 = (int) ((int16) VAR_11);
  VAR_13 = (int) ((int16) VAR_13);
  VAR_15 = (int) ((int16) VAR_15);

  VAR_6->attDescs[VAR_9].name = FUNC_8(VAR_6,
              VAR_4->workBuffer.data);
  if (!VAR_6->attDescs[VAR_9].name)
  {
   VAR_8 = ((void*)0);
   goto advance_and_error;
  }
  VAR_6->attDescs[VAR_9].tableid = VAR_10;
  VAR_6->attDescs[VAR_9].columnid = VAR_11;
  VAR_6->attDescs[VAR_9].format = VAR_15;
  VAR_6->attDescs[VAR_9].typid = VAR_12;
  VAR_6->attDescs[VAR_9].typlen = VAR_13;
  VAR_6->attDescs[VAR_9].atttypmod = VAR_14;

  if (VAR_15 != 1)
   VAR_6->binary = 0;
 }


 if (VAR_4->inCursor != VAR_4->inStart + 5 + VAR_5)
 {
  VAR_8 = FUNC_3("extraneous data in \"T\" message");
  goto advance_and_error;
 }


 VAR_4->result = VAR_6;


 VAR_4->inStart = VAR_4->inCursor;





 if (VAR_4->queryclass == VAR_1)
 {
  VAR_4->asyncStatus = VAR_0;
  return 0;
 }







 return 0;

advance_and_error:

 if (VAR_6 && VAR_6 != VAR_4->result)
  FUNC_1(VAR_6);


 VAR_4->inStart += 5 + VAR_5;





 FUNC_4(VAR_4);







 if (!VAR_8)
  VAR_8 = FUNC_3("out of memory for query result");

 FUNC_10(&VAR_4->errorMessage, "%s\n", VAR_8);
 FUNC_9(VAR_4);






 return 0;
}
