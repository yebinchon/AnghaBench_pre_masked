
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_20__ {int msgh_size; scalar_t__ msgh_remote_port; int msgh_local_port; } ;
struct TYPE_17__ {TYPE_7__ Head; } ;
typedef TYPE_1__ mig_reply_error_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_18__ {TYPE_7__ hdr; } ;
typedef TYPE_2__ exc_msg ;
struct TYPE_19__ {int stopaddr; } ;
struct TYPE_16__ {int exception_port; } ;
typedef TYPE_3__ RDebug ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_1__*,TYPE_7__*,int) ;
 int FUNC_1 (char*) ;
 TYPE_12__ VAR_13 ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int*) ;
 scalar_t__ FUNC_4 (TYPE_7__*,int,int,int,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_9 (RDebug *VAR_14, int VAR_15) {

 kern_return_t VAR_16;
 int VAR_17, VAR_18 = VAR_12;
 mig_reply_error_t VAR_19;
 bool VAR_20;
 exc_msg VAR_21;
 if (!VAR_14) {
  return VAR_18;
 }
 VAR_21.hdr.msgh_local_port = VAR_13.exception_port;
 VAR_21.hdr.msgh_size = sizeof (exc_msg);
 for (;;) {
  VAR_16 = FUNC_4 (
   &VAR_21.hdr,
   VAR_7 | VAR_5, 0,
   sizeof (exc_msg), VAR_13.exception_port,
   VAR_3, VAR_4);
  if (VAR_16 == VAR_6) {
   VAR_18 = VAR_11;
   break;
  } else if (VAR_16 != VAR_2) {
   FUNC_1 ("message didn't succeeded\n");
   break;
  }
  VAR_20 = FUNC_8 (VAR_14, &VAR_21);
  if (!VAR_20) {
   VAR_20 = FUNC_2 (VAR_14, &VAR_21);
   if (VAR_20) {
    VAR_18 = VAR_10;
    break;
   }
  }
  if (!VAR_20) {
   FUNC_0 (&VAR_19, &VAR_21.hdr, VAR_0);
   VAR_16 = FUNC_4 (&VAR_19.Head, VAR_9 | VAR_8,
     VAR_19.Head.msgh_size, 0,
     VAR_4, VAR_3,
     VAR_4);
   if (VAR_19.Head.msgh_remote_port != 0 && VAR_16 != VAR_2) {
    VAR_16 = FUNC_5(FUNC_6 (), VAR_19.Head.msgh_remote_port);
    if (VAR_16 != VAR_1) {
     FUNC_1 ("failed to deallocate reply port\n");
    }
   }
   continue;
  }

  VAR_18 = FUNC_3 (VAR_14, &VAR_21, &VAR_17);
  FUNC_0 (&VAR_19, &VAR_21.hdr, VAR_17);
  VAR_16 = FUNC_4 (&VAR_19.Head, VAR_9 | VAR_8,
    VAR_19.Head.msgh_size, 0,
    VAR_4, 0,
    VAR_4);
  if (VAR_19.Head.msgh_remote_port != 0 && VAR_16 != VAR_2) {
   VAR_16 = FUNC_5(FUNC_6 (), VAR_19.Head.msgh_remote_port);
   if (VAR_16 != VAR_1)
    FUNC_1 ("failed to deallocate reply port\n");
  }
  break;
 }
 VAR_14->stopaddr = FUNC_7 (VAR_14, "PC");
 return VAR_18;
}
