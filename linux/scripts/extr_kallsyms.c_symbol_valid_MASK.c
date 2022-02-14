
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sym_entry {scalar_t__ addr; scalar_t__ sym; } ;
struct TYPE_4__ {scalar_t__ end; char* end_sym; } ;
struct TYPE_3__ {scalar_t__ end; char* end_sym; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (struct sym_entry*,int ,int ) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct sym_entry *VAR_4)
{





 static char *VAR_5[] = {
  "kallsyms_addresses",
  "kallsyms_offsets",
  "kallsyms_relative_base",
  "kallsyms_num_syms",
  "kallsyms_names",
  "kallsyms_markers",
  "kallsyms_token_table",
  "kallsyms_token_index",


  "_SDA_BASE_",
  "_SDA2_BASE_",
  ((void*)0) };

 static char *VAR_6[] = {
  "__crc_",
  "__efistub_",
  ((void*)0) };

 static char *VAR_7[] = {
  "_veneer",
  "_from_arm",
  "_from_thumb",
  ((void*)0) };

 int VAR_8;
 char *VAR_9 = (char *)VAR_4->sym + 1;



 if (!VAR_0) {
  if (FUNC_4(VAR_4, VAR_3,
        FUNC_0(VAR_3)) == 0)
   return 0;






  if ((VAR_4->addr == VAR_2->end &&
    FUNC_1(VAR_9,
           VAR_2->end_sym)) ||
      (VAR_4->addr == VAR_1->end &&
    FUNC_1(VAR_9,
           VAR_1->end_sym)))
   return 0;
 }


 for (VAR_8 = 0; VAR_5[VAR_8]; VAR_8++)
  if (FUNC_1(VAR_9, VAR_5[VAR_8]) == 0)
   return 0;

 for (VAR_8 = 0; VAR_6[VAR_8]; VAR_8++) {
  int VAR_10 = FUNC_2(VAR_6[VAR_8]);

  if (VAR_10 <= FUNC_2(VAR_9) &&
      FUNC_3(VAR_9, VAR_6[VAR_8], VAR_10) == 0)
   return 0;
 }

 for (VAR_8 = 0; VAR_7[VAR_8]; VAR_8++) {
  int VAR_11 = FUNC_2(VAR_9) - FUNC_2(VAR_7[VAR_8]);

  if (VAR_11 >= 0 && FUNC_1(VAR_9 + VAR_11, VAR_7[VAR_8]) == 0)
   return 0;
 }

 return 1;
}
