
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct bictcp {scalar_t__ epoch_start; } ;
typedef scalar_t__ s32 ;
typedef enum tcp_ca_event { ____Placeholder_tcp_ca_event } tcp_ca_event ;
struct TYPE_2__ {scalar_t__ lsndtime; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 struct bictcp* FUNC_1 (struct sock*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_2, enum tcp_ca_event VAR_3)
{
 if (VAR_3 == VAR_0) {
  struct bictcp *VAR_4 = FUNC_1(VAR_2);
  u32 VAR_5 = VAR_1;
  s32 VAR_6;

  VAR_6 = VAR_5 - FUNC_2(VAR_2)->lsndtime;




  if (VAR_4->epoch_start && VAR_6 > 0) {
   VAR_4->epoch_start += VAR_6;
   if (FUNC_0(VAR_4->epoch_start, VAR_5))
    VAR_4->epoch_start = VAR_5;
  }
  return;
 }
}
