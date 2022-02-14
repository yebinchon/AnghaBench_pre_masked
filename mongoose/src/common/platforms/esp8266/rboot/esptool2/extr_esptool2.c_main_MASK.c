
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,unsigned char,unsigned char,unsigned char,int,char**,int) ;
 int FUNC_1 (char*,char*,char**,int) ;
 int FUNC_2 (char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;

int FUNC_7(int VAR_2, char *VAR_3[]) {

 int VAR_4;
 char *VAR_5;
 char *VAR_6;
 int VAR_7;
 bool VAR_8 = 0;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 bool VAR_12 = 0;
 int VAR_13 = 0;

 unsigned char VAR_14 = 0xff;
 unsigned char VAR_15 = 0xff;
 unsigned char VAR_16 = 0;
 int VAR_17 = 0;


 for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
  if (!FUNC_6(VAR_3[VAR_4], "-bin")) {
   VAR_8 = 1;
   VAR_17++;
  } else if (!FUNC_6(VAR_3[VAR_4], "-lib")) {
   VAR_9 = 1;
   VAR_17++;
  } else if (!FUNC_6(VAR_3[VAR_4], "-header")) {
   VAR_10 = 1;
   VAR_17++;
  } else if (!FUNC_6(VAR_3[VAR_4], "-quiet")) {
   VAR_1 = 1;
  } else if (!FUNC_6(VAR_3[VAR_4], "-debug")) {
   VAR_0 = 1;
  } else if (!FUNC_6(VAR_3[VAR_4], "-boot0")) {
   VAR_13 = 0;
  } else if (!FUNC_6(VAR_3[VAR_4], "-boot1")) {
   VAR_13 = 1;
  } else if (!FUNC_6(VAR_3[VAR_4], "-boot2")) {
   VAR_13 = 2;
  } else if (!FUNC_6(VAR_3[VAR_4], "-qio")) {
   VAR_14 = 0;
  } else if (!FUNC_6(VAR_3[VAR_4], "-qout")) {
   VAR_14 = 1;
  } else if (!FUNC_6(VAR_3[VAR_4], "-dio")) {
   VAR_14 = 2;
  } else if (!FUNC_6(VAR_3[VAR_4], "-dout")) {
   VAR_14 = 3;
  } else if (!FUNC_6(VAR_3[VAR_4], "-256")) {
   VAR_15 = 1;
  } else if (!FUNC_6(VAR_3[VAR_4], "-512")) {
   VAR_15 = 0;
  } else if (!FUNC_6(VAR_3[VAR_4], "-1024")) {
   VAR_15 = 2;
  } else if (!FUNC_6(VAR_3[VAR_4], "-2048")) {
   VAR_15 = 3;
  } else if (!FUNC_6(VAR_3[VAR_4], "-4096")) {
   VAR_15 = 4;
  } else if (!FUNC_6(VAR_3[VAR_4], "-20")) {
   VAR_16 = 2;
  } else if (!FUNC_6(VAR_3[VAR_4], "-26.7")) {
   VAR_16 = 1;
  } else if (!FUNC_6(VAR_3[VAR_4], "-40")) {
   VAR_16 = 0;
  } else if (!FUNC_6(VAR_3[VAR_4], "-80")) {
   VAR_16 = 15;
  } else if (!FUNC_6(VAR_3[VAR_4], "-iromchksum")) {
   VAR_12 = 1;
  } else if (!FUNC_6(VAR_3[VAR_4], "--")) {
   VAR_4++;
   break;
  } else if (VAR_3[VAR_4][0] == '-') {
   VAR_11 = 1;
   break;
  } else {
   break;
  }
 }

 FUNC_4("esptool2 v2.0.0 - (c) 2015 Richard A Burton <richardaburton@gmail.com>\r\n");
 FUNC_4("This program is licensed under the GPL v3.\r\n");
    FUNC_4("See the file LICENSE for details.\r\n\r\n");

 if (VAR_11) {
  FUNC_3("Error: Unrecognised option '%s'.\r\n", VAR_3[VAR_4]);
  return -1;
 }

 if (VAR_2 < 2) {
  FUNC_4("Usage:\r\n");
  FUNC_4("esptool2 -lib [options] <input_file> <output_file>\r\n");
  FUNC_4("esptool2 -bin [options] <input_file> <output_file> <elf_section>...\r\n");
  FUNC_4("esptool2 -header [options] <input_file> <output_file> <elf_section>...\r\n");
  FUNC_4("\r\n");
  FUNC_4("  -lib\r\n");
  FUNC_4("       Export the sdk library (.irom0.text), for a standalone app.\r\n");
  FUNC_4("       e.g. esptool2 -elf esp8266_iot.out out.bin\r\n");
  FUNC_4("\r\n");
  FUNC_4("  -header\r\n");
  FUNC_4("       Export elf sections as bytes to a C header file.\r\n");
  FUNC_4("       e.g. esptool2 -elf esp8266_iot.out out.h .text .data .rodata\r\n");
  FUNC_4("\r\n");
  FUNC_4("  -bin\r\n");
  FUNC_4("       Create binary program image, for standalone and bootloaded apps, with\r\n");
  FUNC_4("       specified elf sections. Includes sdk library for bootloaded apps.\r\n");
  FUNC_4("       e.g. esptool2 -bin esp8266_iot.out out.bin .text .data .rodata\r\n");
  FUNC_4("       Options:\r\n");
  FUNC_4("        bootloader: -boot0 -boot1 -boot2 (default -boot0)\r\n");
  FUNC_4("          -boot0 = standalone app, not built for bootloader use\r\n");
  FUNC_4("          -boot1 = built for bootloader v1.1\r\n");
  FUNC_4("          -boot2 = built for bootloader v1.2+ (use for rBoot roms)\r\n");
  FUNC_4("          (elf file must have been linked appropriately for chosen option)\r\n");
  FUNC_4("        spi size (kb): -256 -512 -1024 -2048 -4096 (default -512)\r\n");
  FUNC_4("        spi mode: -qio -qout -dio -dout (default -qio)\r\n");
  FUNC_4("        spi speed: -20 -26.7 -40 -80 (default -40)\r\n");
  FUNC_4("        include irom in checksum: -iromchksum (also needs enabling in rBoot)\r\n");
  FUNC_4("\r\n");
  FUNC_4("General options:\r\n");
  FUNC_4("  -quiet prints only error messages\r\n");
  FUNC_4("  -debug print extra debug information\r\n");
  FUNC_4("  -- no more options follow (needed if your elf file starts with a '-')\r\n");
  FUNC_4("\r\n");
  FUNC_4("Returns:\r\n");
  FUNC_4("   0 on success\r\n");
  FUNC_4("  -1 on failure\r\n");
  FUNC_4("\r\n");
  return -1;
 }


 if (VAR_17 != 1) {
  FUNC_3("Error: You must specify -bin OR -lib OR -header for build type.\r\n");
  return -1;
 }

 if (VAR_1 && VAR_0) {
  FUNC_3("Error: You cannot specify -quiet and -debug.\r\n");
  return -1;
 }


 if ((VAR_9 && VAR_4 + 2 > VAR_2) || ((VAR_8 | VAR_10) && VAR_4 + 3 > VAR_2)) {
  FUNC_3("Error: Not enough arguments supplied.\r\n");
  return -1;
 } else if (VAR_9 && VAR_4 + 2 < VAR_2) {
  FUNC_3("Error: Too many arguments supplied.\r\n");
  return -1;
 }


 VAR_5 = VAR_3[VAR_4++];
 VAR_6 = VAR_3[VAR_4++];
 VAR_7 = VAR_2 - VAR_4;


 if (VAR_8) {
  if (!FUNC_0(VAR_5, VAR_6, VAR_13, VAR_14, VAR_16, VAR_15, VAR_12, &VAR_3[VAR_4], VAR_7)) {
   FUNC_5(VAR_6);
   return -1;
  }
 } else if (VAR_10) {
  if (!FUNC_1(VAR_5, VAR_6, &VAR_3[VAR_4], VAR_7)) {
   FUNC_5(VAR_6);
   return -1;
  }
 } else {
  if (!FUNC_2(VAR_5, VAR_6, ".irom0.text")) {
   FUNC_5(VAR_6);
   return -1;
  }

 }

 FUNC_4("Successfully created '%s'.\r\n", VAR_6);
 return 0;

}
