
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (char*,...) ;

void FUNC_7(unsigned long VAR_5, unsigned long VAR_6,
   unsigned long VAR_7, unsigned long VAR_8)
{
 void (*VAR_9) (unsigned long, unsigned long, unsigned long,
         unsigned long);
 int VAR_10;

 FUNC_0();

 FUNC_6("\n\nOpenWrt kernel loader for MIPS based SoC\n");
 FUNC_6("Copyright (C) 2011 Gabor Juhos <juhosg@openwrt.org>\n");

 FUNC_4();

 VAR_10 = FUNC_5();
 if (VAR_10 != VAR_0) {
  FUNC_6("Incorrect LZMA stream properties!\n");
  FUNC_2();
 }

 FUNC_6("Decompressing kernel... ");

 VAR_10 = FUNC_3((unsigned char *) VAR_3);
 if (VAR_10 != VAR_0) {
  FUNC_6("failed, ");
  switch (VAR_10) {
  case 128:
   FUNC_6("data error!\n");
   break;
  default:
   FUNC_6("unknown error %d!\n", VAR_10);
  }
  FUNC_2();
 } else {
  FUNC_6("done!\n");
 }

 FUNC_1(VAR_3, VAR_4);

 FUNC_6("Starting kernel at %08x...\n\n", VAR_3);
 VAR_9 = (void *) VAR_3;
 VAR_9(VAR_5, VAR_6, VAR_7, VAR_8);
}
