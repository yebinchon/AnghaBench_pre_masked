
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rseq {int dummy; } ;
typedef int sigset_t ;
struct TYPE_3__ {int cpu_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 () ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int,int ,int ) ;

int FUNC_5(void)
{
 int VAR_8, VAR_9 = 0;
 sigset_t VAR_10;

 if (!VAR_7)
  return 0;
 FUNC_2(&VAR_10);
 if (VAR_5 == VAR_3) {
  VAR_9 = -1;
  goto end;
 }
 if (VAR_5++)
  goto end;
 VAR_8 = FUNC_4(&VAR_4, sizeof(struct rseq), 0, VAR_2);
 if (!VAR_8) {
  FUNC_0(FUNC_1() >= 0);
  goto end;
 }
 if (VAR_6 != VAR_0)
  VAR_4.cpu_id = VAR_1;
 VAR_9 = -1;
 VAR_5--;
end:
 FUNC_3(VAR_10);
 return VAR_9;
}
