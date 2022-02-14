
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aa_ns {int dummy; } ;
struct aa_label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct aa_label*,char const*,int *,int *,char*,int ) ;
 int FUNC_1 (struct aa_ns*) ;

int FUNC_2(struct aa_label *VAR_7, struct aa_ns *VAR_8, u32 VAR_9)
{
 const char *VAR_10;

 if (VAR_9 & VAR_0)
  VAR_10 = VAR_5;
 else if (VAR_9 & VAR_1)
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_3;


 if (VAR_6)
  return FUNC_0(VAR_7, VAR_10, ((void*)0), ((void*)0), "policy_locked",
        -VAR_2);

 if (!FUNC_1(VAR_8))
  return FUNC_0(VAR_7, VAR_10, ((void*)0), ((void*)0), "not policy admin",
        -VAR_2);


 return 0;
}
