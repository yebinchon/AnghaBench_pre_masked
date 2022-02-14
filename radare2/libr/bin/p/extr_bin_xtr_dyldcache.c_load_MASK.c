
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cur; scalar_t__ file; } ;
struct TYPE_4__ {scalar_t__ xtr_obj; scalar_t__ file; } ;
typedef TYPE_2__ RBin ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(RBin *VAR_0) {
 if (!VAR_0 || !VAR_0->cur) {
     return 0;
 }
 if (!VAR_0->cur->xtr_obj) {
  VAR_0->cur->xtr_obj = FUNC_0 (VAR_0->cur->file);
 }
 if (!VAR_0->file) {
     VAR_0->file = VAR_0->cur->file;
 }
 return VAR_0->cur->xtr_obj? 1 : 0;
}
