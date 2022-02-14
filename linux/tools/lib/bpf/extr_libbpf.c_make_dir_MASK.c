
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errmsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (char const*,int) ;
 int FUNC_2 (char*,char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3)
{
 char *VAR_4, VAR_5[VAR_1];
 int VAR_6 = 0;

 if (FUNC_1(VAR_3, 0700) && VAR_2 != VAR_0)
  VAR_6 = -VAR_2;

 if (VAR_6) {
  VAR_4 = FUNC_0(-VAR_6, VAR_5, sizeof(VAR_5));
  FUNC_2("failed to mkdir %s: %s\n", VAR_3, VAR_4);
 }
 return VAR_6;
}
