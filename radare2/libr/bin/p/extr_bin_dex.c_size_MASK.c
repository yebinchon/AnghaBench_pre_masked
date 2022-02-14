
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef scalar_t__ ut32 ;
struct TYPE_3__ {int buf; } ;
typedef TYPE_1__ RBinFile ;


 int FUNC_0 (int ,int,int *,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static ut64 FUNC_2(RBinFile *VAR_0) {
 ut8 VAR_1[sizeof (ut32)] = {0};

 int VAR_2 = FUNC_0 (VAR_0->buf, 108, VAR_1, 4);
 if (VAR_2 != 4) {
  return 0;
 }
 ut32 VAR_3 = FUNC_1 (VAR_1);
 VAR_2 = FUNC_0 (VAR_0->buf, 104, VAR_1, 4);
 if (VAR_2 != 4) {
  return 0;
 }
 return VAR_3 + FUNC_1 (VAR_1);
}
