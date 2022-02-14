
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvp_record {int dummy; } ;
struct TYPE_2__ {int num_blocks; size_t num_records; struct kvp_record* records; int fname; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (struct kvp_record*,int,int,int *) ;
 int FUNC_6 (int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 (int) ;
 struct kvp_record* FUNC_8 (struct kvp_record*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;

__attribute__((used)) static void FUNC_11(int VAR_5)
{
 FILE *VAR_6;
 size_t VAR_7 = 0;
 struct kvp_record *VAR_8 = VAR_4[VAR_5].records;
 struct kvp_record *VAR_9;
 int VAR_10 = VAR_4[VAR_5].num_blocks;
 int VAR_11 = sizeof(struct kvp_record) * VAR_0;

 FUNC_6(VAR_5);

 VAR_6 = FUNC_4(VAR_4[VAR_5].fname, "re");
 if (!VAR_6) {
  FUNC_10(VAR_2, "Failed to open file, pool: %d; error: %d %s", VAR_5,
    VAR_3, FUNC_9(VAR_3));
  FUNC_7(VAR_5);
  FUNC_0(VAR_1);
 }
 for (;;) {
  VAR_9 = &VAR_8[VAR_7];
  VAR_7 += FUNC_5(VAR_9, sizeof(struct kvp_record),
    VAR_0 * VAR_10 - VAR_7,
    VAR_6);

  if (FUNC_3(VAR_6)) {
   FUNC_10(VAR_2,
    "Failed to read file, pool: %d; error: %d %s",
     VAR_5, VAR_3, FUNC_9(VAR_3));
   FUNC_7(VAR_5);
   FUNC_0(VAR_1);
  }

  if (!FUNC_2(VAR_6)) {



   VAR_10++;
   VAR_8 = FUNC_8(VAR_8, VAR_11 * VAR_10);

   if (VAR_8 == ((void*)0)) {
    FUNC_10(VAR_2, "malloc failed");
    FUNC_7(VAR_5);
    FUNC_0(VAR_1);
   }
   continue;
  }
  break;
 }

 VAR_4[VAR_5].num_blocks = VAR_10;
 VAR_4[VAR_5].records = VAR_8;
 VAR_4[VAR_5].num_records = VAR_7;

 FUNC_1(VAR_6);
 FUNC_7(VAR_5);
}
