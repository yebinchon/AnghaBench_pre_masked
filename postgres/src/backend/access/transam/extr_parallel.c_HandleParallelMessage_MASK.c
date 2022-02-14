
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_18__ {int context; int elevel; } ;
struct TYPE_17__ {int* known_attached_workers; TYPE_1__* worker; int * error_context_stack; int nknown_attached_workers; } ;
struct TYPE_16__ {int len; } ;
struct TYPE_15__ {int * error_mqh; int pid; } ;
typedef TYPE_2__* StringInfo ;
typedef TYPE_3__ ParallelContext ;
typedef TYPE_4__ ErrorData ;
typedef int ErrorContextCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,char const*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,char,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*) ;
 char FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 char* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14(ParallelContext *VAR_4, int VAR_5, StringInfo VAR_6)
{
 char VAR_7;

 if (VAR_4->known_attached_workers != ((void*)0) &&
  !VAR_4->known_attached_workers[VAR_5])
 {
  VAR_4->known_attached_workers[VAR_5] = 1;
  VAR_4->nknown_attached_workers++;
 }

 VAR_7 = FUNC_6(VAR_6);

 switch (VAR_7)
 {
  case 'K':
   {
    int32 VAR_8 = FUNC_8(VAR_6, 4);

    (void) FUNC_8(VAR_6, 4);
    (void) FUNC_7(VAR_6);
    VAR_4->worker[VAR_5].pid = VAR_8;
    break;
   }

  case 'E':
  case 'N':
   {
    ErrorData VAR_9;
    ErrorContextCallback *VAR_10;


    FUNC_10(VAR_6, &VAR_9);


    VAR_9.elevel = FUNC_0(VAR_9.elevel, VAR_0);
    if (VAR_3 != VAR_1)
    {
     if (VAR_9.context)
      VAR_9.context = FUNC_11("%s\n%s", VAR_9.context,
             FUNC_3("parallel worker"));
     else
      VAR_9.context = FUNC_12(FUNC_3("parallel worker"));
    }






    VAR_10 = VAR_2;
    VAR_2 = VAR_4->error_context_stack;


    FUNC_2(&VAR_9);


    VAR_2 = VAR_10;

    break;
   }

  case 'A':
   {

    int32 VAR_11;
    const char *VAR_12;
    const char *VAR_13;

    VAR_11 = FUNC_8(VAR_6, 4);
    VAR_12 = FUNC_9(VAR_6);
    VAR_13 = FUNC_9(VAR_6);
    FUNC_5(VAR_6);

    FUNC_1(VAR_12, VAR_13, VAR_11);

    break;
   }

  case 'X':
   {
    FUNC_13(VAR_4->worker[VAR_5].error_mqh);
    VAR_4->worker[VAR_5].error_mqh = ((void*)0);
    break;
   }

  default:
   {
    FUNC_4(VAR_0, "unrecognized message type received from parallel worker: %c (message length %d bytes)",
      VAR_7, VAR_6->len);
   }
 }
}
