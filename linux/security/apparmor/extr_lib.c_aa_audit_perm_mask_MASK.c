
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct audit_buffer {int dummy; } ;
typedef int str ;


 int FUNC_0 (struct audit_buffer*,char const* const*,int) ;
 int FUNC_1 (char*,int,char const*,int) ;
 int FUNC_2 (struct audit_buffer*,char*,...) ;

void FUNC_3(struct audit_buffer *VAR_0, u32 VAR_1, const char *VAR_2,
   u32 VAR_3, const char * const *VAR_4, u32 VAR_5)
{
 char VAR_6[33];

 FUNC_2(VAR_0, "\"");
 if ((VAR_1 & VAR_3) && VAR_2) {
  FUNC_1(VAR_6, sizeof(VAR_6), VAR_2, VAR_1 & VAR_3);
  VAR_1 &= ~VAR_3;
  FUNC_2(VAR_0, "%s", VAR_6);
  if (VAR_1 & VAR_5)
   FUNC_2(VAR_0, " ");
 }
 if ((VAR_1 & VAR_5) && VAR_4)
  FUNC_0(VAR_0, VAR_4, VAR_1 & VAR_5);
 FUNC_2(VAR_0, "\"");
}
