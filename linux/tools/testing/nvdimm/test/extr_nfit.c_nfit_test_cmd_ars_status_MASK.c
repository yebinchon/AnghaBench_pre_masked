
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nd_cmd_ars_status {int out_length; int status; } ;
struct ars_state {int lock; TYPE_1__* ars_status; int deadline; } ;
struct TYPE_2__ {unsigned int out_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nd_cmd_ars_status*,TYPE_1__*,unsigned int) ;
 int FUNC_1 (struct nd_cmd_ars_status*,int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ars_state *VAR_4,
  struct nd_cmd_ars_status *VAR_5, unsigned int VAR_6,
  int *VAR_7)
{
 if (VAR_6 < VAR_4->ars_status->out_length)
  return -VAR_1;

 FUNC_2(&VAR_4->lock);
 if (FUNC_4(VAR_3, VAR_4->deadline)) {
  FUNC_1(VAR_5, 0, VAR_6);
  VAR_5->status = VAR_2;
  VAR_5->out_length = sizeof(*VAR_5);
  *VAR_7 = -VAR_0;
 } else {
  FUNC_0(VAR_5, VAR_4->ars_status,
    VAR_4->ars_status->out_length);
  *VAR_7 = 0;
 }
 FUNC_3(&VAR_4->lock);
 return 0;
}
