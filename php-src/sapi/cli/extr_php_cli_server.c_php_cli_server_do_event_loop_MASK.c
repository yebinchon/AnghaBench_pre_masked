
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int member_0; int member_1; } ;
struct TYPE_4__ {int poller; scalar_t__ is_running; } ;
typedef TYPE_1__ php_cli_server ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,char*,char*) ;
 int FUNC_3 (int *,struct timeval*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 char* FUNC_5 (int,int *,int ) ;

__attribute__((used)) static int FUNC_6(php_cli_server *VAR_7)
{
 int VAR_8 = VAR_3;
 while (VAR_7->is_running) {
  struct timeval VAR_9 = { 1, 0 };
  int VAR_10 = FUNC_3(&VAR_7->poller, &VAR_9);
  if (VAR_10 > 0) {
   FUNC_1(VAR_7,
     VAR_5,
     VAR_6);
  } else if (VAR_10 == 0) {

  } else {
   int VAR_11 = FUNC_4();
   if (VAR_11 != VAR_2) {
    if (VAR_4 >= VAR_1) {
     char *VAR_12 = FUNC_5(VAR_11, ((void*)0), 0);
     FUNC_2(VAR_1, "%s", VAR_12);
     FUNC_0(VAR_12);
    }
    VAR_8 = VAR_0;
    goto out;
   }
  }
 }
out:
 return VAR_8;
}
