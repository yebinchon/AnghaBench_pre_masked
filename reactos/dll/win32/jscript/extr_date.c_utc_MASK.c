
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bias; } ;
typedef TYPE_1__ DateInstance ;
typedef scalar_t__ DOUBLE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static inline DOUBLE FUNC_1(DOUBLE VAR_1, DateInstance *VAR_2)
{
    VAR_1 += VAR_2->bias * VAR_0;
    return VAR_1 + FUNC_0(VAR_1, VAR_2)*VAR_0;
}
