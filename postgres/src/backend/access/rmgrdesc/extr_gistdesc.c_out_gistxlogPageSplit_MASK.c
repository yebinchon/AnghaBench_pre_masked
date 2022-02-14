
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int npage; } ;
typedef TYPE_1__ gistxlogPageSplit ;
typedef int StringInfo ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_1(StringInfo VAR_0, gistxlogPageSplit *VAR_1)
{
 FUNC_0(VAR_0, "page_split: splits to %d pages",
      VAR_1->npage);
}
