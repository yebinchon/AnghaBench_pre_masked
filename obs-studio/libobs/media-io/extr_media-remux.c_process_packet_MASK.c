
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int duration; int pos; void* dts; void* pts; } ;
struct TYPE_6__ {int time_base; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 void* FUNC_1 (void*,int ,int ,int) ;

__attribute__((used)) static inline void FUNC_2(AVPacket *VAR_2, AVStream *VAR_3,
      AVStream *VAR_4)
{
 VAR_2->pts = FUNC_1(VAR_2->pts, VAR_3->time_base,
        VAR_4->time_base,
        VAR_0 | VAR_1);
 VAR_2->dts = FUNC_1(VAR_2->dts, VAR_3->time_base,
        VAR_4->time_base,
        VAR_0 | VAR_1);
 VAR_2->duration = (int)FUNC_0(VAR_2->duration, VAR_3->time_base,
       VAR_4->time_base);
 VAR_2->pos = -1;
}
