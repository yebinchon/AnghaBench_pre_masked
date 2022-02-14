
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int,int,int) ;
 int VAR_0 ;

int FUNC_4(void)
{
 int VAR_1;

 if (FUNC_1("/dev/mem", 0, 0xA0000, 1) == 0)
  FUNC_0(VAR_0, "PASS: /dev/mem 0x0-0xa0000 is readable\n");
 else
  FUNC_0(VAR_0, "FAIL: /dev/mem 0x0-0xa0000 not accessible\n");
 if (FUNC_1("/dev/mem", 0xA0000, 0x20000, 0) == 0)
  FUNC_0(VAR_0, "PASS: /dev/mem 0xa0000-0xc0000 is mappable\n");
 else
  FUNC_0(VAR_0, "FAIL: /dev/mem 0xa0000-0xc0000 not accessible\n");

 if (FUNC_1("/dev/mem", 0xC0000, 0x40000, 1) == 0)
  FUNC_0(VAR_0, "PASS: /dev/mem 0xc0000-0x100000 is readable\n");
 else
  FUNC_0(VAR_0, "FAIL: /dev/mem 0xc0000-0x100000 not accessible\n");
 VAR_1 = FUNC_1("/dev/mem", 0, 1024*1024, 0);
 if (VAR_1 == 0)
  FUNC_0(VAR_0, "PASS: /dev/mem 0x0-0x100000 is mappable\n");
 else if (VAR_1 > 0)
  FUNC_0(VAR_0, "PASS: /dev/mem 0x0-0x100000 not mappable\n");
 else
  FUNC_0(VAR_0, "FAIL: /dev/mem 0x0-0x100000 not accessible\n");

 FUNC_3("/sys/class/pci_bus", "legacy_mem", 0, 0xA0000, 1);
 FUNC_3("/sys/class/pci_bus", "legacy_mem", 0xA0000, 0x20000, 0);
 FUNC_3("/sys/class/pci_bus", "legacy_mem", 0xC0000, 0x40000, 1);
 FUNC_3("/sys/class/pci_bus", "legacy_mem", 0, 1024*1024, 0);

 FUNC_2("/sys/devices", "rom");

 FUNC_3("/proc/bus/pci", "??.?", 0, 0xA0000, 1);
 FUNC_3("/proc/bus/pci", "??.?", 0xA0000, 0x20000, 0);
 FUNC_3("/proc/bus/pci", "??.?", 0xC0000, 0x40000, 1);
 FUNC_3("/proc/bus/pci", "??.?", 0, 1024*1024, 0);

 return VAR_1;
}
