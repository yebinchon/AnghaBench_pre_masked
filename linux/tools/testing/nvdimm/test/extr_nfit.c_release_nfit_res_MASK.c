
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; } ;
struct nfit_test_resource {int buf; TYPE_1__ res; int list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct nfit_test_resource*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_3)
{
 struct nfit_test_resource *VAR_4 = VAR_3;

 FUNC_4(&VAR_2);
 FUNC_2(&VAR_4->list);
 FUNC_5(&VAR_2);

 if (FUNC_3(&VAR_4->res) >= VAR_0)
  FUNC_0(VAR_1, VAR_4->res.start,
    FUNC_3(&VAR_4->res));
 FUNC_6(VAR_4->buf);
 FUNC_1(VAR_4);
}
