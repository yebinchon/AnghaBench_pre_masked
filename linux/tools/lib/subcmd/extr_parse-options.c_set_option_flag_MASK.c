
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int flags; } ;


 struct option* FUNC_0 (struct option*,int,char const*) ;

void FUNC_1(struct option *VAR_0, int VAR_1, const char *VAR_2,
       int VAR_3)
{
 struct option *VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_4)
  VAR_4->flags |= VAR_3;
 return;
}
