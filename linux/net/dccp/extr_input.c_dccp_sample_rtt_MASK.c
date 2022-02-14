
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long u32 ;
struct sock {int dummy; } ;
struct TYPE_3__ {int dccpor_elapsed_time; } ;
struct TYPE_4__ {TYPE_1__ dccps_options_received; } ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (char*,long) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int) ;

u32 FUNC_3(struct sock *VAR_2, long VAR_3)
{

 VAR_3 -= FUNC_1(VAR_2)->dccps_options_received.dccpor_elapsed_time * 10;

 if (FUNC_2(VAR_3 <= 0)) {
  FUNC_0("unusable RTT sample %ld, using min\n", VAR_3);
  return VAR_1;
 }
 if (FUNC_2(VAR_3 > VAR_0)) {
  FUNC_0("RTT sample %ld too large, using max\n", VAR_3);
  return VAR_0;
 }

 return VAR_3;
}
