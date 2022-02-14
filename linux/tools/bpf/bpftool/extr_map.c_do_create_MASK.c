
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_create_map_attr {void* name; scalar_t__ map_ifindex; int map_flags; int max_entries; int value_size; int key_size; scalar_t__ map_type; int * member_0; } ;


 void* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bpf_create_map_attr*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (int*,char***,int *,char*) ;
 int FUNC_12 () ;
 char* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(int VAR_3, char **VAR_4)
{
 struct bpf_create_map_attr VAR_5 = { ((void*)0), };
 const char *VAR_6;
 int VAR_7, VAR_8;

 if (!FUNC_2(7))
  return -1;
 VAR_6 = FUNC_0();

 while (VAR_3) {
  if (!FUNC_2(2))
   return -1;

  if (FUNC_7(*VAR_4, "type")) {
   FUNC_1();

   if (VAR_5.map_type) {
    FUNC_10("map type already specified");
    return -1;
   }

   VAR_5.map_type = FUNC_9(*VAR_4);
   if ((int)VAR_5.map_type < 0) {
    FUNC_10("unrecognized map type: %s", *VAR_4);
    return -1;
   }
   FUNC_1();
  } else if (FUNC_7(*VAR_4, "name")) {
   FUNC_1();
   VAR_5.name = FUNC_0();
  } else if (FUNC_7(*VAR_4, "key")) {
   if (FUNC_11(&VAR_3, &VAR_4, &VAR_5.key_size,
       "key size"))
    return -1;
  } else if (FUNC_7(*VAR_4, "value")) {
   if (FUNC_11(&VAR_3, &VAR_4, &VAR_5.value_size,
       "value size"))
    return -1;
  } else if (FUNC_7(*VAR_4, "entries")) {
   if (FUNC_11(&VAR_3, &VAR_4, &VAR_5.max_entries,
       "max entries"))
    return -1;
  } else if (FUNC_7(*VAR_4, "flags")) {
   if (FUNC_11(&VAR_3, &VAR_4, &VAR_5.map_flags,
       "flags"))
    return -1;
  } else if (FUNC_7(*VAR_4, "dev")) {
   FUNC_1();

   if (VAR_5.map_ifindex) {
    FUNC_10("offload device already specified");
    return -1;
   }

   VAR_5.map_ifindex = FUNC_6(*VAR_4);
   if (!VAR_5.map_ifindex) {
    FUNC_10("unrecognized netdevice '%s': %s",
          *VAR_4, FUNC_13(VAR_0));
    return -1;
   }
   FUNC_1();
  } else {
   FUNC_10("unknown arg %s", *VAR_4);
   return -1;
  }
 }

 if (!VAR_5.name) {
  FUNC_10("map name not specified");
  return -1;
 }

 FUNC_12();

 VAR_8 = FUNC_3(&VAR_5);
 if (VAR_8 < 0) {
  FUNC_10("map create failed: %s", FUNC_13(VAR_0));
  return -1;
 }

 VAR_7 = FUNC_5(VAR_8, VAR_6);
 FUNC_4(VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_1)
  FUNC_8(VAR_2);
 return 0;
}
