
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int * file_name; } ;
typedef int SGUID ;
typedef TYPE_1__ SCV_RSDS_HEADER ;


 int FUNC_0 (TYPE_1__*,int *,int const) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static bool FUNC_2(ut8* VAR_0, int VAR_1, SCV_RSDS_HEADER* VAR_2) {
 const int VAR_3 = 4 + sizeof (SGUID) + 4;
 if (VAR_1 < VAR_3) {
  return 0;
 }
 FUNC_0 (VAR_2, VAR_0, VAR_3);
 VAR_2->file_name = (ut8*) FUNC_1 ((const char*) VAR_0 + VAR_3);
 return 1;
}
