
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_11__ {int dead_end; int bgworker_notify; int elem; int bkend_type; scalar_t__ pid; scalar_t__ child_slot; int cancel_key; } ;
struct TYPE_10__ {scalar_t__ canAcceptConnections; scalar_t__ sock; } ;
typedef TYPE_1__ Port ;
typedef TYPE_2__ Backend ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_19(Port *VAR_13)
{
 Backend *VAR_14;
 pid_t VAR_15;





 VAR_14 = (Backend *) FUNC_17(sizeof(Backend));
 if (!VAR_14)
 {
  FUNC_11(VAR_7,
    (FUNC_12(VAR_6),
     FUNC_13("out of memory")));
  return VAR_10;
 }






 if (!FUNC_5(&VAR_8))
 {
  FUNC_16(VAR_14);
  FUNC_11(VAR_7,
    (FUNC_12(VAR_5),
     FUNC_13("could not generate random cancel key")));
  return VAR_10;
 }

 VAR_14->cancel_key = VAR_8;


 VAR_13->canAcceptConnections = FUNC_9(VAR_0);
 VAR_14->dead_end = (VAR_13->canAcceptConnections != VAR_2 &&
     VAR_13->canAcceptConnections != VAR_3);




 if (!VAR_14->dead_end)
  VAR_14->child_slot = VAR_9 = FUNC_0();
 else
  VAR_14->child_slot = 0;


 VAR_14->bgworker_notify = 0;




 VAR_15 = FUNC_15();
 if (VAR_15 == 0)
 {
  FUNC_16(VAR_14);


  FUNC_4();


  FUNC_3(0);


  FUNC_1(VAR_13);


  FUNC_2(VAR_13);
 }


 if (VAR_15 < 0)
 {

  int VAR_16 = VAR_12;

  if (!VAR_14->dead_end)
   (void) FUNC_6(VAR_14->child_slot);
  FUNC_16(VAR_14);
  VAR_12 = VAR_16;
  FUNC_11(VAR_7,
    (FUNC_13("could not fork new process for connection: %m")));
  FUNC_18(VAR_13, VAR_16);
  return VAR_10;
 }


 FUNC_11(VAR_4,
   (FUNC_14("forked new backend, pid=%d socket=%d",
        (int) VAR_15, (int) VAR_13->sock)));





 VAR_14->pid = VAR_15;
 VAR_14->bkend_type = VAR_0;
 FUNC_10(&VAR_1, &VAR_14->elem);






 return VAR_11;
}
