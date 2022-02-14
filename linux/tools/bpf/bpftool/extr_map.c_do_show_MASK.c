
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_info {int dummy; } ;
typedef int info ;
typedef int __u32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int,struct bpf_map_info*,int*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int*,char***,struct bpf_map_info*,int*) ;
 int VAR_6 ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (int,struct bpf_map_info*) ;
 int FUNC_11 (int,struct bpf_map_info*) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(int VAR_8, char **VAR_9)
{
 struct bpf_map_info VAR_10 = {};
 __u32 VAR_11 = sizeof(VAR_10);
 __u32 VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 if (VAR_7)
  FUNC_4(&VAR_6, VAR_0);

 if (VAR_8 == 2) {
  VAR_14 = FUNC_8(&VAR_8, &VAR_9, &VAR_10, &VAR_11);
  if (VAR_14 < 0)
   return -1;

  if (VAR_4)
   return FUNC_10(VAR_14, &VAR_10);
  else
   return FUNC_11(VAR_14, &VAR_10);
 }

 if (VAR_8)
  return FUNC_0();

 if (VAR_4)
  FUNC_7(VAR_5);
 while (1) {
  VAR_13 = FUNC_2(VAR_12, &VAR_12);
  if (VAR_13) {
   if (VAR_3 == VAR_2)
    break;
   FUNC_9("can't get next map: %s%s", FUNC_12(VAR_3),
         VAR_3 == VAR_1 ? " -- kernel too old?" : "");
   break;
  }

  VAR_14 = FUNC_1(VAR_12);
  if (VAR_14 < 0) {
   if (VAR_3 == VAR_2)
    continue;
   FUNC_9("can't get map by id (%u): %s",
         VAR_12, FUNC_12(VAR_3));
   break;
  }

  VAR_13 = FUNC_3(VAR_14, &VAR_10, &VAR_11);
  if (VAR_13) {
   FUNC_9("can't get map info: %s", FUNC_12(VAR_3));
   FUNC_5(VAR_14);
   break;
  }

  if (VAR_4)
   FUNC_10(VAR_14, &VAR_10);
  else
   FUNC_11(VAR_14, &VAR_10);
 }
 if (VAR_4)
  FUNC_6(VAR_5);

 return VAR_3 == VAR_2 ? 0 : -1;
}
