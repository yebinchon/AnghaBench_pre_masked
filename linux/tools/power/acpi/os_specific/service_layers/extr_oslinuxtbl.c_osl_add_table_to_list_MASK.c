
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct osl_table_info {scalar_t__ instance; struct osl_table_info* next; int signature; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct osl_table_info* FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*,char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 struct osl_table_info* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static acpi_status FUNC_4(char *VAR_7, u32 VAR_8)
{
 struct osl_table_info *VAR_9;
 struct osl_table_info *VAR_10;
 u32 VAR_11 = 0;
 u8 VAR_12 = VAR_2;

 VAR_9 = FUNC_2(1, sizeof(struct osl_table_info));
 if (!VAR_9) {
  return (VAR_0);
 }

 FUNC_1(VAR_9->signature, VAR_7);

 if (!VAR_5) {
  VAR_5 = VAR_9;
 } else {
  VAR_10 = VAR_5;
  while (1) {
   if (FUNC_0(VAR_10->signature, VAR_7)) {
    if (VAR_10->instance == VAR_8) {
     VAR_12 = VAR_3;
    }
    if (VAR_10->instance >= VAR_11) {
     VAR_11 = VAR_10->instance + 1;
    }
   }

   if (!VAR_10->next) {
    break;
   }
   VAR_10 = VAR_10->next;
  }
  VAR_10->next = VAR_9;
 }

 if (VAR_12) {
  if (VAR_8) {
   FUNC_3(VAR_6,
    "%4.4s: Warning unmatched table instance %ld, expected %ld\n",
    VAR_7, VAR_8, VAR_11);
  }
  VAR_8 = VAR_11;
 }

 VAR_9->instance = VAR_8;
 VAR_4++;

 return (VAR_1);
}
