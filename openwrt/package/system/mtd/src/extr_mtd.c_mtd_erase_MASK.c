
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct erase_info_user {int start; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int,int ,struct erase_info_user*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(const char *VAR_6)
{
 int VAR_7;
 struct erase_info_user VAR_8;

 if (VAR_4 < 2)
  FUNC_2(VAR_5, "Erasing %s ...\n", VAR_6);

 VAR_7 = FUNC_5(VAR_6);
 if(VAR_7 < 0) {
  FUNC_2(VAR_5, "Could not open mtd device: %s\n", VAR_6);
  FUNC_1(1);
 }

 VAR_8.length = VAR_2;

 for (VAR_8.start = 0;
   VAR_8.start < VAR_3;
   VAR_8.start += VAR_2) {
  if (FUNC_4(VAR_7, VAR_8.start)) {
   if (!VAR_4)
    FUNC_2(VAR_5, "\nSkipping bad block at 0x%x   ", VAR_8.start);
  } else {
   FUNC_3(VAR_7, VAR_1, &VAR_8);
   if(FUNC_3(VAR_7, VAR_0, &VAR_8))
    FUNC_2(VAR_5, "Failed to erase block on %s at 0x%x\n", VAR_6, VAR_8.start);
  }
 }

 FUNC_0(VAR_7);
 return 0;

}
