
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct erase_info_user {int length; scalar_t__ start; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ,struct erase_info_user*) ;
 int FUNC_5 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_6 (char const*,char) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_4)
{
 struct erase_info_user VAR_5;
 char *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);
 int VAR_8;

 if (FUNC_6(VAR_4, ':')) {
  VAR_7 = FUNC_7(VAR_4);
  VAR_4 = VAR_7;
 }

 do {
  VAR_6 = FUNC_6(VAR_4, ':');
  if (VAR_6) {
   *VAR_6 = 0;
   VAR_6++;
  }

  VAR_8 = FUNC_5(VAR_4);
  if(VAR_8 < 0) {
   FUNC_2(VAR_3, "Could not open mtd device: %s\n", VAR_4);
   FUNC_1(1);
  }

  if (VAR_2 < 2)
   FUNC_2(VAR_3, "Unlocking %s ...\n", VAR_4);

  VAR_5.start = 0;
  VAR_5.length = VAR_1;
  FUNC_4(VAR_8, VAR_0, &VAR_5);
  FUNC_0(VAR_8);
  VAR_4 = VAR_6;
 } while (VAR_6);

 if (VAR_7)
  FUNC_3(VAR_7);

 return 0;
}
