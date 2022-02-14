
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_unit {int directory; } ;
struct fw_device {int* config_rom; } ;
struct fw_csr_iterator {int dummy; } ;




 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct fw_csr_iterator*,int ) ;
 scalar_t__ FUNC_1 (struct fw_csr_iterator*,int*,int*) ;
 struct fw_device* FUNC_2 (struct fw_unit*) ;

__attribute__((used)) static int FUNC_3(struct fw_unit *VAR_6)
{
 struct fw_device *VAR_7 = FUNC_2(VAR_6);
 struct fw_csr_iterator VAR_8;
 int VAR_9, VAR_10, VAR_11 = -1, VAR_12 = -1;
 unsigned int VAR_13;







 FUNC_0(&VAR_8, VAR_6->directory);
 while (FUNC_1(&VAR_8, &VAR_9, &VAR_10)) {
  switch (VAR_9) {
  case 128:
   VAR_11 = VAR_10;
   break;
  case 129:
   VAR_12 = VAR_10;
   break;
  }
 }

 if (VAR_11 == VAR_4)
  VAR_13 = VAR_5;
 else if (VAR_11 == VAR_3)
  VAR_13 = VAR_2;
 else
  VAR_13 = VAR_0;
 if (VAR_7->config_rom[3] != ((VAR_11 << 8) | VAR_13) ||
     VAR_7->config_rom[4] >> 22 != VAR_12)
  return -VAR_1;

 return 0;
}
