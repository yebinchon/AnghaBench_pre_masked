
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,...) ;

int FUNC_3(int VAR_0, char *VAR_1[])
{
 int VAR_2, VAR_3, VAR_4;
 uint8_t VAR_5;
 uint8_t VAR_6[256], VAR_7[256];

 FUNC_2("#include <linux/raid/pq.h>\n");
 FUNC_2("#include <linux/export.h>\n");


 FUNC_2("\nconst u8  __attribute__((aligned(256)))\n"
  "raid6_gfmul[256][256] =\n"
  "{\n");
 for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
  FUNC_2("\t{\n");
  for (VAR_3 = 0; VAR_3 < 256; VAR_3 += 8) {
   FUNC_2("\t\t");
   for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
    FUNC_2("0x%02x,%c", FUNC_0(VAR_2, VAR_3 + VAR_4),
           (VAR_4 == 7) ? '\n' : ' ');
  }
  FUNC_2("\t},\n");
 }
 FUNC_2("};\n");
 FUNC_2("#ifdef __KERNEL__\n");
 FUNC_2("EXPORT_SYMBOL(raid6_gfmul);\n");
 FUNC_2("#endif\n");


 FUNC_2("\nconst u8  __attribute__((aligned(256)))\n"
  "raid6_vgfmul[256][32] =\n"
  "{\n");
 for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
  FUNC_2("\t{\n");
  for (VAR_3 = 0; VAR_3 < 16; VAR_3 += 8) {
   FUNC_2("\t\t");
   for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
    FUNC_2("0x%02x,%c", FUNC_0(VAR_2, VAR_3 + VAR_4),
           (VAR_4 == 7) ? '\n' : ' ');
  }
  for (VAR_3 = 0; VAR_3 < 16; VAR_3 += 8) {
   FUNC_2("\t\t");
   for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
    FUNC_2("0x%02x,%c", FUNC_0(VAR_2, (VAR_3 + VAR_4) << 4),
           (VAR_4 == 7) ? '\n' : ' ');
  }
  FUNC_2("\t},\n");
 }
 FUNC_2("};\n");
 FUNC_2("#ifdef __KERNEL__\n");
 FUNC_2("EXPORT_SYMBOL(raid6_vgfmul);\n");
 FUNC_2("#endif\n");


 VAR_5 = 1;
 FUNC_2("\nconst u8 __attribute__((aligned(256)))\n"
        "raid6_gfexp[256] =\n" "{\n");
 for (VAR_2 = 0; VAR_2 < 256; VAR_2 += 8) {
  FUNC_2("\t");
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   VAR_6[VAR_2 + VAR_3] = VAR_5;
   FUNC_2("0x%02x,%c", VAR_5, (VAR_3 == 7) ? '\n' : ' ');
   VAR_5 = FUNC_0(VAR_5, 2);
   if (VAR_5 == 1)
    VAR_5 = 0;
  }
 }
 FUNC_2("};\n");
 FUNC_2("#ifdef __KERNEL__\n");
 FUNC_2("EXPORT_SYMBOL(raid6_gfexp);\n");
 FUNC_2("#endif\n");


 FUNC_2("\nconst u8 __attribute__((aligned(256)))\n"
        "raid6_gflog[256] =\n" "{\n");
 for (VAR_2 = 0; VAR_2 < 256; VAR_2 += 8) {
  FUNC_2("\t");
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   VAR_5 = 255;
   for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
    if (VAR_6[VAR_4] == (VAR_2 + VAR_3)) {
     VAR_5 = VAR_4;
     break;
    }
   FUNC_2("0x%02x,%c", VAR_5, (VAR_3 == 7) ? '\n' : ' ');
  }
 }
 FUNC_2("};\n");
 FUNC_2("#ifdef __KERNEL__\n");
 FUNC_2("EXPORT_SYMBOL(raid6_gflog);\n");
 FUNC_2("#endif\n");


 FUNC_2("\nconst u8 __attribute__((aligned(256)))\n"
        "raid6_gfinv[256] =\n" "{\n");
 for (VAR_2 = 0; VAR_2 < 256; VAR_2 += 8) {
  FUNC_2("\t");
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   VAR_7[VAR_2 + VAR_3] = VAR_5 = FUNC_1(VAR_2 + VAR_3, 254);
   FUNC_2("0x%02x,%c", VAR_5, (VAR_3 == 7) ? '\n' : ' ');
  }
 }
 FUNC_2("};\n");
 FUNC_2("#ifdef __KERNEL__\n");
 FUNC_2("EXPORT_SYMBOL(raid6_gfinv);\n");
 FUNC_2("#endif\n");


 FUNC_2("\nconst u8 __attribute__((aligned(256)))\n"
        "raid6_gfexi[256] =\n" "{\n");
 for (VAR_2 = 0; VAR_2 < 256; VAR_2 += 8) {
  FUNC_2("\t");
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
   FUNC_2("0x%02x,%c", VAR_7[VAR_6[VAR_2 + VAR_3] ^ 1],
          (VAR_3 == 7) ? '\n' : ' ');
 }
 FUNC_2("};\n");
 FUNC_2("#ifdef __KERNEL__\n");
 FUNC_2("EXPORT_SYMBOL(raid6_gfexi);\n");
 FUNC_2("#endif\n");

 return 0;
}
