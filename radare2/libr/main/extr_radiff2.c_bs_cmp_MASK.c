
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int string; } ;
typedef TYPE_1__ RBinString ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(const RBinString *VAR_0, const RBinString *VAR_1) {
 int VAR_2 = VAR_0->length - VAR_1->length;
 return VAR_2 == 0? FUNC_0 (VAR_0->string, VAR_1->string, VAR_0->length): VAR_2;
}
