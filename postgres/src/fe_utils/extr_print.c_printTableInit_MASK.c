
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int printTableOpt ;
struct TYPE_3__ {char const* title; int ncolumns; int nrows; scalar_t__ cellsadded; void* aligns; void* align; int * footers; int * footer; void* cells; void* cell; void* headers; void* header; int * cellmustfree; int const* opt; } ;
typedef TYPE_1__ printTableContent ;


 void* FUNC_0 (int const) ;

void
FUNC_1(printTableContent *const VAR_0, const printTableOpt *VAR_1,
      const char *VAR_2, const int VAR_3, const int VAR_4)
{
 VAR_0->opt = VAR_1;
 VAR_0->title = VAR_2;
 VAR_0->ncolumns = VAR_3;
 VAR_0->nrows = VAR_4;

 VAR_0->headers = FUNC_0((VAR_3 + 1) * sizeof(*VAR_0->headers));

 VAR_0->cells = FUNC_0((VAR_3 * VAR_4 + 1) * sizeof(*VAR_0->cells));

 VAR_0->cellmustfree = ((void*)0);
 VAR_0->footers = ((void*)0);

 VAR_0->aligns = FUNC_0((VAR_3 + 1) * sizeof(*VAR_0->align));

 VAR_0->header = VAR_0->headers;
 VAR_0->cell = VAR_0->cells;
 VAR_0->footer = VAR_0->footers;
 VAR_0->align = VAR_0->aligns;
 VAR_0->cellsadded = 0;
}
