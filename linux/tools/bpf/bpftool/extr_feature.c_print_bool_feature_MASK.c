
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (char*,char const*,char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_2, const char *VAR_3,
     const char *VAR_4, bool VAR_5, const char *VAR_6)
{
 if (VAR_0)
  FUNC_0(VAR_1, VAR_2, VAR_5);
 else if (VAR_6)
  FUNC_1("#define %s%sHAVE_%s\n", VAR_6,
         VAR_5 ? "" : "NO_", VAR_4);
 else
  FUNC_1("%s is %savailable\n", VAR_3, VAR_5 ? "" : "NOT ");
}
