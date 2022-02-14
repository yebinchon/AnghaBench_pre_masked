
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ffmpeg_mux {int dummy; } ;
typedef int int64_t ;
struct TYPE_7__ {int num; } ;
struct TYPE_6__ {int time_base; TYPE_1__* codec; } ;
struct TYPE_5__ {TYPE_4__ time_base; } ;
typedef TYPE_2__ AVStream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_4__,int ,int) ;
 TYPE_2__* FUNC_1 (struct ffmpeg_mux*,int) ;

__attribute__((used)) static inline int64_t FUNC_2(struct ffmpeg_mux *VAR_2, int64_t VAR_3, int VAR_4)
{
 AVStream *VAR_5 = FUNC_1(VAR_2, VAR_4);

 return FUNC_0(VAR_3 / VAR_5->codec->time_base.num,
    VAR_5->codec->time_base, VAR_5->time_base,
    VAR_0 | VAR_1);
}
