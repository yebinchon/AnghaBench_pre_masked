
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct fw_unit {int dummy; } ;
struct delayed_work {int dummy; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {scalar_t__ reset_jiffies; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct fw_unit*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,struct delayed_work*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

void FUNC_5(struct fw_unit *VAR_2,
      struct delayed_work *VAR_3)
{
 u64 VAR_4, VAR_5;

 VAR_4 = FUNC_1();
 VAR_5 = FUNC_0(VAR_2)->card->reset_jiffies
     + FUNC_3(VAR_0);

 if (FUNC_4(VAR_5, VAR_4))
  VAR_5 -= VAR_4;
 else
  VAR_5 = 0;

 FUNC_2(VAR_1, VAR_3, VAR_5);
}
