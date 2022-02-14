
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {struct TYPE_6__* next_; } ;
typedef TYPE_1__ WebPMuxImage ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__**) ;

__attribute__((used)) static int FUNC_2(WebPMuxImage** VAR_1, uint32_t VAR_2,
                                    WebPMuxImage*** const VAR_3) {
  uint32_t VAR_4 = 0;
  FUNC_1(VAR_1);
  *VAR_3 = VAR_1;

  if (VAR_2 == 0) {
    VAR_2 = FUNC_0(*VAR_1, VAR_0);
    if (VAR_2 == 0) return 0;
  }

  while (*VAR_1 != ((void*)0)) {
    WebPMuxImage* const VAR_5 = *VAR_1;
    ++VAR_4;
    if (VAR_4 == VAR_2) return 1;
    VAR_1 = &VAR_5->next_;
    *VAR_3 = VAR_1;
  }
  return 0;
}
