
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* rose_addr; } ;
typedef TYPE_1__ rose_address ;


 int FUNC_0 (char*,char*,int,int,int,int,int) ;
 int FUNC_1 (char*,char*) ;

char *FUNC_2(char *VAR_0, const rose_address *VAR_1)
{
 if (VAR_1->rose_addr[0] == 0x00 && VAR_1->rose_addr[1] == 0x00 &&
     VAR_1->rose_addr[2] == 0x00 && VAR_1->rose_addr[3] == 0x00 &&
     VAR_1->rose_addr[4] == 0x00) {
  FUNC_1(VAR_0, "*");
 } else {
  FUNC_0(VAR_0, "%02X%02X%02X%02X%02X", VAR_1->rose_addr[0] & 0xFF,
      VAR_1->rose_addr[1] & 0xFF,
      VAR_1->rose_addr[2] & 0xFF,
      VAR_1->rose_addr[3] & 0xFF,
      VAR_1->rose_addr[4] & 0xFF);
 }

 return VAR_0;
}
