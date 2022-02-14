
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prog_test_def {scalar_t__ force_log; } ;
struct TYPE_2__ {scalar_t__ stdout; int log_cnt; char* log_buf; scalar_t__ verbose; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,...) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_3(const struct prog_test_def *VAR_3, bool VAR_4)
{
 if (VAR_2 == VAR_1.stdout)
  return;

 FUNC_0(VAR_2);

 if (VAR_1.verbose || VAR_3->force_log || VAR_4) {
  if (VAR_1.log_cnt) {
   VAR_1.log_buf[VAR_1.log_cnt] = '\0';
   FUNC_1(VAR_1.stdout, "%s", VAR_1.log_buf);
   if (VAR_1.log_buf[VAR_1.log_cnt - 1] != '\n')
    FUNC_1(VAR_1.stdout, "\n");
  }
 }

 FUNC_2(VAR_2, 0, VAR_0);
}
