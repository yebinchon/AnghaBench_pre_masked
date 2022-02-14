
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_device ;
struct TYPE_3__ {scalar_t__ buf; } ;
typedef TYPE_1__ gstate ;
typedef int fz_path ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int *,void*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, pdf_device *VAR_2, const fz_path *VAR_3)
{
 gstate *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_1, VAR_3, &VAR_0, (void *)VAR_4->buf);
}
