
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LRMI_regs {int eax; int edx; int ebx; int ecx; } ;
typedef int r ;


 int FUNC_0 () ;
 int FUNC_1 (int,struct LRMI_regs*) ;
 int FUNC_2 (struct LRMI_regs*,int ,int) ;
 int FUNC_3 (char*,...) ;

int FUNC_4 (void)
{
 struct LRMI_regs VAR_0;
 int VAR_1;

 if (!FUNC_0())
  return 0;

 FUNC_2(&VAR_0, 0, sizeof(VAR_0));

 VAR_0.eax = 0x0000E980;
 VAR_0.edx = 0x47534943;

 VAR_1 = FUNC_1(0x15, &VAR_0);

 if (!VAR_1) {
  FUNC_3("Failed!\n");
  return 0;
 }
 if (VAR_0.eax == 0x47534943) {
  FUNC_3("BIOS supports GSIC call:\n");
  FUNC_3("\tsignature: %c%c%c%c\n",
         (VAR_0.eax >> 24) & 0xff,
         (VAR_0.eax >> 16) & 0xff,
         (VAR_0.eax >> 8) & 0xff,
         (VAR_0.eax) & 0xff);
  FUNC_3("\tcommand port = 0x%.4x\n",
         VAR_0.ebx & 0xffff);
  FUNC_3("\tcommand =      0x%.4x\n",
         (VAR_0.ebx >> 16) & 0xffff);
  FUNC_3("\tevent port =   0x%.8x\n", VAR_0.ecx);
  FUNC_3("\tflags =        0x%.8x\n", VAR_0.edx);
  if (((VAR_0.ebx >> 16) & 0xffff) != 0x82) {
   FUNC_3("non-default command value. If speedstep-smi "
          "doesn't work out of the box,\nyou may want to "
          "try out the default value by passing "
          "smi_cmd=0x82 to the module\n ON YOUR OWN "
          "RISK.\n");
  }
  if ((VAR_0.ebx & 0xffff) != 0xb2) {
   FUNC_3("non-default command port. If speedstep-smi "
          "doesn't work out of the box,\nyou may want to "
          "try out the default value by passing "
          "smi_port=0x82 to the module\n ON YOUR OWN "
          "RISK.\n");
  }
 } else {
  FUNC_3("BIOS DOES NOT support GSIC call.  Dumping registers anyway:\n");
  FUNC_3("eax = 0x%.8x\n", VAR_0.eax);
  FUNC_3("ebx = 0x%.8x\n", VAR_0.ebx);
  FUNC_3("ecx = 0x%.8x\n", VAR_0.ecx);
  FUNC_3("edx = 0x%.8x\n", VAR_0.edx);
  FUNC_3("Note also that some BIOS do not support the initial "
         "GSIC call, but the newer\nspeedstep-smi driver may "
         "work.\nFor this, you need to pass some arguments to "
         "the speedstep-smi driver:\n");
  FUNC_3("\tsmi_cmd=0x?? smi_port=0x?? smi_sig=1\n");
  FUNC_3("\nUnfortunately, you have to know what exactly are "
         "smi_cmd and smi_port, and this\nis system "
         "dependant.\n");
 }
 return 1;
}
