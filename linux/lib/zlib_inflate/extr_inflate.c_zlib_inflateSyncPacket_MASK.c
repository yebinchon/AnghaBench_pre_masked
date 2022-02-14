
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct inflate_state {scalar_t__ mode; scalar_t__ bits; } ;
struct TYPE_3__ {int * state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(z_streamp VAR_5)
{
    struct inflate_state *VAR_6;

    if (VAR_5 == ((void*)0) || VAR_5->state == ((void*)0)) return VAR_4;
    VAR_6 = (struct inflate_state *)VAR_5->state;

    if (VAR_6->mode == VAR_0 && VAR_6->bits == 0) {
 VAR_6->mode = VAR_1;
        return VAR_3;
    }
    return VAR_2;
}
