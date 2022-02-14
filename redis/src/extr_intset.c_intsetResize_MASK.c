
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int encoding; } ;
typedef TYPE_1__ intset ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static intset *FUNC_2(intset *VAR_0, uint32_t VAR_1) {
    uint32_t VAR_2 = VAR_1*FUNC_0(VAR_0->encoding);
    VAR_0 = FUNC_1(VAR_0,sizeof(intset)+VAR_2);
    return VAR_0;
}
