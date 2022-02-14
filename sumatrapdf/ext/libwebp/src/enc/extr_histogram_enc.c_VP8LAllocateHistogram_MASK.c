
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int * literal_; } ;
typedef TYPE_1__ VP8LHistogram ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_2 (int const,int) ;

VP8LHistogram* FUNC_3(int VAR_0) {
  VP8LHistogram* VAR_1 = ((void*)0);
  const int VAR_2 = FUNC_0(VAR_0);
  uint8_t* const VAR_3 = (uint8_t*)FUNC_2(VAR_2, sizeof(*VAR_3));
  if (VAR_3 == ((void*)0)) return ((void*)0);
  VAR_1 = (VP8LHistogram*)VAR_3;

  VAR_1->literal_ = (uint32_t*)(VAR_3 + sizeof(VP8LHistogram));
  FUNC_1(VAR_1, VAR_0, 0);
  return VAR_1;
}
