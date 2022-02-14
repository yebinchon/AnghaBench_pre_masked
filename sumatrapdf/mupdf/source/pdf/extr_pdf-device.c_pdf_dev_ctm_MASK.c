
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_device ;
struct TYPE_3__ {int buf; int ctm; } ;
typedef TYPE_1__ gstate ;
typedef int fz_matrix ;
typedef int fz_context ;
typedef int ctm ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, pdf_device *VAR_1, fz_matrix VAR_2)
{
 fz_matrix VAR_3;
 gstate *VAR_4 = FUNC_0(VAR_1);

 if (FUNC_4(&VAR_4->ctm, &VAR_2, sizeof(VAR_2)) == 0)
  return;
 VAR_3 = FUNC_3(VAR_4->ctm);
 VAR_3 = FUNC_2(VAR_2, VAR_3);
 VAR_4->ctm = VAR_2;
 FUNC_1(VAR_0, VAR_4->buf, "%M cm\n", &VAR_3);
}
