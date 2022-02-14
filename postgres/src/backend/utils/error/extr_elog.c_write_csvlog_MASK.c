
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {int filename; int lineno; int funcname; int cursorpos; int hide_stmt; int elevel; int * context; int hide_ctx; int internalpos; int * internalquery; int * hint; int * detail; int * detail_log; int * message; int sqlerrcode; } ;
struct TYPE_14__ {int * data; int len; } ;
struct TYPE_13__ {long backendId; int lxid; } ;
struct TYPE_12__ {char* remote_host; char* remote_port; int * database_name; int * user_name; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ ErrorData ;


 int FUNC_0 () ;
 long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_11__* VAR_3 ;
 int VAR_4 ;
 TYPE_10__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_1 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_1__*,char const*,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,char*,long,...) ;
 int FUNC_5 (TYPE_1__*,char) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int FUNC_7 (int ) ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* FUNC_8 (int*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int VAR_13 ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_17(ErrorData *VAR_14)
{
 StringInfoData VAR_15;
 bool VAR_16 = 0;


 static long VAR_17 = 0;


 static int VAR_18 = 0;






 if (VAR_18 != VAR_4)
 {
  VAR_17 = 0;
  VAR_18 = VAR_4;
  VAR_12[0] = '\0';
 }
 VAR_17++;

 FUNC_9(&VAR_15);
 if (VAR_11[0] == '\0')
  FUNC_12();

 FUNC_6(&VAR_15, VAR_11);
 FUNC_5(&VAR_15, ',');


 if (VAR_5)
  FUNC_3(&VAR_15, VAR_5->user_name);
 FUNC_5(&VAR_15, ',');


 if (VAR_5)
  FUNC_3(&VAR_15, VAR_5->database_name);
 FUNC_5(&VAR_15, ',');


 if (VAR_4 != 0)
  FUNC_4(&VAR_15, "%d", VAR_4);
 FUNC_5(&VAR_15, ',');


 if (VAR_5 && VAR_5->remote_host)
 {
  FUNC_5(&VAR_15, '"');
  FUNC_6(&VAR_15, VAR_5->remote_host);
  if (VAR_5->remote_port && VAR_5->remote_port[0] != '\0')
  {
   FUNC_5(&VAR_15, ':');
   FUNC_6(&VAR_15, VAR_5->remote_port);
  }
  FUNC_5(&VAR_15, '"');
 }
 FUNC_5(&VAR_15, ',');


 FUNC_4(&VAR_15, "%lx.%x", (long) VAR_6, VAR_4);
 FUNC_5(&VAR_15, ',');


 FUNC_4(&VAR_15, "%ld", VAR_17);
 FUNC_5(&VAR_15, ',');


 if (VAR_5)
 {
  StringInfoData VAR_19;
  const char *VAR_20;
  int VAR_21;

  FUNC_9(&VAR_19);

  VAR_20 = FUNC_8(&VAR_21);
  FUNC_2(&VAR_19, VAR_20, VAR_21);
  FUNC_3(&VAR_15, VAR_19.data);

  FUNC_11(VAR_19.data);
 }
 FUNC_5(&VAR_15, ',');


 if (VAR_12[0] == '\0')
  FUNC_13();
 FUNC_6(&VAR_15, VAR_12);
 FUNC_5(&VAR_15, ',');



 if (VAR_3 != ((void*)0) && VAR_3->backendId != VAR_0)
  FUNC_4(&VAR_15, "%d/%u", VAR_3->backendId, VAR_3->lxid);
 FUNC_5(&VAR_15, ',');


 FUNC_4(&VAR_15, "%u", FUNC_0());
 FUNC_5(&VAR_15, ',');


 FUNC_6(&VAR_15, FUNC_1(FUNC_7(VAR_14->elevel)));
 FUNC_5(&VAR_15, ',');


 FUNC_6(&VAR_15, FUNC_14(VAR_14->sqlerrcode));
 FUNC_5(&VAR_15, ',');


 FUNC_3(&VAR_15, VAR_14->message);
 FUNC_5(&VAR_15, ',');


 if (VAR_14->detail_log)
  FUNC_3(&VAR_15, VAR_14->detail_log);
 else
  FUNC_3(&VAR_15, VAR_14->detail);
 FUNC_5(&VAR_15, ',');


 FUNC_3(&VAR_15, VAR_14->hint);
 FUNC_5(&VAR_15, ',');


 FUNC_3(&VAR_15, VAR_14->internalquery);
 FUNC_5(&VAR_15, ',');


 if (VAR_14->internalpos > 0 && VAR_14->internalquery != ((void*)0))
  FUNC_4(&VAR_15, "%d", VAR_14->internalpos);
 FUNC_5(&VAR_15, ',');


 if (!VAR_14->hide_ctx)
  FUNC_3(&VAR_15, VAR_14->context);
 FUNC_5(&VAR_15, ',');


 if (FUNC_10(VAR_14->elevel, VAR_13) &&
  VAR_10 != ((void*)0) &&
  !VAR_14->hide_stmt)
  VAR_16 = 1;
 if (VAR_16)
  FUNC_3(&VAR_15, VAR_10);
 FUNC_5(&VAR_15, ',');
 if (VAR_16 && VAR_14->cursorpos > 0)
  FUNC_4(&VAR_15, "%d", VAR_14->cursorpos);
 FUNC_5(&VAR_15, ',');


 if (VAR_2 >= VAR_7)
 {
  StringInfoData VAR_22;

  FUNC_9(&VAR_22);

  if (VAR_14->funcname && VAR_14->filename)
   FUNC_4(&VAR_22, "%s, %s:%d",
        VAR_14->funcname, VAR_14->filename,
        VAR_14->lineno);
  else if (VAR_14->filename)
   FUNC_4(&VAR_22, "%s:%d",
        VAR_14->filename, VAR_14->lineno);
  FUNC_3(&VAR_15, VAR_22.data);
  FUNC_11(VAR_22.data);
 }
 FUNC_5(&VAR_15, ',');


 if (VAR_9)
  FUNC_3(&VAR_15, VAR_9);

 FUNC_5(&VAR_15, '\n');


 if (VAR_8)
  FUNC_16(VAR_15.data, VAR_15.len, VAR_1);
 else
  FUNC_15(VAR_15.data, VAR_15.len, VAR_1);

 FUNC_11(VAR_15.data);
}
