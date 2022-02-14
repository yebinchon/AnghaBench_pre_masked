
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int pts; } ;
struct ff_packet {TYPE_1__ base; } ;
struct ff_decoder {int clock; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ff_decoder*,scalar_t__,int ) ;
 int FUNC_2 (struct ff_packet*,int ) ;

__attribute__((used)) static void FUNC_3(struct ff_decoder *VAR_1,
                              struct ff_packet *VAR_2)
{
 int64_t VAR_3 = FUNC_0(VAR_1->clock);
 if (VAR_3 != VAR_0) {
  if (FUNC_1(VAR_1, VAR_3,
                                      VAR_2->base.pts))
   FUNC_2(VAR_2, VAR_2->base.size);
 }
}
