
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_size; int data; } ;
typedef TYPE_1__ WebPHeaderStructure ;
typedef scalar_t__ VP8StatusCode ;


 scalar_t__ FUNC_0 (int ,int ,int *,int *,int *,int*,int *,TYPE_1__* const) ;
 scalar_t__ volatile VAR_0 ;
 scalar_t__ volatile VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

VP8StatusCode FUNC_2(WebPHeaderStructure* const VAR_3) {

  volatile VP8StatusCode VAR_4;
  int VAR_5 = 0;
  FUNC_1(VAR_3 != ((void*)0));

  VAR_4 = FUNC_0(VAR_3->data, VAR_3->data_size,
                                ((void*)0), ((void*)0), ((void*)0), &VAR_5,
                                ((void*)0), VAR_3);
  if (VAR_4 == VAR_1 || VAR_4 == VAR_0) {



    if (VAR_5) {
      VAR_4 = VAR_2;
    }
  }
  return VAR_4;
}
