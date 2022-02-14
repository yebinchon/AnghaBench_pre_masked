
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6core {struct q6core* svc_version; scalar_t__ get_version_supported; struct q6core* fwk_version; scalar_t__ fwk_version_supported; } ;
struct apr_device {int dev; } ;


 struct q6core* FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct q6core*) ;

__attribute__((used)) static int FUNC_2(struct apr_device *VAR_1)
{
 struct q6core *VAR_2 = FUNC_0(&VAR_1->dev);

 if (VAR_2->fwk_version_supported)
  FUNC_1(VAR_2->fwk_version);
 if (VAR_2->get_version_supported)
  FUNC_1(VAR_2->svc_version);

 VAR_0 = ((void*)0);
 FUNC_1(VAR_2);

 return 0;
}
