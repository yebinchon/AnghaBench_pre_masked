
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rerr {int code; char* name; char* explain; } ;
typedef int convbuf ;
typedef int RRegex ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (int const*,char*,int) ;
 struct rerr* VAR_2 ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*) ;

size_t
FUNC_4(int VAR_3, const RRegex *VAR_4, char *VAR_5, size_t VAR_6)
{
 struct rerr *VAR_7;
 size_t VAR_8;
 int VAR_9 = VAR_3 &~ VAR_1;
 char *VAR_10;
 char VAR_11[50];

 if (VAR_3 == VAR_0) {
  VAR_10 = FUNC_1(VAR_4, VAR_11, sizeof VAR_11);
 } else {
  for (VAR_7 = VAR_2; VAR_7->code != 0; VAR_7++) {
   if (VAR_7->code == VAR_9) {
    break;
   }
  }

  if (VAR_3&VAR_1) {
   if (VAR_7->code != 0) {
    FUNC_0 (VAR_11, VAR_7->name, sizeof (VAR_11)-1);
   } else {
    FUNC_2 (VAR_11, sizeof VAR_11, "R_REGEX_0x%x", VAR_9);
   }
   VAR_10 = VAR_11;
  } else {
   VAR_10 = VAR_7->explain;
  }
 }

 VAR_8 = FUNC_3(VAR_10) + 1;
 if (VAR_6 > 0) {
  FUNC_0(VAR_5, VAR_10, VAR_6 - 1);
 }

 return VAR_8;
}
