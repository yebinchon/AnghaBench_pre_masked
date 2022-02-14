
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int name; } ;
struct batadv_debuginfo {int fops; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct batadv_debuginfo** VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int,int ,int *,int *) ;

void FUNC_2(void)
{
 struct batadv_debuginfo **VAR_4;

 VAR_2 = FUNC_0(VAR_0, ((void*)0));

 for (VAR_4 = VAR_3; *VAR_4; ++VAR_4)
  FUNC_1(((*VAR_4)->attr).name,
        VAR_1 | ((*VAR_4)->attr).mode,
        VAR_2, ((void*)0), &(*VAR_4)->fops);
}
