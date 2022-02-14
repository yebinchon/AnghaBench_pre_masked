
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Version; } ;
struct TYPE_6__ {int oplock; TYPE_1__ Header; } ;
typedef TYPE_2__ fcb ;
struct TYPE_7__ {int Oplock; } ;
typedef int * POPLOCK ;
typedef TYPE_3__ FSRTL_ADVANCED_FCB_HEADER_NEW ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static __inline POPLOCK FUNC_0(fcb* VAR_1) {
    if (VAR_1->Header.Version >= VAR_0)
        return &((FSRTL_ADVANCED_FCB_HEADER_NEW*)&VAR_1->Header)->Oplock;
    else
        return &VAR_1->oplock;
}
