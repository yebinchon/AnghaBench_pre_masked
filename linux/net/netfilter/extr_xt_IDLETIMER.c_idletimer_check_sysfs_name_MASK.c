
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 if (!FUNC_0(VAR_1, "power") ||
     !FUNC_0(VAR_1, "subsystem") ||
     !FUNC_0(VAR_1, "uevent"))
  return -VAR_0;

 return 0;
}
