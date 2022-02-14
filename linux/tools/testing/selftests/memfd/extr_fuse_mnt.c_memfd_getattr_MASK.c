
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_nlink; int st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (struct stat*,int ,int) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_5, struct stat *VAR_6)
{
 FUNC_0(VAR_6, 0, sizeof(*VAR_6));

 if (!FUNC_1(VAR_5, "/")) {
  VAR_6->st_mode = VAR_1 | 0755;
  VAR_6->st_nlink = 2;
 } else if (!FUNC_1(VAR_5, VAR_4)) {
  VAR_6->st_mode = VAR_2 | 0444;
  VAR_6->st_nlink = 1;
  VAR_6->st_size = FUNC_2(VAR_3);
 } else {
  return -VAR_0;
 }

 return 0;
}
