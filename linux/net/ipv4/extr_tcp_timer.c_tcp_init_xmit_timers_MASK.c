
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_4__ {int function; } ;
struct TYPE_3__ {TYPE_2__ compressed_ack_timer; TYPE_2__ pacing_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (struct sock*,int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int VAR_7 ;

void FUNC_3(struct sock *VAR_8)
{
 FUNC_1(VAR_8, &VAR_7, &VAR_4,
      &VAR_5);
 FUNC_0(&FUNC_2(VAR_8)->pacing_timer, VAR_0,
       VAR_1);
 FUNC_2(VAR_8)->pacing_timer.function = VAR_6;

 FUNC_0(&FUNC_2(VAR_8)->compressed_ack_timer, VAR_0,
       VAR_2);
 FUNC_2(VAR_8)->compressed_ack_timer.function = VAR_3;
}
