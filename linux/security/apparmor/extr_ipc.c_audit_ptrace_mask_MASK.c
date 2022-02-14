
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct audit_buffer {int dummy; } ;






 int FUNC_0 (struct audit_buffer*,char*) ;

__attribute__((used)) static void FUNC_1(struct audit_buffer *VAR_0, u32 VAR_1)
{
 switch (VAR_1) {
 case 129:
  FUNC_0(VAR_0, "read");
  break;
 case 128:
  FUNC_0(VAR_0, "trace");
  break;
 case 131:
  FUNC_0(VAR_0, "readby");
  break;
 case 130:
  FUNC_0(VAR_0, "tracedby");
  break;
 }
}
