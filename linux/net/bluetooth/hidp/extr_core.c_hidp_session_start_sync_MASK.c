
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hidp_session {int state; int state_queue; int task; TYPE_3__* input; TYPE_1__* hid; } ;
struct TYPE_5__ {unsigned int vendor; unsigned int product; } ;
struct TYPE_6__ {TYPE_2__ id; } ;
struct TYPE_4__ {unsigned int vendor; unsigned int product; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct hidp_session*,char*,unsigned int,unsigned int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct hidp_session *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 if (VAR_2->hid) {
  VAR_3 = VAR_2->hid->vendor;
  VAR_4 = VAR_2->hid->product;
 } else if (VAR_2->input) {
  VAR_3 = VAR_2->input->id.vendor;
  VAR_4 = VAR_2->input->id.product;
 } else {
  VAR_3 = 0x0000;
  VAR_4 = 0x0000;
 }

 VAR_2->task = FUNC_3(VAR_1, VAR_2,
        "khidpd_%04x%04x", VAR_3, VAR_4);
 if (FUNC_0(VAR_2->task))
  return FUNC_1(VAR_2->task);

 while (FUNC_2(&VAR_2->state) <= VAR_0)
  FUNC_4(VAR_2->state_queue,
      FUNC_2(&VAR_2->state) > VAR_0);

 return 0;
}
