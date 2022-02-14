
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_17__ {int data; } ;
struct TYPE_16__ {TYPE_1__* result; int asyncStatus; int errorMessage; int inEnd; int inStart; int inCursor; TYPE_6__ workBuffer; } ;
struct TYPE_15__ {int typid; int typlen; int atttypmod; scalar_t__ format; scalar_t__ columnid; scalar_t__ tableid; int name; } ;
struct TYPE_14__ {int numAttributes; TYPE_2__* attDescs; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGresAttDesc ;
typedef TYPE_3__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (TYPE_3__*,int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int*,int,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_6__*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *,char*,char const*) ;

__attribute__((used)) static int
FUNC_10(PGconn *VAR_4)
{
 PGresult *VAR_5;
 int VAR_6;
 const char *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (!VAR_5)
 {
  VAR_7 = ((void*)0);
  goto advance_and_error;
 }



 if (FUNC_5(&(VAR_5->numAttributes), 2, VAR_4))
  goto EOFexit;
 VAR_6 = VAR_5->numAttributes;


 if (VAR_6 > 0)
 {
  VAR_5->attDescs = (PGresAttDesc *)
   FUNC_7(VAR_5, VAR_6 * sizeof(PGresAttDesc), 1);
  if (!VAR_5->attDescs)
  {
   VAR_7 = ((void*)0);
   goto advance_and_error;
  }
  FUNC_0(VAR_5->attDescs, 0, VAR_6 * sizeof(PGresAttDesc));
 }


 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
 {
  int VAR_9;
  int VAR_10;
  int VAR_11;

  if (FUNC_6(&VAR_4->workBuffer, VAR_4) ||
   FUNC_5(&VAR_9, 4, VAR_4) ||
   FUNC_5(&VAR_10, 2, VAR_4) ||
   FUNC_5(&VAR_11, 4, VAR_4))
   goto EOFexit;





  VAR_10 = (int) ((int16) VAR_10);

  VAR_5->attDescs[VAR_8].name = FUNC_8(VAR_5,
              VAR_4->workBuffer.data);
  if (!VAR_5->attDescs[VAR_8].name)
  {
   VAR_7 = ((void*)0);
   goto advance_and_error;
  }
  VAR_5->attDescs[VAR_8].tableid = 0;
  VAR_5->attDescs[VAR_8].columnid = 0;
  VAR_5->attDescs[VAR_8].format = 0;
  VAR_5->attDescs[VAR_8].typid = VAR_9;
  VAR_5->attDescs[VAR_8].typlen = VAR_10;
  VAR_5->attDescs[VAR_8].atttypmod = VAR_11;
 }


 VAR_4->result = VAR_5;


 VAR_4->inStart = VAR_4->inCursor;







 return 0;

advance_and_error:






 VAR_4->inStart = VAR_4->inEnd;





 FUNC_4(VAR_4);







 if (!VAR_7)
  VAR_7 = FUNC_3("out of memory for query result");

 FUNC_9(&VAR_4->errorMessage, "%s\n", VAR_7);





 VAR_4->result = FUNC_2(VAR_4, VAR_2);
 VAR_4->asyncStatus = VAR_1;

EOFexit:
 if (VAR_5 && VAR_5 != VAR_4->result)
  FUNC_1(VAR_5);
 return VAR_0;
}
