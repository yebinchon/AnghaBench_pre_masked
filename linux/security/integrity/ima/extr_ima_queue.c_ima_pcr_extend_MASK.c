
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int digest; } ;
struct TYPE_5__ {int nr_allocated_banks; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_1__*,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 if (!VAR_2)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_2->nr_allocated_banks; VAR_6++)
  FUNC_0(VAR_1[VAR_6].digest, VAR_3, VAR_0);

 VAR_5 = FUNC_2(VAR_2, VAR_4, VAR_1);
 if (VAR_5 != 0)
  FUNC_1("Error Communicating to TPM chip, result: %d\n", VAR_5);
 return VAR_5;
}
