
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pid; } ;
struct TYPE_4__ {int stop; TYPE_1__ info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int ,int ) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_4;


 VAR_4 = FUNC_1(&VAR_3,
     &VAR_2 - &VAR_3,
     &VAR_1.info);
 if (VAR_4)
  return VAR_4;
 VAR_1.stop = 0;
 FUNC_2("Loaded bpfilter_umh pid %d\n", VAR_1.info.pid);


 if (FUNC_0(((void*)0), 0, ((void*)0), 0, 0) != 0) {
  FUNC_3();
  return -VAR_0;
 }

 return 0;
}
