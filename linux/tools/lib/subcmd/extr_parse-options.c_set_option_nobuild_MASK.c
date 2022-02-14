
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char const* build_opt; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct option* FUNC_0 (struct option*,int,char const*) ;

void FUNC_1(struct option *VAR_2, int VAR_3,
   const char *VAR_4,
   const char *VAR_5,
   bool VAR_6)
{
 struct option *VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);

 if (!VAR_7)
  return;

 VAR_7->flags |= VAR_1;
 VAR_7->flags |= VAR_6 ? VAR_0 : 0;
 VAR_7->build_opt = VAR_5;
}
