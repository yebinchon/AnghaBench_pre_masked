
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_unit {int directory; } ;
typedef int name ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static bool
FUNC_2(struct fw_unit *VAR_1)
{
 char VAR_2[28] = {0};

 if (FUNC_0(VAR_1->directory, VAR_0, VAR_2, sizeof(VAR_2)) < 0)
  return 0;

 return FUNC_1(VAR_2, "FW Audiophile Bootloader", 24) != 0;
}
