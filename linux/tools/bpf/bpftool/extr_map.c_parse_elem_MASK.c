
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_info {int type; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bpf_map_info*,void*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int*,char***) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 char** FUNC_7 (char**,char*,void*,int) ;
 int FUNC_8 (int*,char***) ;

__attribute__((used)) static int FUNC_9(char **VAR_3, struct bpf_map_info *VAR_4,
        void *VAR_5, void *VAR_6, __u32 VAR_7, __u32 VAR_8,
        __u32 *VAR_9, __u32 **VAR_10)
{
 if (!*VAR_3) {
  if (!VAR_5 && !VAR_6)
   return 0;
  FUNC_5("did not find %s", VAR_5 ? "key" : "value");
  return -1;
 }

 if (FUNC_1(*VAR_3, "key")) {
  if (!VAR_5) {
   if (VAR_7)
    FUNC_5("duplicate key");
   else
    FUNC_5("unnecessary key");
   return -1;
  }

  VAR_3 = FUNC_7(VAR_3 + 1, "key", VAR_5, VAR_7);
  if (!VAR_3)
   return -1;

  return FUNC_9(VAR_3, VAR_4, ((void*)0), VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10);
 } else if (FUNC_1(*VAR_3, "value")) {
  int VAR_11;

  if (!VAR_6) {
   if (VAR_8)
    FUNC_5("duplicate value");
   else
    FUNC_5("unnecessary value");
   return -1;
  }

  VAR_3++;

  if (FUNC_2(VAR_4->type)) {
   int VAR_12 = 2;

   if (VAR_8 != 4) {
    FUNC_5("value smaller than 4B for map in map?");
    return -1;
   }
   if (!VAR_3[0] || !VAR_3[1]) {
    FUNC_5("not enough value arguments for map in map");
    return -1;
   }

   VAR_11 = FUNC_4(&VAR_12, &VAR_3);
   if (VAR_11 < 0)
    return -1;

   *VAR_10 = VAR_6;
   **VAR_10 = VAR_11;
  } else if (FUNC_3(VAR_4->type)) {
   int VAR_13 = 2;

   if (VAR_8 != 4) {
    FUNC_5("value smaller than 4B for map of progs?");
    return -1;
   }
   if (!VAR_3[0] || !VAR_3[1]) {
    FUNC_5("not enough value arguments for map of progs");
    return -1;
   }
   if (FUNC_1(*VAR_3, "id"))
    FUNC_6("Warning: updating program array via MAP_ID, make sure this map is kept open\n"
           "         by some process or pinned otherwise update will be lost");

   VAR_11 = FUNC_8(&VAR_13, &VAR_3);
   if (VAR_11 < 0)
    return -1;

   *VAR_10 = VAR_6;
   **VAR_10 = VAR_11;
  } else {
   VAR_3 = FUNC_7(VAR_3, "value", VAR_6, VAR_8);
   if (!VAR_3)
    return -1;

   FUNC_0(VAR_4, VAR_6);
  }

  return FUNC_9(VAR_3, VAR_4, VAR_5, ((void*)0), VAR_7, VAR_8,
      VAR_9, ((void*)0));
 } else if (FUNC_1(*VAR_3, "any") || FUNC_1(*VAR_3, "noexist") ||
     FUNC_1(*VAR_3, "exist")) {
  if (!VAR_9) {
   FUNC_5("flags specified multiple times: %s", *VAR_3);
   return -1;
  }

  if (FUNC_1(*VAR_3, "any"))
   *VAR_9 = VAR_0;
  else if (FUNC_1(*VAR_3, "noexist"))
   *VAR_9 = VAR_2;
  else if (FUNC_1(*VAR_3, "exist"))
   *VAR_9 = VAR_1;

  return FUNC_9(VAR_3 + 1, VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8, ((void*)0), VAR_10);
 }

 FUNC_5("expected key or value, got: %s", *VAR_3);
 return -1;
}
