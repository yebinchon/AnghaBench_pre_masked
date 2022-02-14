
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ff_decoder {TYPE_1__* stream; int start_pts; } ;
typedef int int64_t ;
struct TYPE_2__ {int time_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ff_decoder *VAR_1,
                                          int64_t VAR_2)
{
 if (VAR_1)
  VAR_1->start_pts = FUNC_0(VAR_2, VAR_0,
                                    VAR_1->stream->time_base);
}
