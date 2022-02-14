
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* fds_acl_flags; int * fds_names; scalar_t__ opened; } ;
typedef int BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int,int ,int ) ;

void FUNC_6() {
 BUFFER *VAR_9 = FUNC_0(256 * sizeof(char));
 int VAR_10;

 for(VAR_10 = 0 ; VAR_10 < (int)VAR_8.opened ; VAR_10++) {
  FUNC_3(VAR_9, (VAR_8.fds_acl_flags[VAR_10] & VAR_5)?"NONE ":"");
  FUNC_3(VAR_9, (VAR_8.fds_acl_flags[VAR_10] & VAR_2)?"dashboard ":"");
  FUNC_3(VAR_9, (VAR_8.fds_acl_flags[VAR_10] & VAR_6)?"registry ":"");
  FUNC_3(VAR_9, (VAR_8.fds_acl_flags[VAR_10] & VAR_1)?"badges ":"");
  FUNC_3(VAR_9, (VAR_8.fds_acl_flags[VAR_10] & VAR_3)?"management ":"");
  FUNC_3(VAR_9, (VAR_8.fds_acl_flags[VAR_10] & VAR_7)?"streaming ":"");
  FUNC_3(VAR_9, (VAR_8.fds_acl_flags[VAR_10] & VAR_4)?"netdata.conf ":"");
  FUNC_5(VAR_0, "Socket fd %d name '%s' acl_flags: %s",
     VAR_10,
     VAR_8.fds_names[VAR_10],
     FUNC_4(VAR_9));
  FUNC_2(VAR_9);
 }
 FUNC_1(VAR_9);
}
