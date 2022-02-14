
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, int VAR_2,
        int VAR_3, const char *VAR_4)
{
 if (FUNC_0(VAR_2 == VAR_3,
    "expected_line is too long"))
  return -1;

 if (FUNC_2(VAR_1, VAR_4)) {
  FUNC_1(VAR_0, "unexpected pprint output\n");
  FUNC_1(VAR_0, "expected: %s", VAR_1);
  FUNC_1(VAR_0, "    read: %s", VAR_4);
  return -1;
 }

 return 0;
}
