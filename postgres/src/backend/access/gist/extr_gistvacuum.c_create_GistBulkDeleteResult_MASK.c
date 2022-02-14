
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int page_set_context; } ;
typedef TYPE_1__ GistBulkDeleteResult ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static GistBulkDeleteResult *
FUNC_2(void)
{
 GistBulkDeleteResult *VAR_1;

 VAR_1 = (GistBulkDeleteResult *) FUNC_1(sizeof(GistBulkDeleteResult));
 VAR_1->page_set_context =
  FUNC_0(VAR_0,
        "GiST VACUUM page set context",
        16 * 1024);

 return VAR_1;
}
