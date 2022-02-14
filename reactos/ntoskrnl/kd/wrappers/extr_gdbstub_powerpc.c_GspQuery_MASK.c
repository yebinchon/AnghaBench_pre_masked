
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_25__ {struct TYPE_25__* Flink; } ;
struct TYPE_22__ {TYPE_7__* Flink; } ;
struct TYPE_27__ {char* ImageFileName; scalar_t__ UniqueProcessId; TYPE_7__ ThreadListHead; TYPE_4__ ActiveProcessLinks; } ;
struct TYPE_24__ {size_t State; } ;
struct TYPE_23__ {scalar_t__ UniqueThread; } ;
struct TYPE_21__ {TYPE_7__* Flink; } ;
struct TYPE_26__ {TYPE_6__ Tcb; TYPE_5__ Cid; TYPE_9__* ThreadsProcess; TYPE_3__ ThreadListEntry; } ;
struct TYPE_20__ {scalar_t__ UniqueThread; } ;
struct TYPE_19__ {scalar_t__ UniqueThread; } ;
struct TYPE_18__ {TYPE_1__ Cid; } ;
struct TYPE_17__ {TYPE_2__ Cid; } ;
typedef TYPE_7__* PLIST_ENTRY ;
typedef TYPE_8__* PETHREAD ;
typedef TYPE_9__* PEPROCESS ;
typedef char* PCHAR ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_7__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_15__* VAR_4 ;
 TYPE_8__* VAR_5 ;
 scalar_t__ FUNC_1 (char*,TYPE_8__**) ;
 int FUNC_2 (char**,int ) ;
 int FUNC_3 (char*,char*,int,int ) ;
 char* VAR_6 ;
 int * VAR_7 ;
 int FUNC_4 (TYPE_8__*) ;
 TYPE_7__ VAR_8 ;
 TYPE_10__* FUNC_5 () ;
 int VAR_9 ;
 int FUNC_6 (char*,char*,char*,int,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;

VOID
FUNC_10(PCHAR VAR_10)
{
  ULONG VAR_11;

  if (FUNC_9(VAR_10, "C", 1) == 0)
    {
      PCHAR VAR_12 = &VAR_6[2];


      VAR_6[0] = 'Q';
      VAR_6[1] = 'C';
      if (((void*)0) != VAR_4)
        {
          VAR_11 = (ULONG) VAR_4->Cid.UniqueThread;
        }
      else
        {
          VAR_11 = (ULONG) FUNC_5()->Cid.UniqueThread;
        }
      FUNC_2(&VAR_12, VAR_11);
    }
  else if (FUNC_9(VAR_10, "fThreadInfo", 11) == 0)
    {
      PEPROCESS VAR_13;
      PLIST_ENTRY VAR_14, VAR_15;
      PCHAR VAR_16 = &VAR_6[1];


      VAR_5 = ((void*)0);
      VAR_15 = VAR_8.Flink;
      while(VAR_15 != &VAR_8)
        {
          VAR_13 = FUNC_0(VAR_15, VAR_1, VAR_0);
          VAR_14 = VAR_13->ThreadListHead.Flink;
          if (VAR_14 != &VAR_13->ThreadListHead)
            {
              VAR_5 = FUNC_0(VAR_13->ThreadListHead.Flink,
                                                VAR_2, VAR_9);
              break;
            }
          VAR_15 = VAR_15->Flink;
        }
      if(VAR_5 != ((void*)0))
        {
          VAR_6[0] = 'm';
          VAR_11 = (ULONG) VAR_5->Cid.UniqueThread;
          FUNC_2(&VAR_16, VAR_11);
        }
      else
        {



        }
    }
  else if (FUNC_9(VAR_10, "sThreadInfo", 11) == 0)
    {
      PEPROCESS VAR_17;
      PLIST_ENTRY VAR_18, VAR_19;
      PCHAR VAR_20 = &VAR_6[1];


      if (VAR_5 != ((void*)0))
        {

          VAR_17 = VAR_5->ThreadsProcess;
          if(VAR_5->ThreadListEntry.Flink != &VAR_17->ThreadListHead)
            {
              VAR_5 = FUNC_0(VAR_5->ThreadListEntry.Flink,
                                                 VAR_2, VAR_9);
            }
          else
            {
              PETHREAD VAR_21 = ((void*)0);
              VAR_19 = VAR_17->ActiveProcessLinks.Flink;
              while(VAR_19 != &VAR_8)
                {
                  VAR_17 = FUNC_0(VAR_19, VAR_1, VAR_0);
                  VAR_18 = VAR_17->ThreadListHead.Flink;
                  if (VAR_18 != &VAR_17->ThreadListHead)
                    {
                      VAR_21 = FUNC_0(VAR_17->ThreadListHead.Flink,
                                                 VAR_2, VAR_9);
                      break;
                    }
                  VAR_19 = VAR_19->Flink;
                }
              VAR_5 = VAR_21;
            }

          if (VAR_5 != ((void*)0))
            {

              VAR_6[0] = 'm';
              VAR_11 = (ULONG) VAR_5->Cid.UniqueThread;
              FUNC_2(&VAR_20, VAR_11);
            }
          else
            {
              VAR_6[0] = 'l';
            }
        }
      else
        {
          VAR_6[0] = 'l';
        }
    }
  else if (FUNC_9(VAR_10, "ThreadExtraInfo", 15) == 0)
    {
      PETHREAD VAR_22;


      if (FUNC_1(VAR_10 + 16, &VAR_22))
        {
          char VAR_23[64];
          PEPROCESS VAR_24;

          VAR_24 = (PEPROCESS) VAR_22->ThreadsProcess;

          VAR_23[0] = '\0';
          if (((void*)0) != VAR_24 )
            {
              FUNC_6(VAR_23, "%s [%d:0x%x], ", VAR_24->ImageFileName,
                      (int) VAR_24->UniqueProcessId,
                      (int) VAR_22->Cid.UniqueThread);
            }
          FUNC_7(VAR_23 + FUNC_8(VAR_23),
                 VAR_7[VAR_22->Tcb.State]);

          FUNC_4(VAR_22);

          FUNC_3(VAR_23, &VAR_6[0], FUNC_8(VAR_23), VAR_3);
        }
    }
}
