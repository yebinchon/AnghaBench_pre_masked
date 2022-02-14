
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debuginfo {int dummy; } ;


 scalar_t__ FUNC_0 (struct debuginfo*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 struct debuginfo* FUNC_2 (int) ;
 int FUNC_3 (struct debuginfo**) ;

__attribute__((used)) static struct debuginfo *FUNC_4(const char *VAR_0)
{
 struct debuginfo *VAR_1 = FUNC_2(sizeof(*VAR_1));
 if (!VAR_1)
  return ((void*)0);

 if (FUNC_0(VAR_1, VAR_0) < 0)
  FUNC_3(&VAR_1);
 if (VAR_1)
  FUNC_1("Open Debuginfo file: %s\n", VAR_0);
 return VAR_1;
}
