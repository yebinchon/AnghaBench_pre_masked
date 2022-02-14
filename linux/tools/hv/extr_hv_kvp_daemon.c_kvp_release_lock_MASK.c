
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flock {int l_pid; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_2__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct flock*) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int ,int ) ;

__attribute__((used)) static void FUNC_5(int VAR_7)
{
 struct flock VAR_8 = {VAR_2, VAR_4, 0, 0, 0};
 VAR_8.l_pid = FUNC_2();

 if (FUNC_1(VAR_6[VAR_7].fd, VAR_1, &VAR_8) == -1) {
  FUNC_4(VAR_3, "Failed to release the lock pool: %d; error: %d %s", VAR_7,
    VAR_5, FUNC_3(VAR_5));
  FUNC_0(VAR_0);
 }
}
