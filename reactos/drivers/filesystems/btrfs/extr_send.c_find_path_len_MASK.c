
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ namelen; struct TYPE_3__* parent; } ;
typedef TYPE_1__ send_dir ;



__attribute__((used)) static __inline uint16_t FUNC_0(send_dir* VAR_0, uint16_t VAR_1) {
    uint16_t VAR_2 = VAR_1;

    while (VAR_0 && VAR_0->namelen > 0) {
        VAR_2 += VAR_0->namelen + 1;
        VAR_0 = VAR_0->parent;
    }

    return VAR_2;
}
