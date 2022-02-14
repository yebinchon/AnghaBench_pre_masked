
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int out; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_path ;
typedef int fz_context ;


 int FUNC_0 (int *,int const*,int *,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, svg_device *VAR_2, const fz_path *VAR_3)
{
 FUNC_1(VAR_1, VAR_2->out, " d=\"");
 FUNC_0(VAR_1, VAR_3, &VAR_0, VAR_2->out);
 FUNC_1(VAR_1, VAR_2->out, "\"");
}
