
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* setGain ) (int) ;} ;
struct TYPE_4__ {TYPE_1__ mach; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_1)
{
 return VAR_0.mach.setGain ? VAR_0.mach.setGain(VAR_1) : 100;
}
