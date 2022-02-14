
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testgroup_t {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct testgroup_t*,char*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct testgroup_t *VAR_0, int VAR_1)
{
 FUNC_1("Options are: [--verbose|--quiet|--terse] [--no-fork]");
 FUNC_1("  Specify tests by name, or using a prefix ending with '..'");
 FUNC_1("  To skip a test, prefix its name with a colon.");
 FUNC_1("  To enable a disabled test, prefix its name with a plus.");
 FUNC_1("  Use --list-tests for a list of tests.");
 if (VAR_1) {
  FUNC_1("Known tests are:");
  FUNC_2(VAR_0, "..", 1, 0);
 }
 FUNC_0(0);
}
