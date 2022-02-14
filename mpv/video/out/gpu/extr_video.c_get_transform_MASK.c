
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {float member_1; int member_0; } ;
struct TYPE_7__ {int member_0; int member_1; } ;
struct TYPE_6__ {int member_0; int member_1; } ;
struct TYPE_5__ {TYPE_3__ member_1; TYPE_2__ member_0; } ;
struct gl_transform {float* t; TYPE_4__ member_1; TYPE_1__ member_0; } ;


 int FUNC_0 (struct gl_transform,struct gl_transform*) ;
 int FUNC_1 (struct gl_transform,float*,float*) ;

__attribute__((used)) static void FUNC_2(float VAR_0, float VAR_1, int VAR_2, bool VAR_3,
                          struct gl_transform *VAR_4)
{
    int VAR_5 = VAR_2 % 90 ? 0 : VAR_2 / 90;
    int VAR_6[4] = {0, 1, 0, -1};
    int VAR_7[4] = {1, 0, -1, 0};
    struct gl_transform VAR_8 = {{{ VAR_7[VAR_5], VAR_6[VAR_5]},
                               {-VAR_6[VAR_5], VAR_7[VAR_5]}}};


    float VAR_9[2] = {1, 1};
    FUNC_1(VAR_8, &VAR_9[0], &VAR_9[1]);
    VAR_8.t[0] += VAR_9[0] < 0 ? VAR_0 : 0;
    VAR_8.t[1] += VAR_9[1] < 0 ? VAR_1 : 0;

    if (VAR_3) {
        struct gl_transform VAR_10 = {{{1, 0}, {0, -1}}, {0, VAR_1}};
        FUNC_0(VAR_10, &VAR_8);
    }

    *VAR_4 = VAR_8;
}
