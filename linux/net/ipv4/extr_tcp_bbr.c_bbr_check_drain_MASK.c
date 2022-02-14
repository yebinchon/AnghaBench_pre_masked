
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rate_sample {int dummy; } ;
struct bbr {scalar_t__ mode; } ;
struct TYPE_3__ {scalar_t__ snd_ssthresh; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*,int ,int ) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 struct bbr* FUNC_5 (struct sock*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_3, const struct rate_sample *VAR_4)
{
 struct bbr *VAR_5 = FUNC_5(VAR_3);

 if (VAR_5->mode == VAR_1 && FUNC_0(VAR_3)) {
  VAR_5->mode = VAR_0;
  FUNC_7(VAR_3)->snd_ssthresh =
    FUNC_1(VAR_3, FUNC_2(VAR_3), VAR_2);
 }
 if (VAR_5->mode == VAR_0 &&
     FUNC_3(VAR_3, FUNC_6(FUNC_7(VAR_3))) <=
     FUNC_1(VAR_3, FUNC_2(VAR_3), VAR_2))
  FUNC_4(VAR_3);
}
