
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char const*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*,char const*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, int VAR_3, const char *VAR_4)
{
 if (!VAR_4)
  VAR_4 = "(unknown)";






 FUNC_0(VAR_0, "stuck spinlock detected at %s, %s:%d",
   VAR_4, VAR_2, VAR_3);

}
