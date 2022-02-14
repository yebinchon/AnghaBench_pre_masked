
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ n; int b; } ;
struct TYPE_5__ {TYPE_1__ u; scalar_t__ is_num; } ;
typedef TYPE_2__ ccval_t ;
typedef int BOOL ;



__attribute__((used)) static inline BOOL FUNC_0(ccval_t VAR_0)
{
    return VAR_0.is_num ? VAR_0.u.n != 0 : VAR_0.u.b;
}
