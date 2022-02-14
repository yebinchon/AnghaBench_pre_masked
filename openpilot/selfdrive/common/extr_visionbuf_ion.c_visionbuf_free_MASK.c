
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ion_handle_data {int handle; } ;
struct TYPE_3__ {int handle; } ;
typedef TYPE_1__ VisionBuf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct ion_handle_data*) ;
 int VAR_1 ;

void FUNC_2(const VisionBuf* VAR_2) {
  struct ion_handle_data VAR_3 = {
    .handle = VAR_2->handle,
  };
  int VAR_4 = FUNC_1(VAR_1, VAR_0, &VAR_3);
  FUNC_0(VAR_4 == 0);
}
