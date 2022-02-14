
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int display_rate; int num_planes; int bpp; int height; int width; int num_steps; int num_frames; int header_size; } ;
typedef TYPE_1__ ani_header ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1( const ani_header *VAR_0 )
{
    FUNC_0("     header size: %d\n", VAR_0->header_size);
    FUNC_0("          frames: %d\n", VAR_0->num_frames);
    FUNC_0("           steps: %d\n", VAR_0->num_steps);
    FUNC_0("           width: %d\n", VAR_0->width);
    FUNC_0("          height: %d\n", VAR_0->height);
    FUNC_0("             bpp: %d\n", VAR_0->bpp);
    FUNC_0("          planes: %d\n", VAR_0->num_planes);
    FUNC_0("    display rate: %d\n", VAR_0->display_rate);
    FUNC_0("           flags: 0x%08x\n", VAR_0->flags);
}
