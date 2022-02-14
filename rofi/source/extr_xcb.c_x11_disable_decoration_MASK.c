
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_atom_t ;
typedef int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {int connection; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int,int,struct MotifWMHints*) ;

void FUNC_1 ( xcb_window_t VAR_4 )
{

    const uint32_t VAR_5 = ( 1 << 1 );

    struct MotifWMHints
    {
        uint32_t flags;
        uint32_t functions;
        uint32_t decorations;
        int32_t inputMode;
        uint32_t state;
    };

    struct MotifWMHints VAR_6;
    VAR_6.flags = VAR_5;
    VAR_6.decorations = 0;
    VAR_6.functions = 0;
    VAR_6.inputMode = 0;
    VAR_6.state = 0;

    xcb_atom_t VAR_7 = VAR_2[VAR_1];
    FUNC_0 ( VAR_3->connection, VAR_0, VAR_4, VAR_7, VAR_7, 32, 5, &VAR_6 );
}
