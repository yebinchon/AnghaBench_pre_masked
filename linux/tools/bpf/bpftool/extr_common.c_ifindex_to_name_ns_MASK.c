
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,struct stat*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static char *
FUNC_4(__u32 VAR_1, __u32 VAR_2, __u32 VAR_3, char *VAR_4)
{
 struct stat VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2("/proc/self/ns/net", &VAR_5);
 if (VAR_6) {
  FUNC_1("Can't stat /proc/self: %s", FUNC_3(VAR_0));
  return ((void*)0);
 }

 if (VAR_5.st_dev != VAR_2 || VAR_5.st_ino != VAR_3)
  return ((void*)0);

 return FUNC_0(VAR_1, VAR_4);
}
