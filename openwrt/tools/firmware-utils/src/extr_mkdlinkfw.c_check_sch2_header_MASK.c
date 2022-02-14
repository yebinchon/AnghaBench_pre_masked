
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct sch2_header {scalar_t__ header_crc32; int header_length; int image_len; scalar_t__ image_crc32; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct sch2_header*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(char *VAR_2, struct sch2_header *VAR_3)
{

 int VAR_4 = VAR_0;

 uint32_t VAR_5 = VAR_3->header_crc32;
 VAR_3->header_crc32 = 0;

 if (VAR_5 == FUNC_1(0, (uint8_t *) VAR_3, VAR_3->header_length)) {
  uint32_t VAR_6;
  FUNC_3("Find proper SCH2 header at: 0x%lX!\n",
         (char *)VAR_3 - VAR_2);

  VAR_6 =
      FUNC_1(0, (uint8_t *) VAR_3 + VAR_3->header_length,
     VAR_3->image_len);
  if (VAR_3->image_crc32 == VAR_6) {
   FUNC_3("Kernel checksum ok.\n");

   VAR_3->header_crc32 = VAR_5;
   FUNC_2(VAR_3);
   VAR_4 = VAR_1;
  } else
   FUNC_0("Kernel checksum incorrect! Stored: 0x%X Calculated: 0x%X\n", VAR_3->image_crc32, VAR_6);

 } else
  FUNC_0("SCH2 header checksum incorrect!");

 VAR_3->header_crc32 = VAR_5;
 return VAR_4;
}
