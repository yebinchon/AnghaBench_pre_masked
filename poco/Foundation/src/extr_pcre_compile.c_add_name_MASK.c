
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pcre_uchar ;
struct TYPE_3__ {int names_found; int name_entry_size; scalar_t__* name_table; } ;
typedef TYPE_1__ compile_data ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int ,unsigned int) ;
 int FUNC_2 (scalar_t__ const*,scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,int ) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int ) ;

__attribute__((used)) static void
FUNC_5(compile_data *VAR_1, const pcre_uchar *VAR_2, int VAR_3,
  unsigned int VAR_4)
{
int VAR_5;
pcre_uchar *VAR_6 = VAR_1->name_table;

for (VAR_5 = 0; VAR_5 < VAR_1->names_found; VAR_5++)
  {
  int VAR_7 = FUNC_2(VAR_2, VAR_6+VAR_0, FUNC_0(VAR_3));
  if (VAR_7 == 0 && VAR_6[VAR_0+VAR_3] != 0)
    VAR_7 = -1;






  if (VAR_7 < 0)
    {
    FUNC_4(VAR_6 + VAR_1->name_entry_size, VAR_6,
      FUNC_0((VAR_1->names_found - VAR_5) * VAR_1->name_entry_size));
    break;
    }



  VAR_6 += VAR_1->name_entry_size;
  }

FUNC_1(VAR_6, 0, VAR_4);
FUNC_3(VAR_6 + VAR_0, VAR_2, FUNC_0(VAR_3));
VAR_6[VAR_0 + VAR_3] = 0;
VAR_1->names_found++;
}
