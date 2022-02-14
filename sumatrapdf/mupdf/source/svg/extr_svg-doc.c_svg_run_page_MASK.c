
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* doc; } ;
typedef TYPE_1__ svg_page ;
struct TYPE_5__ {int root; } ;
typedef TYPE_2__ svg_document ;
typedef int fz_page ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_cookie ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_page *VAR_1, fz_device *VAR_2, fz_matrix VAR_3, fz_cookie *VAR_4)
{
 svg_page *VAR_5 = (svg_page*)VAR_1;
 svg_document *VAR_6 = VAR_5->doc;
 FUNC_0(VAR_0, VAR_6, VAR_6->root, VAR_2, VAR_3);
}
