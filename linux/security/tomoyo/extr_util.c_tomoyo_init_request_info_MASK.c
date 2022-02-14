
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tomoyo_request_info {int mode; int type; int profile; struct tomoyo_domain_info* domain; } ;
struct tomoyo_domain_info {int ns; int profile; } ;


 int FUNC_0 (struct tomoyo_request_info*,int ,int) ;
 struct tomoyo_domain_info* FUNC_1 () ;
 int FUNC_2 (int ,int ,int const) ;

int FUNC_3(struct tomoyo_request_info *VAR_0,
        struct tomoyo_domain_info *VAR_1, const u8 VAR_2)
{
 u8 VAR_3;

 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 if (!VAR_1)
  VAR_1 = FUNC_1();
 VAR_0->domain = VAR_1;
 VAR_3 = VAR_1->profile;
 VAR_0->profile = VAR_3;
 VAR_0->type = VAR_2;
 VAR_0->mode = FUNC_2(VAR_1->ns, VAR_3, VAR_2);
 return VAR_0->mode;
}
