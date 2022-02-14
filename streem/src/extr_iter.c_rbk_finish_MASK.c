
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rbk_data {int tbl; } ;
typedef int strm_value ;
struct TYPE_4__ {struct rbk_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef scalar_t__ khiter_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_7(strm_stream* VAR_1, strm_value VAR_2)
{
  struct rbk_data *VAR_3 = VAR_1->data;
  khiter_t VAR_4;

  for (VAR_4=FUNC_0(VAR_3->tbl); VAR_4!=FUNC_1(VAR_3->tbl); VAR_4++) {
    if (FUNC_2(VAR_3->tbl, VAR_4)) {
      strm_value VAR_5[2];

      VAR_5[0] = FUNC_3(VAR_3->tbl, VAR_4);
      VAR_5[1] = FUNC_4(VAR_3->tbl, VAR_4);
      FUNC_6(VAR_1, FUNC_5(VAR_5, 2), ((void*)0));
    }
  }
  return VAR_0;
}
