
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; int member_9; int member_10; } ;
struct shader_test {char* member_0; TYPE_1__ member_1; } ;


 int FUNC_0 (struct shader_test*) ;
 int FUNC_1 (char*,struct shader_test*,int ) ;

__attribute__((used)) static void FUNC_2(void) {
    struct shader_test VAR_0[] = {
        {
            "ps_2_0\n"
            "dcl_2d s0\n",
            {0xffff0200, 0x0200001f, 0x90000000, 0xa00f0800, 0x0000ffff}
        },
        {
            "ps_2_0\n"
            "dcl_cube s0\n",
            {0xffff0200, 0x0200001f, 0x98000000, 0xa00f0800, 0x0000ffff}
        },
        {
            "ps_2_0\n"
            "dcl_volume s0\n",
            {0xffff0200, 0x0200001f, 0xa0000000, 0xa00f0800, 0x0000ffff}
        },
        {
            "ps_2_0\n"
            "dcl_volume s0\n"
            "dcl_cube s1\n"
            "dcl_2d s2\n",
            {0xffff0200, 0x0200001f, 0xa0000000, 0xa00f0800, 0x0200001f, 0x98000000,
             0xa00f0801, 0x0200001f, 0x90000000, 0xa00f0802, 0x0000ffff}
        },
        {
            "ps_2_0\n"
            "mov r0, t0\n",
            {0xffff0200, 0x02000001, 0x800f0000, 0xb0e40000, 0x0000ffff}
        },
        {
            "ps_2_0\n"
            "dcl_2d s2\n"
            "texld r0, t1, s2\n",
            {0xffff0200, 0x0200001f, 0x90000000, 0xa00f0802, 0x03000042, 0x800f0000,
             0xb0e40001, 0xa0e40802, 0x0000ffff}
        },
        {
            "ps_2_0\n"
            "texkill t0\n",
            {0xffff0200, 0x01000041, 0xb00f0000, 0x0000ffff}
        },
        {
            "ps_2_0\n"
            "mov oC0, c0\n"
            "mov oC1, c1\n",
            {0xffff0200, 0x02000001, 0x800f0800, 0xa0e40000, 0x02000001, 0x800f0801,
             0xa0e40001, 0x0000ffff}
        },
        {
            "ps_2_0\n"
            "mov oDepth, c0.x\n",
            {0xffff0200, 0x02000001, 0x900f0800, 0xa0000000, 0x0000ffff}
        },
        {
            "ps_2_0\n"
            "dcl_2d s2\n"
            "texldp r0, t1, s2\n",
            {0xffff0200, 0x0200001f, 0x90000000, 0xa00f0802, 0x03010042, 0x800f0000,
             0xb0e40001, 0xa0e40802, 0x0000ffff}
        },
        {
            "ps.2.0\n"
            "dcl_2d s2\n"
            "texldb r0, t1, s2\n",
            {0xffff0200, 0x0200001f, 0x90000000, 0xa00f0802, 0x03020042, 0x800f0000,
             0xb0e40001, 0xa0e40802, 0x0000ffff}
        },
    };

    FUNC_1("ps_2_0", VAR_0, FUNC_0(VAR_0));
}
