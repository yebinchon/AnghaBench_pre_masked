
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct FTW {int level; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,char const*) ;
 int FUNC_8 (char const*,int ) ;
 int FUNC_9 (char*,char const*,int ) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (int,int,int ) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(const char *VAR_8, const struct stat *VAR_9,
      int VAR_10, struct FTW *VAR_11)
{
 enum bpf_attach_type VAR_12;
 bool VAR_13 = 1;
 int VAR_14;

 if (VAR_10 != VAR_1)
  return 0;

 VAR_14 = FUNC_8(VAR_8, VAR_2);
 if (VAR_14 < 0) {
  FUNC_9("can't open cgroup %s: %s", VAR_8, FUNC_12(VAR_5));
  return VAR_3;
 }

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  int VAR_15 = FUNC_1(VAR_14, VAR_12);

  if (VAR_15 < 0 && VAR_5 != VAR_0) {
   FUNC_9("can't query bpf programs attached to %s: %s",
         VAR_8, FUNC_12(VAR_5));
   FUNC_0(VAR_14);
   return VAR_3;
  }
  if (VAR_15 > 0) {
   VAR_13 = 0;
   break;
  }
 }

 if (VAR_13) {
  FUNC_0(VAR_14);
  return 0;
 }

 if (VAR_6) {
  FUNC_6(VAR_7);
  FUNC_7(VAR_7, "cgroup", VAR_8);
  FUNC_4(VAR_7, "programs");
  FUNC_5(VAR_7);
 } else {
  FUNC_10("%s\n", VAR_8);
 }

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
  FUNC_11(VAR_14, VAR_12, VAR_11->level);

 if (VAR_5 == VAR_0)




  VAR_5 = 0;

 if (VAR_6) {
  FUNC_2(VAR_7);
  FUNC_3(VAR_7);
 }

 FUNC_0(VAR_14);

 return 0;
}
