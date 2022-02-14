
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int output; int input; } ;
typedef TYPE_1__ WebPDecoderConfig ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

int FUNC_4(WebPDecoderConfig* VAR_1,
                                  int VAR_2) {
  if (FUNC_1(VAR_2, VAR_0)) {
    return 0;
  }
  if (VAR_1 == ((void*)0)) {
    return 0;
  }
  FUNC_3(VAR_1, 0, sizeof(*VAR_1));
  FUNC_0(&VAR_1->input);
  FUNC_2(&VAR_1->output);
  return 1;
}
