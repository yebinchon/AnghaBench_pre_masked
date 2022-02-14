
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_3__ {scalar_t__ screen; scalar_t__ screen_size; } ;
typedef TYPE_1__ BfvmCPU ;



__attribute__((used)) static inline int FUNC_0(ut64 VAR_0, BfvmCPU *VAR_1) {
 return (VAR_0 >= VAR_1->screen && VAR_0 < VAR_1->screen+VAR_1->screen_size);
}
