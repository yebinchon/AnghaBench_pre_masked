
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isst_if_io_regs {int req_count; TYPE_1__* io_reg; } ;
struct TYPE_2__ {unsigned int logical_cpu; unsigned int reg; int read_write; unsigned int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int,unsigned int,int,...) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int,int) ;
 int FUNC_4 (int,int,struct isst_if_io_regs*) ;
 int FUNC_5 (char const*,int ) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_3, unsigned int VAR_4, int VAR_5,
      unsigned int *VAR_6)
{
 struct isst_if_io_regs VAR_7;
 const char *VAR_8 = "/dev/isst_interface";
 int VAR_9;
 int VAR_10;

 FUNC_1("mmio_cmd cpu:%d reg:%d write:%d\n", VAR_3, VAR_4, VAR_5);

 VAR_10 = FUNC_5(VAR_8, VAR_1);
 if (VAR_10 < 0)
  FUNC_2(-1, "%s open failed", VAR_8);

 VAR_7.req_count = 1;
 VAR_7.io_reg[0].logical_cpu = VAR_3;
 VAR_7.io_reg[0].reg = VAR_4;
 VAR_9 = VAR_0;
 if (VAR_5) {
  VAR_7.io_reg[0].read_write = 1;
  VAR_7.io_reg[0].value = *VAR_6;
 } else {
  VAR_7.io_reg[0].read_write = 0;
 }

 if (FUNC_4(VAR_10, VAR_9, &VAR_7) == -1) {
  FUNC_6("ISST_IF_IO_CMD");
  FUNC_3(VAR_2, "Error: mmio_cmd cpu:%d reg:%x read_write:%x\n",
   VAR_3, VAR_4, VAR_5);
 } else {
  if (!VAR_5)
   *VAR_6 = VAR_7.io_reg[0].value;

  FUNC_1(
   "mmio_cmd response: cpu:%d reg:%x rd_write:%x resp:%x\n",
   VAR_3, VAR_4, VAR_5, *VAR_6);
 }

 FUNC_0(VAR_10);

 return 0;
}
