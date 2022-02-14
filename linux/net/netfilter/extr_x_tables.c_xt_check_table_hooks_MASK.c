
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_table_info {int* hook_entry; int* underflow; } ;


 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,char const*,unsigned int) ;

int FUNC_3(const struct xt_table_info *VAR_1, unsigned int VAR_2)
{
 const char *VAR_3 = "unsorted underflow";
 unsigned int VAR_4, VAR_5, VAR_6;
 bool VAR_7 = 0;

 FUNC_1(FUNC_0(VAR_1->hook_entry) != FUNC_0(VAR_1->underflow));

 VAR_6 = 0;
 VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->hook_entry); VAR_4++) {
  if (!(VAR_2 & (1 << VAR_4)))
   continue;

  if (VAR_1->hook_entry[VAR_4] == 0xFFFFFFFF)
   return -VAR_0;
  if (VAR_1->underflow[VAR_4] == 0xFFFFFFFF)
   return -VAR_0;

  if (VAR_7) {
   if (VAR_5 > VAR_1->underflow[VAR_4])
    goto error;

   if (VAR_5 == VAR_1->underflow[VAR_4]) {
    VAR_3 = "duplicate underflow";
    goto error;
   }
   if (VAR_6 > VAR_1->hook_entry[VAR_4]) {
    VAR_3 = "unsorted entry";
    goto error;
   }
   if (VAR_6 == VAR_1->hook_entry[VAR_4]) {
    VAR_3 = "duplicate entry";
    goto error;
   }
  }
  VAR_6 = VAR_1->hook_entry[VAR_4];
  VAR_5 = VAR_1->underflow[VAR_4];
  VAR_7 = 1;
 }

 return 0;
error:
 FUNC_2("%s at hook %d\n", VAR_3, VAR_4);
 return -VAR_0;
}
