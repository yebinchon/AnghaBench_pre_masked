
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int VAR_0 ;
 char* FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*,int ) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,char*,char*,char*,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (int,int,int ) ;

__attribute__((used)) static int FUNC_11(int VAR_6, char **VAR_7)
{
 enum bpf_attach_type VAR_8;
 const char *VAR_9;
 int VAR_10;
 int VAR_11 = -1;

 VAR_5 = 0;

 if (!FUNC_2(1))
  return -1;
 VAR_9 = FUNC_0();

 while (VAR_6) {
  if (FUNC_4(*VAR_7, "effective")) {
   if (VAR_5 & VAR_0) {
    FUNC_8("duplicated argument: %s", *VAR_7);
    return -1;
   }
   VAR_5 |= VAR_0;
   FUNC_1();
  } else {
   FUNC_8("expected no more arguments, 'effective', got: '%s'?",
         *VAR_7);
   return -1;
  }
 }

 VAR_10 = FUNC_7(VAR_9, VAR_1);
 if (VAR_10 < 0) {
  FUNC_8("can't open cgroup %s", VAR_9);
  goto exit;
 }

 if (VAR_3)
  FUNC_6(VAR_4);
 else
  FUNC_9("%-8s %-15s %-15s %-15s\n", "ID", "AttachType",
         "AttachFlags", "Name");

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {






  if (FUNC_10(VAR_10, VAR_8, 0) == 0)
   VAR_11 = 0;
 }

 if (VAR_3)
  FUNC_5(VAR_4);

 FUNC_3(VAR_10);
exit:
 return VAR_11;
}
