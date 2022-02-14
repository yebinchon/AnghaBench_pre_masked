
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct audit_buffer {int dummy; } ;


 int FUNC_0 (struct audit_buffer*,char const*,char const* const) ;

void FUNC_1(struct audit_buffer *VAR_0, const char * const *VAR_1,
    u32 VAR_2)
{
 const char *VAR_3 = "%s";
 unsigned int VAR_4, VAR_5 = 1;
 bool VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < 32; VAR_5 <<= 1, VAR_4++) {
  if (VAR_2 & VAR_5) {
   FUNC_0(VAR_0, VAR_3, VAR_1[VAR_4]);
   if (!VAR_6) {
    VAR_6 = 1;
    VAR_3 = " %s";
   }
  }
 }
}
