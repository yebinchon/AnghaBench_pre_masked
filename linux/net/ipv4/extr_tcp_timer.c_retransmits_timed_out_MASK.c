
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_state; } ;
typedef scalar_t__ s32 ;
struct TYPE_5__ {int icsk_retransmits; } ;
struct TYPE_4__ {unsigned int retrans_stamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_3__* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (struct sock*,unsigned int,unsigned int) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 unsigned int FUNC_4 (TYPE_1__*) ;
 unsigned int FUNC_5 (struct sock*) ;

__attribute__((used)) static bool FUNC_6(struct sock *VAR_3,
      unsigned int VAR_4,
      unsigned int VAR_5)
{
 unsigned int VAR_6;

 if (!FUNC_0(VAR_3)->icsk_retransmits)
  return 0;

 VAR_6 = FUNC_3(VAR_3)->retrans_stamp;
 if (FUNC_1(VAR_5 == 0)) {
  unsigned int VAR_7 = VAR_2;

  if ((1 << VAR_3->sk_state) & (VAR_1 | VAR_0))
   VAR_7 = FUNC_5(VAR_3);
  VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_7);
 }

 return (s32)(FUNC_4(FUNC_3(VAR_3)) - VAR_6 - VAR_5) >= 0;
}
