
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dshash_table_item ;
struct TYPE_5__ {int key_size; scalar_t__ entry_size; } ;
struct TYPE_6__ {TYPE_1__ params; int area; } ;
typedef TYPE_2__ dshash_table ;
typedef int dsa_pointer ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int *,int *) ;
 int FUNC_5 (int ,void const*,int ) ;

__attribute__((used)) static dshash_table_item *
FUNC_6(dshash_table *VAR_0,
       const void *VAR_1,
       dsa_pointer *VAR_2)
{
 dsa_pointer VAR_3;
 dshash_table_item *VAR_4;

 VAR_3 = FUNC_2(VAR_0->area,
        VAR_0->params.entry_size +
        FUNC_1(sizeof(dshash_table_item)));
 VAR_4 = FUNC_3(VAR_0->area, VAR_3);
 FUNC_5(FUNC_0(VAR_4), VAR_1, VAR_0->params.key_size);
 FUNC_4(VAR_0, VAR_3, VAR_4, VAR_2);
 return VAR_4;
}
