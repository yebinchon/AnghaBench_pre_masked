
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pdxf; } ;
typedef TYPE_2__ parse_buffer ;
struct TYPE_6__ {int nb_xtemplates; int * xtemplates; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;

BOOL FUNC_6(parse_buffer * VAR_5, BOOL VAR_6)
{
  while (FUNC_3(VAR_5) != VAR_1)
  {
    if (VAR_6 && (FUNC_3(VAR_5) != VAR_2))
      return VAR_3;
    if (!FUNC_5(VAR_5))
    {
      FUNC_2("Template is not correct\n");
      return VAR_0;
    }
    else
    {
      FUNC_0("Template successfully parsed:\n");
      if (FUNC_1(VAR_4))
        FUNC_4(VAR_5->pdxf->xtemplates, &VAR_5->pdxf->xtemplates[VAR_5->pdxf->nb_xtemplates - 1]);
    }
  }
  return VAR_3;
}
