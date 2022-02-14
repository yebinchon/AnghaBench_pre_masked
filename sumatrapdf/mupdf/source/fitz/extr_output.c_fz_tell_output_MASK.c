
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {int state; scalar_t__ (* tell ) (int *,int ) ;scalar_t__ bp; scalar_t__ wp; } ;
typedef TYPE_1__ fz_output ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

int64_t
FUNC_3(fz_context *VAR_1, fz_output *VAR_2)
{
 if (VAR_2->tell == ((void*)0))
  FUNC_0(VAR_1, VAR_0, "Cannot tell in untellable output stream\n");
 if (VAR_2->bp)
  return VAR_2->tell(VAR_1, VAR_2->state) + (VAR_2->wp - VAR_2->bp);
 return VAR_2->tell(VAR_1, VAR_2->state);
}
