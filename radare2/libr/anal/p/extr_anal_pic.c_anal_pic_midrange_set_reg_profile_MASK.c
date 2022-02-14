
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reg; } ;
typedef TYPE_1__ RAnal ;


 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1 (RAnal *VAR_0) {
 const char *VAR_1;
 VAR_1 = "=PC	pc\n"
     "=SP	stkptr\n"
     "gpr	indf0	.8	0	0\n"
     "gpr	indf1	.8	1	0\n"
     "gpr	pcl		.8	2	0\n"
     "gpr	status	.8	3	0\n"
     "flg	c		.1	3.0	0\n"
     "flg	dc		.1	3.1	0\n"
     "flg	z		.1	3.2	0\n"
     "flg	pd		.1	3.3	0\n"
     "flg	to		.1	3.4	0\n"
     "gpr	fsr0l	.8	4	0\n"
     "gpr	fsr0h	.8	5	0\n"
     "gpr	fsr1l	.8	6	0\n"
     "gpr	fsr1h	.8	7	0\n"
     "gpr	bsr		.8	8	0\n"
     "gpr	wreg	.8	9	0\n"
     "gpr	pclath	.8	10	0\n"
     "gpr	intcon	.8	11	0\n"
     "gpr	pc		.16	12	0\n"
     "gpr	stkptr	.8	14	0\n"
     "gpr	_sram	.32 15	0\n"
     "gpr	_stack	.32 19	0\n";

 return FUNC_0 (VAR_0->reg, VAR_1);
}
