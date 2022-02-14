
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw {int (* daio_mgr_enb_dai ) (int ,int ) ;int (* daio_mgr_enb_dao ) (int ,int ) ;} ;
struct TYPE_2__ {int ctrl_blk; struct hw* hw; } ;
struct daio_mgr {TYPE_1__ mgr; } ;
struct daio {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,struct hw*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct daio_mgr *VAR_1, struct daio *VAR_2)
{
 struct hw *VAR_3 = VAR_1->mgr.hw;

 if (VAR_0 >= VAR_2->type) {
  VAR_3->daio_mgr_enb_dao(VAR_1->mgr.ctrl_blk,
    FUNC_0(VAR_2->type, VAR_3));
 } else {
  VAR_3->daio_mgr_enb_dai(VAR_1->mgr.ctrl_blk,
    FUNC_0(VAR_2->type, VAR_3));
 }
 return 0;
}
