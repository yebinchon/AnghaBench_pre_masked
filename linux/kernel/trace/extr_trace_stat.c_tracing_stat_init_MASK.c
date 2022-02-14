
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,struct dentry*) ;
 struct dentry* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void)
{
 struct dentry *VAR_1;

 VAR_1 = FUNC_3();
 if (FUNC_0(VAR_1))
  return 0;

 VAR_0 = FUNC_2("trace_stat", VAR_1);
 if (!VAR_0)
  FUNC_1("Could not create tracefs 'trace_stat' entry\n");
 return 0;
}
