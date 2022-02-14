
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t last; int sign; int * dgts; } ;
typedef TYPE_1__ RNumBig ;



__attribute__((used)) static inline void FUNC_0(RNumBig *VAR_0) {
 while ((VAR_0->last>0) && !VAR_0->dgts[VAR_0->last])
  VAR_0->last--;
        if (!VAR_0->last && !*VAR_0->dgts)
  VAR_0->sign = 1;
}
