
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int components_size; int h16_count; int elision_size; scalar_t__ elision; scalar_t__ ipv4; } ;
typedef TYPE_1__ ipv6_address ;



__attribute__((used)) static void FUNC_0(ipv6_address *VAR_0) {
    VAR_0->components_size = VAR_0->h16_count * 2;

    if(VAR_0->ipv4)

        VAR_0->components_size += 4;

    if(VAR_0->elision) {



        VAR_0->elision_size = 16 - VAR_0->components_size;
        if(VAR_0->elision_size < 2)
            VAR_0->elision_size = 2;
    } else
        VAR_0->elision_size = 0;
}
