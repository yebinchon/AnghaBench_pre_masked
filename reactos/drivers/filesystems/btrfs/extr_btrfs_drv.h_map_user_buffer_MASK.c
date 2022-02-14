
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {void* UserBuffer; int MdlAddress; } ;
typedef TYPE_1__* PIRP ;


 void* FUNC_0 (int ,int ) ;

__attribute__((used)) static __inline void* FUNC_1(PIRP VAR_0, ULONG VAR_1) {
    if (!VAR_0->MdlAddress) {
        return VAR_0->UserBuffer;
    } else {
        return FUNC_0(VAR_0->MdlAddress, VAR_1);
    }
}
