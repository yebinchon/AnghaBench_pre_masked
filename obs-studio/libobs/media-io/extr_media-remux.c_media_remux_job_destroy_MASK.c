
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* media_remux_job_t ;
struct TYPE_8__ {int pb; TYPE_1__* oformat; } ;
struct TYPE_7__ {TYPE_5__* ofmt_ctx; int ifmt_ctx; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(media_remux_job_t VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->ifmt_ctx);

 if (VAR_1->ofmt_ctx && !(VAR_1->ofmt_ctx->oformat->flags & VAR_0))
  FUNC_2(VAR_1->ofmt_ctx->pb);

 FUNC_1(VAR_1->ofmt_ctx);

 FUNC_3(VAR_1);
}
