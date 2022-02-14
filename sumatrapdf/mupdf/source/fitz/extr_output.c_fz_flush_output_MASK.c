
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wp; scalar_t__ bp; int state; int (* write ) (int *,int ,scalar_t__,scalar_t__) ;} ;
typedef TYPE_1__ fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,scalar_t__,scalar_t__) ;

void
FUNC_1(fz_context *VAR_0, fz_output *VAR_1)
{
 if (VAR_1->wp > VAR_1->bp)
 {
  VAR_1->write(VAR_0, VAR_1->state, VAR_1->bp, VAR_1->wp - VAR_1->bp);
  VAR_1->wp = VAR_1->bp;
 }
}
