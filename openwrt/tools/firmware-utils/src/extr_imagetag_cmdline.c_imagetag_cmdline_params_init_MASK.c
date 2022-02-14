
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imagetag_cmdline_params {int initialize; int check_required; int print_errors; scalar_t__ check_ambiguity; scalar_t__ override; } ;



void
FUNC_0(struct imagetag_cmdline_params *VAR_0)
{
  if (VAR_0)
    {
      VAR_0->override = 0;
      VAR_0->initialize = 1;
      VAR_0->check_required = 1;
      VAR_0->check_ambiguity = 0;
      VAR_0->print_errors = 1;
    }
}
