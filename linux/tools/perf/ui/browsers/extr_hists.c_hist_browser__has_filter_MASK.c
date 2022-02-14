
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_browser {scalar_t__ c2c_filter; scalar_t__ min_pcnt; int hists; } ;
struct TYPE_2__ {scalar_t__ has_filter; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct hist_browser *VAR_1)
{
 return FUNC_0(VAR_1->hists) || VAR_1->min_pcnt || VAR_0.has_filter || VAR_1->c2c_filter;
}
