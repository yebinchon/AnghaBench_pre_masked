
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvp_record {int dummy; } ;
struct TYPE_2__ {char* fname; int fd; int num_blocks; scalar_t__ num_records; int * records; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_10 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,char*,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_11;
 char *VAR_12;
 int VAR_13;
 int VAR_14 = sizeof(struct kvp_record) * VAR_0;

 if (FUNC_0(VAR_3, VAR_2)) {
  if (FUNC_4(VAR_3, 0755 )) {
   FUNC_8(VAR_5, "Failed to create '%s'; error: %d %s", VAR_3,
     VAR_9, FUNC_7(VAR_9));
   FUNC_1(VAR_1);
  }
 }

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_12 = VAR_10[VAR_13].fname;
  FUNC_6(VAR_12, "%s/.kvp_pool_%d", VAR_3, VAR_13);
  VAR_11 = FUNC_5(VAR_12, VAR_8 | VAR_7 | VAR_6, 0644 );

  if (VAR_11 == -1)
   return 1;

  VAR_10[VAR_13].fd = VAR_11;
  VAR_10[VAR_13].num_blocks = 1;
  VAR_10[VAR_13].records = FUNC_3(VAR_14);
  if (VAR_10[VAR_13].records == ((void*)0))
   return 1;
  VAR_10[VAR_13].num_records = 0;
  FUNC_2(VAR_13);
 }

 return 0;
}
