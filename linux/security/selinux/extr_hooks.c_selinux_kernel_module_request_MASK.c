
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* kmod_name; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_1 () ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(char *VAR_5)
{
 struct common_audit_data VAR_6;

 VAR_6.type = VAR_0;
 VAR_6.u.kmod_name = VAR_5;

 return FUNC_0(&VAR_4,
       FUNC_1(), VAR_2, VAR_1,
       VAR_3, &VAR_6);
}
