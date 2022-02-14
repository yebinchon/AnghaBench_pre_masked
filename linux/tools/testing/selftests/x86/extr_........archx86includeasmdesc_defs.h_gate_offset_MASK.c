
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long offset_low; scalar_t__ offset_middle; scalar_t__ offset_high; } ;
typedef TYPE_1__ gate_desc ;



__attribute__((used)) static inline unsigned long FUNC_0(const gate_desc *VAR_0)
{




 return VAR_0->offset_low | ((unsigned long)VAR_0->offset_middle << 16);

}
