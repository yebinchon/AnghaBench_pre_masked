
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
struct ihex_binrec {int len; int addr; int* data; } ;
typedef int ssize_t ;
typedef int data32 ;


 size_t FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ihex_binrec*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 struct ihex_binrec* FUNC_5 (size_t) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (struct ihex_binrec*,int ,size_t) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_8(uint8_t *VAR_5, ssize_t VAR_6)
{
 struct ihex_binrec *VAR_7;
 size_t VAR_8;
 uint32_t VAR_9 = 0;
 uint32_t VAR_10;
 uint8_t VAR_11, VAR_12 = 0, VAR_13 = 0;
 int VAR_14, VAR_15;
 int VAR_16 = 1;
 int VAR_17;

 VAR_14 = 0;
next_record:

 while (VAR_14 < VAR_6) {
  if (VAR_5[VAR_14] == '\n') VAR_16++;
  if (VAR_5[VAR_14++] == ':') break;
 }


 if (VAR_14 + 10 > VAR_6) {
  FUNC_2(VAR_3, "Can't find valid record at line %d\n", VAR_16);
  return -VAR_0;
 }

 VAR_17 = FUNC_3(VAR_5 + VAR_14, &VAR_12); VAR_14 += 2;
 if (VAR_4) {
  VAR_17 <<= 8;
  VAR_17 += FUNC_3(VAR_5 + VAR_14, &VAR_12); VAR_14 += 2;
 }
 VAR_8 = FUNC_0(sizeof(*VAR_7) + VAR_17, 4);
 VAR_7 = FUNC_5(VAR_8);
 if (!VAR_7) {
  FUNC_2(VAR_3, "out of memory for records\n");
  return -VAR_1;
 }
 FUNC_7(VAR_7, 0, VAR_8);
 VAR_7->len = VAR_17;


 if (VAR_14 + 8 + (VAR_7->len * 2) > VAR_6) {
  FUNC_2(VAR_3, "Not enough data to read complete record at line %d\n",
   VAR_16);
  return -VAR_0;
 }

 VAR_7->addr = FUNC_3(VAR_5 + VAR_14, &VAR_12) << 8; VAR_14 += 2;
 VAR_7->addr |= FUNC_3(VAR_5 + VAR_14, &VAR_12); VAR_14 += 2;
 VAR_11 = FUNC_3(VAR_5 + VAR_14, &VAR_12); VAR_14 += 2;

 for (VAR_15 = 0; VAR_15 < VAR_7->len; VAR_15++, VAR_14 += 2)
  VAR_7->data[VAR_15] = FUNC_3(VAR_5 + VAR_14, &VAR_12);


 VAR_13 = FUNC_3(VAR_5 + VAR_14, &VAR_12); VAR_14 += 2;
 if (VAR_12 != 0) {
  FUNC_2(VAR_3, "CRC failure at line %d: got 0x%X, expected 0x%X\n",
   VAR_16, VAR_13, (unsigned char)(VAR_13-VAR_12));
  return -VAR_0;
 }


 switch (VAR_11) {
 case 0:

  if (!VAR_7->len)
   break;

  VAR_7->addr += VAR_9;
  FUNC_1(VAR_7);
  goto next_record;

 case 1:
  if (VAR_7->addr || VAR_7->len) {
   FUNC_2(VAR_3, "Bad EOF record (type 01) format at line %d",
    VAR_16);
   return -VAR_0;
  }
  break;

 case 2:
 case 4:
  if (VAR_7->addr || VAR_7->len != 2) {
   FUNC_2(VAR_3, "Bad HEX86/HEX386 record (type %02X) at line %d\n",
    VAR_11, VAR_16);
   return -VAR_0;
  }



  VAR_9 = VAR_7->data[0] << 8 | VAR_7->data[1];
  VAR_9 <<= (VAR_11 == 2 ? 4 : 16);
  goto next_record;

 case 3:
 case 5:
  if (VAR_7->addr || VAR_7->len != 4) {
   FUNC_2(VAR_3, "Bad Start Address record (type %02X) at line %d\n",
    VAR_11, VAR_16);
   return -VAR_0;
  }

  FUNC_6(&VAR_10, &VAR_7->data[0], sizeof(VAR_10));
  VAR_10 = FUNC_4(VAR_10);
  FUNC_6(&VAR_7->data[0], &VAR_10, sizeof(VAR_10));



  if (VAR_2)
   FUNC_1(VAR_7);
  goto next_record;

 default:
  FUNC_2(VAR_3, "Unknown record (type %02X)\n", VAR_11);
  return -VAR_0;
 }

 return 0;
}
