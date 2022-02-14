
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct cred {struct user_namespace* user_ns; int * request_key_auth; void* cap_bset; void* cap_ambient; void* cap_effective; void* cap_permitted; void* cap_inheritable; int securebits; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cred *VAR_3, struct user_namespace *VAR_4)
{



 VAR_3->securebits = VAR_2;
 VAR_3->cap_inheritable = VAR_0;
 VAR_3->cap_permitted = VAR_1;
 VAR_3->cap_effective = VAR_1;
 VAR_3->cap_ambient = VAR_0;
 VAR_3->cap_bset = VAR_1;





 VAR_3->user_ns = VAR_4;
}
