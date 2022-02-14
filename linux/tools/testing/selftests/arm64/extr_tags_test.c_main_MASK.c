
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct utsname*,unsigned long) ;
 int FUNC_1 (struct utsname*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct utsname*) ;

int FUNC_5(void)
{
 static int VAR_2 = 0;
 unsigned long VAR_3 = 0;
 struct utsname *VAR_4;
 int VAR_5;

 if (FUNC_3(VAR_0, VAR_1, 0, 0, 0) == 0)
  VAR_2 = 1;
 VAR_4 = (struct utsname *)FUNC_2(sizeof(*VAR_4));
 if (VAR_2)
  VAR_3 = 0x42;
 VAR_4 = (struct utsname *)FUNC_0(VAR_4, VAR_3);
 VAR_5 = FUNC_4(VAR_4);
 FUNC_1(VAR_4);

 return VAR_5;
}
