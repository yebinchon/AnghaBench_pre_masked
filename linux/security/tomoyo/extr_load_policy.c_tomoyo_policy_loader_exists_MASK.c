
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,struct path*) ;
 int FUNC_1 (struct path*) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_3(void)
{
 struct path VAR_3;

 if (!VAR_2)
  VAR_2 = VAR_0;
 if (FUNC_0(VAR_2, VAR_1, &VAR_3)) {
  FUNC_2("Not activating Mandatory Access Control as %s does not exist.\n",
   VAR_2);
  return 0;
 }
 FUNC_1(&VAR_3);
 return 1;
}
