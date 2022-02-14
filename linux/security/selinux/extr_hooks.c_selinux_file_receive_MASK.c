
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cred {int dummy; } ;


 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,struct file*,int ) ;
 int FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0)
{
 const struct cred *VAR_1 = FUNC_0();

 return FUNC_1(VAR_1, VAR_0, FUNC_2(VAR_0));
}
