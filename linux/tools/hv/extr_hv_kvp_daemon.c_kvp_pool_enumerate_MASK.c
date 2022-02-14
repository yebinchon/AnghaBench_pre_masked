
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvp_record {int value; int key; } ;
typedef int __u8 ;
struct TYPE_2__ {int num_records; struct kvp_record* records; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(int VAR_1, int VAR_2, __u8 *VAR_3, int VAR_4,
    __u8 *VAR_5, int VAR_6)
{
 struct kvp_record *VAR_7;




 FUNC_0(VAR_1);
 VAR_7 = VAR_0[VAR_1].records;

 if (VAR_2 >= VAR_0[VAR_1].num_records) {
  return 1;
 }

 FUNC_1(VAR_3, VAR_7[VAR_2].key, VAR_4);
 FUNC_1(VAR_5, VAR_7[VAR_2].value, VAR_6);
 return 0;
}
