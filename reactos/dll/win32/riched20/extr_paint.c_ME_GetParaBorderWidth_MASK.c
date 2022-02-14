
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dble; } ;
typedef int ME_Context ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int const*,int) ;
 TYPE_1__* VAR_0 ;

int FUNC_3(const ME_Context* VAR_1, int VAR_2)
{
  int VAR_3 = (VAR_2 >> 8) & 0xF;
  int VAR_4;

  if (VAR_3 >= FUNC_0(VAR_0))
  {
      FUNC_1("Unsupported border value %d\n", VAR_3);
      return 0;
  }
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  if (VAR_0[VAR_3].dble) VAR_4 = VAR_4 * 2 + 1;
  return VAR_4;
}
