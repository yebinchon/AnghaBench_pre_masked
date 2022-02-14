
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int release; } ;


 int FUNC_0 (int ,char*,int*,int*,int*) ;
 scalar_t__ FUNC_1 (struct utsname*) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_0, VAR_1, VAR_2;
 struct utsname VAR_3;


 if (FUNC_1(&VAR_3))
  return 0;

 if (FUNC_0(VAR_3.release, "%d.%d.%d",
     &VAR_0, &VAR_1, &VAR_2) != 3)
  return 0;

 return (VAR_0 << 16) + (VAR_1 << 8) + VAR_2;
}
