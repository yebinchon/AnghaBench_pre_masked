
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwFlags; int tszName; int dwType; int dwOfs; int guidType; } ;
typedef TYPE_1__ DIDEVICEOBJECTINSTANCEW ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(const DIDEVICEOBJECTINSTANCEW *VAR_0) {
    FUNC_0("    - enumerating : %s ('%s'), - %2d - 0x%08x - %s - 0x%x\n",
        FUNC_2(&VAR_0->guidType), FUNC_1(&VAR_0->guidType), VAR_0->dwOfs, VAR_0->dwType, FUNC_3(VAR_0->tszName), VAR_0->dwFlags);
}
