
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* result; int asyncStatus; TYPE_2__* next_result; scalar_t__ singleRowMode; TYPE_4__* rowBuf; } ;
struct TYPE_16__ {int len; int value; } ;
struct TYPE_15__ {int len; char* value; } ;
struct TYPE_14__ {int numAttributes; char* null_field; int resultStatus; TYPE_1__* attDescs; } ;
struct TYPE_13__ {scalar_t__ format; } ;
typedef TYPE_2__ PGresult ;
typedef TYPE_3__ PGresAttValue ;
typedef TYPE_4__ PGdataValue ;
typedef TYPE_5__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,char const**) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int) ;

int
FUNC_5(PGconn *VAR_6, const char **VAR_7)
{
 PGresult *VAR_8 = VAR_6->result;
 int VAR_9 = VAR_8->numAttributes;
 const PGdataValue *VAR_10 = VAR_6->rowBuf;
 PGresAttValue *VAR_11;
 int VAR_12;






 if (VAR_6->singleRowMode)
 {

  VAR_8 = FUNC_1(VAR_8,
         VAR_3 | VAR_4 |
         VAR_5);
  if (!VAR_8)
   return 0;
 }
 VAR_11 = (PGresAttValue *)
  FUNC_4(VAR_8, VAR_9 * sizeof(PGresAttValue), 1);
 if (VAR_11 == ((void*)0))
  goto fail;

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
 {
  int VAR_13 = VAR_10[VAR_12].len;

  if (VAR_13 < 0)
  {

   VAR_11[VAR_12].len = VAR_0;
   VAR_11[VAR_12].value = VAR_8->null_field;
  }
  else
  {
   bool VAR_14 = (VAR_8->attDescs[VAR_12].format != 0);
   char *VAR_15;

   VAR_15 = (char *) FUNC_4(VAR_8, VAR_13 + 1, VAR_14);
   if (VAR_15 == ((void*)0))
    goto fail;


   FUNC_2(VAR_15, VAR_10[VAR_12].value, VAR_13);
   VAR_15[VAR_13] = '\0';

   VAR_11[VAR_12].len = VAR_13;
   VAR_11[VAR_12].value = VAR_15;
  }
 }


 if (!FUNC_3(VAR_8, VAR_11, VAR_7))
  goto fail;





 if (VAR_6->singleRowMode)
 {

  VAR_8->resultStatus = VAR_2;

  VAR_6->next_result = VAR_6->result;
  VAR_6->result = VAR_8;

  VAR_6->asyncStatus = VAR_1;
 }

 return 1;

fail:

 if (VAR_8 != VAR_6->result)
  FUNC_0(VAR_8);
 return 0;
}
