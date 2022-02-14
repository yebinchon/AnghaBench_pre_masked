
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* (* get_name ) (int *,int,int,int) ;} ;
typedef TYPE_1__ RBinPlugin ;
typedef int RBinFile ;
typedef int RBin ;


 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 char const* FUNC_2 (int *,int,int,int) ;

__attribute__((used)) static const char *FUNC_3(RBin *VAR_0, int VAR_1, int VAR_2, bool VAR_3) {
 RBinFile *VAR_4 = FUNC_0 (VAR_0);
 RBinPlugin *VAR_5 = FUNC_1 (VAR_4);
 if (VAR_5 && VAR_5->get_name) {
  return VAR_5->get_name (VAR_4, VAR_1, VAR_2, VAR_3);
 }
 return ((void*)0);
}
