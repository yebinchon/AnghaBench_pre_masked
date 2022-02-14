
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_mtime; } ;
typedef int f ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (scalar_t__*) ;

void
FUNC_5(void)
{
 char VAR_4[256];
 struct stat VAR_5;
 time_t VAR_6;
 int VAR_7;

 if (VAR_2[0] != '\0') {
  FUNC_4(&VAR_6);
  VAR_6 -= 86400;
  (void) FUNC_0(VAR_4, sizeof(VAR_4), VAR_3);
  if ((FUNC_3(VAR_4, &VAR_5) == 0) && (VAR_5.st_mtime < VAR_6)) {




   VAR_7 = FUNC_2(VAR_4, VAR_1|VAR_0, 00600);
   if (VAR_7 >= 0)
    FUNC_1(VAR_7);
  }
 }
}
