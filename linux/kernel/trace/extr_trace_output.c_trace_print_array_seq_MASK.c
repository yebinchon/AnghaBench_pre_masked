
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct trace_seq {int dummy; } ;


 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,...) ;
 int FUNC_2 (struct trace_seq*,char) ;

const char *
FUNC_3(struct trace_seq *VAR_0, const void *VAR_1, int VAR_2,
        size_t VAR_3)
{
 const char *VAR_4 = FUNC_0(VAR_0);
 const char *VAR_5 = "";
 void *VAR_6 = (void *)VAR_1;
 size_t VAR_7 = VAR_2 * VAR_3;

 FUNC_2(VAR_0, '{');

 while (VAR_6 < VAR_1 + VAR_7) {
  switch (VAR_3) {
  case 1:
   FUNC_1(VAR_0, "%s0x%x", VAR_5,
      *(u8 *)VAR_6);
   break;
  case 2:
   FUNC_1(VAR_0, "%s0x%x", VAR_5,
      *(u16 *)VAR_6);
   break;
  case 4:
   FUNC_1(VAR_0, "%s0x%x", VAR_5,
      *(u32 *)VAR_6);
   break;
  case 8:
   FUNC_1(VAR_0, "%s0x%llx", VAR_5,
      *(u64 *)VAR_6);
   break;
  default:
   FUNC_1(VAR_0, "BAD SIZE:%zu 0x%x", VAR_3,
      *(u8 *)VAR_6);
   VAR_3 = 1;
  }
  VAR_5 = ",";
  VAR_6 += VAR_3;
 }

 FUNC_2(VAR_0, '}');
 FUNC_2(VAR_0, 0);

 return VAR_4;
}
