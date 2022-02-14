
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sta_info {int local; } ;
struct rate_info {int dummy; } ;
struct TYPE_2__ {int last_rate; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (struct sta_info*) ;
 int FUNC_2 (int ,scalar_t__,struct rate_info*) ;

__attribute__((used)) static int FUNC_3(struct sta_info *VAR_2, struct rate_info *VAR_3)
{
 u16 VAR_4 = FUNC_0(FUNC_1(VAR_2)->last_rate);

 if (VAR_4 == VAR_1)
  return -VAR_0;

 FUNC_2(VAR_2->local, VAR_4, VAR_3);
 return 0;
}
