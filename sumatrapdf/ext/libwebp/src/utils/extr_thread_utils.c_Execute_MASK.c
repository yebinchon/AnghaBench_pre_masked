
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int had_error; int data2; int data1; int (* hook ) (int ,int ) ;} ;
typedef TYPE_1__ WebPWorker ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(WebPWorker* const VAR_0) {
  if (VAR_0->hook != ((void*)0)) {
    VAR_0->had_error |= !VAR_0->hook(VAR_0->data1, VAR_0->data2);
  }
}
