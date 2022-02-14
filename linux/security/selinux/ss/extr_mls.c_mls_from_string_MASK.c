
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policydb {int mls_enabled; } ;
struct context {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (struct policydb*,char,char*,struct context*,int *,int ) ;

int FUNC_3(struct policydb *VAR_3, char *VAR_4, struct context *VAR_5,
      gfp_t VAR_6)
{
 char *VAR_7;
 int VAR_8;

 if (!VAR_3->mls_enabled)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4, VAR_6);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
 } else {
  VAR_8 = FUNC_2(VAR_3, ':', VAR_7, VAR_5,
     ((void*)0), VAR_2);
  FUNC_0(VAR_7);
 }

 return VAR_8;
}
