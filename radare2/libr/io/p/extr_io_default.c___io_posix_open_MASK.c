
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,int const,int) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_6, int VAR_7, int VAR_8) {
 int VAR_9;
 if (FUNC_3 (VAR_6, "file://")) {
  VAR_6 += FUNC_4 ("file://");
 }
 if (FUNC_0 (VAR_6)) {
  return -1;
 }
 const int VAR_10 = (VAR_7 & VAR_5) ? (VAR_7 & VAR_4)
   ? (VAR_3 | VAR_1) : VAR_3 : VAR_2;
 VAR_9 = FUNC_2 (VAR_6, VAR_10, VAR_8);

 return VAR_9;
}
