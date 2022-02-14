
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int send_uevent; int into_buf; int sync_direct; int * reqs; scalar_t__ test_result; int req_firmware; int num_requests; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4->name, VAR_1,
    FUNC_2(VAR_1), VAR_0);
 if (VAR_5 < 0)
  goto out;

 VAR_4->num_requests = VAR_2;
 VAR_4->send_uevent = 1;
 VAR_4->into_buf = 0;
 VAR_4->sync_direct = 0;
 VAR_4->req_firmware = VAR_3;
 VAR_4->test_result = 0;
 VAR_4->reqs = ((void*)0);

 return 0;

out:
 FUNC_1();
 return VAR_5;
}
