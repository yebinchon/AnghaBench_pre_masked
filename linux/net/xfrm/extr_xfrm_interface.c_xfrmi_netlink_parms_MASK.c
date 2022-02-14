
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_if_parms {void* if_id; void* link; } ;
struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct xfrm_if_parms*,int ,int) ;
 void* FUNC_1 (struct nlattr*) ;

__attribute__((used)) static void FUNC_2(struct nlattr *VAR_2[],
          struct xfrm_if_parms *VAR_3)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 if (!VAR_2)
  return;

 if (VAR_2[VAR_1])
  VAR_3->link = FUNC_1(VAR_2[VAR_1]);

 if (VAR_2[VAR_0])
  VAR_3->if_id = FUNC_1(VAR_2[VAR_0]);
}
