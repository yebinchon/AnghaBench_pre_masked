
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct stat {int const st_mode; int st_uid; int st_gid; } ;


 int VAR_0 ;
 int VAR_1 ;




 int const VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,struct stat*) ;
 int VAR_5 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (int) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (char const*,char*,int) ;

__attribute__((used)) static char *FUNC_10(char *VAR_6, const int VAR_7, const char *VAR_8, const char *VAR_9, int VAR_10) {



 const char *VAR_11 = VAR_8;
 char *VAR_12, *VAR_13 = ((void*)0);
 int VAR_14 = FUNC_3 (VAR_11);
 int VAR_15, VAR_16 = 0, VAR_17 = 0;
 int VAR_18 = '-';
 if (!FUNC_9 (VAR_8, "./", 2)) {
  VAR_8 = VAR_8 + 2;
 }
 const bool VAR_19 = FUNC_2 (VAR_11);
 if (VAR_19) {
  VAR_12 = FUNC_4 (FUNC_8 (VAR_8), "/");
 } else {
  VAR_12 = FUNC_8 (VAR_8);
 }
 if (!*VAR_12) {
  FUNC_0 (VAR_12);
  return VAR_6;
 }
 VAR_15 = VAR_19? 0755: 0644;
 if (!VAR_10) {
  VAR_5 = ((VAR_7 + 1) % 4)? 1: 0;
  VAR_6 = FUNC_5 (VAR_6, "%18s%s", VAR_12, VAR_5? "  ": "\n");
  FUNC_0 (VAR_12);
  return VAR_6;
 }
 VAR_13 = FUNC_8 ("-");
 VAR_18 = VAR_19? 'd': '-';

 if (VAR_10 == 'q') {
  VAR_6 = FUNC_5 (VAR_6, "%s\n", VAR_12);
 } else if (VAR_10 == 'e') {
  const char *VAR_20 = "📁";
  const char *VAR_21 = "📎";
  const char *VAR_22 = "🌅";
  const char *VAR_23 = "🔼";
  const char *VAR_24 = "👀";
  const char *VAR_25 = "  ";

  const char *VAR_26 = VAR_25;
  if (VAR_19) {
   VAR_26 = VAR_20;






  } else if (FUNC_6 (VAR_12, ".jpg") || FUNC_6 (VAR_12, ".png") || FUNC_6 (VAR_12, ".gif")) {
   VAR_26 = VAR_22;
  } else if (*VAR_12 == '.') {
   VAR_26 = VAR_24;
  }
  VAR_6 = FUNC_5 (VAR_6, "%s %s\n", VAR_26, VAR_12);
 } else if (VAR_10 == VAR_1) {
  VAR_6 = FUNC_5 (VAR_6, "%c%s%s%s  1 %4d:%-4d  %-10d  %s\n",
   VAR_19?'d': VAR_18,
   VAR_13? VAR_13: "-",
   FUNC_7 ((VAR_15 >> 3) & 7),
   FUNC_7 (VAR_15 & 7),
   VAR_16, VAR_17, VAR_14, VAR_12);
 } else if (VAR_10 == VAR_0) {
  if (VAR_7 > 0) {
   VAR_6 = FUNC_4 (VAR_6, ",");
  }
  VAR_6 = FUNC_5 (VAR_6, "{\"name\":\"%s\",\"size\":%d,\"uid\":%d,"
   "\"gid\":%d,\"perm\":%d,\"isdir\":%s}",
   VAR_9, VAR_14, VAR_16, VAR_17, VAR_15, VAR_19? "true": "false");
 }
 FUNC_0 (VAR_12);
 FUNC_0 (VAR_13);
 return VAR_6;
}
