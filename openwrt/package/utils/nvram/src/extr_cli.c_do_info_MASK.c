
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int len; int magic; int crc_ver_init; int config_refresh; int config_ncdl; } ;
typedef TYPE_1__ nvram_header_t ;
struct TYPE_7__ {int offset; int length; } ;
typedef TYPE_2__ nvram_handle_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static int FUNC_3(nvram_handle_t *VAR_1)
{
 nvram_header_t *VAR_2 = FUNC_1(VAR_1);


 uint8_t VAR_3 = FUNC_0((unsigned char *) &VAR_2[0] + VAR_0,
  VAR_2->len - VAR_0, 0xff);


 FUNC_2("Magic:         0x%08X\n", VAR_2->magic);
 FUNC_2("Length:        0x%08X\n", VAR_2->len);
 FUNC_2("Offset:        0x%08X\n", VAR_1->offset);

 FUNC_2("CRC8:          0x%02X (calculated: 0x%02X)\n",
  VAR_2->crc_ver_init & 0xFF, VAR_3);

 FUNC_2("Version:       0x%02X\n", (VAR_2->crc_ver_init >> 8) & 0xFF);
 FUNC_2("SDRAM init:    0x%04X\n", (VAR_2->crc_ver_init >> 16) & 0xFFFF);
 FUNC_2("SDRAM config:  0x%04X\n", VAR_2->config_refresh & 0xFFFF);
 FUNC_2("SDRAM refresh: 0x%04X\n", (VAR_2->config_refresh >> 16) & 0xFFFF);
 FUNC_2("NCDL values:   0x%08X\n\n", VAR_2->config_ncdl);

 FUNC_2("%i bytes used / %i bytes available (%.2f%%)\n",
  VAR_2->len, VAR_1->length - VAR_1->offset - VAR_2->len,
  (100.00 / (double)(VAR_1->length - VAR_1->offset)) * (double)VAR_2->len);

 return 0;
}
