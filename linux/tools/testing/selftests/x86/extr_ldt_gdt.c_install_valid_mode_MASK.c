
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct user_desc {int limit; scalar_t__ seg_32bit; scalar_t__ entry_number; scalar_t__ limit_in_pages; } ;
typedef int desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int,int,int,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,...) ;

__attribute__((used)) static bool FUNC_3(const struct user_desc *VAR_6, uint32_t VAR_7,
          bool VAR_8, bool VAR_9)
{
 struct user_desc VAR_10 = *VAR_6;
 int VAR_11;

 if (!VAR_9) {


  return 0;

  if (!VAR_4)
   return 0;
  VAR_10.entry_number = VAR_4;

  VAR_11 = FUNC_2(VAR_2, &VAR_10);
 } else {
  VAR_11 = FUNC_2(VAR_1, VAR_8 ? 1 : 0x11,
         &VAR_10, sizeof(VAR_10));

  if (VAR_11 < -1)
   VAR_3 = -VAR_11;

  if (VAR_11 != 0 && VAR_3 == VAR_0) {
   FUNC_1("[OK]\tmodify_ldt returned -ENOSYS\n");
   return 0;
  }
 }

 if (VAR_11 == 0) {
  uint32_t VAR_12 = VAR_10.limit;
  if (VAR_10.limit_in_pages)
   VAR_12 = (VAR_12 << 12) + 4095;
  FUNC_0(VAR_10.entry_number, VAR_9, VAR_7, VAR_12, 1);
  return 1;
 } else {
  if (VAR_10.seg_32bit) {
   FUNC_1("[FAIL]\tUnexpected %s failure %d\n",
          VAR_9 ? "modify_ldt" : "set_thread_area",
          VAR_3);
   VAR_5++;
   return 0;
  } else {
   FUNC_1("[OK]\t%s rejected 16 bit segment\n",
          VAR_9 ? "modify_ldt" : "set_thread_area");
   return 0;
  }
 }
}
