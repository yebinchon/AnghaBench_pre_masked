
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sections_hdrs; } ;
typedef TYPE_1__ SPEStream ;
typedef int SIMAGE_SECTION_HEADER ;
typedef int RListIter ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

void FUNC_5(void *VAR_0)
{
 SPEStream *VAR_1 = (SPEStream *) VAR_0;
 SIMAGE_SECTION_HEADER *VAR_2 = 0;
 RListIter *VAR_3 = 0;

 VAR_3 = FUNC_4 (VAR_1->sections_hdrs);
 while (FUNC_3 (VAR_3)) {
  VAR_2 = (SIMAGE_SECTION_HEADER *) FUNC_2 (VAR_3);
  FUNC_0 (VAR_2);
 }
 FUNC_1 (VAR_1->sections_hdrs);
}
