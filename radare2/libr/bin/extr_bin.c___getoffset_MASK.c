
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get_offset ) (int *,int,int) ;} ;
typedef TYPE_1__ RBinPlugin ;
typedef int RBinFile ;
typedef int RBin ;


 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static int FUNC_3(RBin *VAR_0, int VAR_1, int VAR_2) {
 RBinFile *VAR_3 = FUNC_0 (VAR_0);
 RBinPlugin *VAR_4 = FUNC_1 (VAR_3);
 if (VAR_4 && VAR_4->get_offset) {
  return VAR_4->get_offset (VAR_3, VAR_1, VAR_2);
 }
 return -1;
}
