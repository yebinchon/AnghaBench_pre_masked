
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ inCursor; scalar_t__ inStart; int errorMessage; TYPE_1__* result; } ;
struct TYPE_14__ {int typid; } ;
struct TYPE_13__ {int numParameters; TYPE_2__* paramDescs; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGresParamDesc ;
typedef TYPE_3__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int*,int,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,char*,char const*) ;

__attribute__((used)) static int
FUNC_9(PGconn *VAR_2, int VAR_3)
{
 PGresult *VAR_4;
 const char *VAR_5 = ((void*)0);
 int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_4)
  goto advance_and_error;



 if (FUNC_5(&(VAR_4->numParameters), 2, VAR_2))
  goto not_enough_data;
 VAR_6 = VAR_4->numParameters;


 if (VAR_6 > 0)
 {
  VAR_4->paramDescs = (PGresParamDesc *)
   FUNC_6(VAR_4, VAR_6 * sizeof(PGresParamDesc), 1);
  if (!VAR_4->paramDescs)
   goto advance_and_error;
  FUNC_0(VAR_4->paramDescs, 0, VAR_6 * sizeof(PGresParamDesc));
 }


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  int VAR_8;

  if (FUNC_5(&VAR_8, 4, VAR_2))
   goto not_enough_data;
  VAR_4->paramDescs[VAR_7].typid = VAR_8;
 }


 if (VAR_2->inCursor != VAR_2->inStart + 5 + VAR_3)
 {
  VAR_5 = FUNC_3("extraneous data in \"t\" message");
  goto advance_and_error;
 }


 VAR_2->result = VAR_4;


 VAR_2->inStart = VAR_2->inCursor;

 return 0;

not_enough_data:
 FUNC_1(VAR_4);
 return VAR_0;

advance_and_error:

 if (VAR_4 && VAR_4 != VAR_2->result)
  FUNC_1(VAR_4);


 VAR_2->inStart += 5 + VAR_3;





 FUNC_4(VAR_2);







 if (!VAR_5)
  VAR_5 = FUNC_3("out of memory");
 FUNC_8(&VAR_2->errorMessage, "%s\n", VAR_5);
 FUNC_7(VAR_2);






 return 0;
}
