
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int file; scalar_t__ length; } ;
typedef TYPE_1__ prog_state ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {int rp; int wp; scalar_t__ pos; scalar_t__ state; } ;
typedef TYPE_2__ fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_5, fz_stream *VAR_6, int64_t VAR_7, int VAR_8)
{
 prog_state *VAR_9 = (prog_state *)VAR_6->state;

 if (VAR_8 == VAR_2)
 {
  VAR_8 = VAR_3;
  VAR_7 += VAR_9->length;
 }
 else if (VAR_8 == VAR_1)
 {
  VAR_8 = VAR_3;
  VAR_7 += VAR_6->pos;
 }

 if (FUNC_0(VAR_9->file, VAR_7, VAR_8) != 0)
  FUNC_1(VAR_5, VAR_0, "cannot seek: %s", FUNC_2(VAR_4));
 VAR_6->pos = VAR_7;
 VAR_6->wp = VAR_6->rp;
}
