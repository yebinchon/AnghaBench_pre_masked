
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvp_record {int dummy; } ;
struct TYPE_2__ {int num_records; int records; int fname; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int,int ,int *) ;
 int FUNC_5 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,...) ;

__attribute__((used)) static void FUNC_9(int VAR_4)
{
 FILE *VAR_5;





 FUNC_5(VAR_4);

 VAR_5 = FUNC_3(VAR_3[VAR_4].fname, "we");
 if (!VAR_5) {
  FUNC_8(VAR_1, "Failed to open file, pool: %d; error: %d %s", VAR_4,
    VAR_2, FUNC_7(VAR_2));
  FUNC_6(VAR_4);
  FUNC_0(VAR_0);
 }

 FUNC_4(VAR_3[VAR_4].records, sizeof(struct kvp_record),
    VAR_3[VAR_4].num_records, VAR_5);

 if (FUNC_2(VAR_5) || FUNC_1(VAR_5)) {
  FUNC_6(VAR_4);
  FUNC_8(VAR_1, "Failed to write file, pool: %d", VAR_4);
  FUNC_0(VAR_0);
 }

 FUNC_6(VAR_4);
}
