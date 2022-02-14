
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int * file_name; } ;
typedef TYPE_1__ SCV_NB10_HEADER ;


 int FUNC_0 (TYPE_1__*,int *,int const) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(ut8* VAR_0, int VAR_1, SCV_NB10_HEADER* VAR_2) {
 const int VAR_3 = 16;
 if (VAR_1 < VAR_3) {
  return;
 }
 FUNC_0 (VAR_2, VAR_0, VAR_3);
 VAR_2->file_name = (ut8*) FUNC_1 ((const char*) VAR_0 + VAR_3);
}
