
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int,char const*,char const**) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int,char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static int FUNC_14( lua_State* VAR_11 )
{
  const char* VAR_12[] = {"hw", "sw_version", "build_config", "legacy", ((void*)0)};
  int VAR_13 = FUNC_3 (VAR_11, 1, VAR_12[3], VAR_12);

  switch (VAR_13) {
    case 0: {
      FUNC_4 (VAR_11, 0, 5);
      int VAR_14 = FUNC_5(VAR_11);
      FUNC_7(VAR_11, FUNC_13());
      FUNC_10(VAR_11, VAR_14, "chip_id");
      FUNC_7(VAR_11, FUNC_12());
      FUNC_10(VAR_11, VAR_14, "flash_id");
      FUNC_7(VAR_11, FUNC_1() / 1024);
      FUNC_10(VAR_11, VAR_14, "flash_size");
      FUNC_7(VAR_11, FUNC_0());
      FUNC_10(VAR_11, VAR_14, "flash_mode");
      FUNC_7(VAR_11, FUNC_2());
      FUNC_10(VAR_11, VAR_14, "flash_speed");
      return 1;
    }
    case 1: {
      FUNC_4 (VAR_11, 0, 7);
      int VAR_15 = FUNC_5(VAR_11);
      FUNC_7(VAR_11, VAR_8);
      FUNC_10(VAR_11, VAR_15, "node_version_major");
      FUNC_7(VAR_11, VAR_9);
      FUNC_10(VAR_11, VAR_15, "node_version_minor");
      FUNC_7(VAR_11, VAR_10);
      FUNC_10(VAR_11, VAR_15, "node_version_revision");
      FUNC_9(VAR_11, VAR_0);
      FUNC_10(VAR_11, VAR_15, "git_branch");
      FUNC_9(VAR_11, VAR_2);
      FUNC_10(VAR_11, VAR_15, "git_commit_id");
      FUNC_9(VAR_11, VAR_5);
      FUNC_10(VAR_11, VAR_15, "git_release");
      FUNC_9(VAR_11, VAR_6);
      FUNC_10(VAR_11, VAR_15, "git_commit_dts");
      return 1;
    }
    case 2: {
      FUNC_4 (VAR_11, 0, 4);
      int VAR_16 = FUNC_5(VAR_11);
      FUNC_6(VAR_11, VAR_7);
      FUNC_10(VAR_11, VAR_16, "ssl");
      FUNC_8(VAR_11, VAR_3);
      FUNC_10(VAR_11, VAR_16, "lfs_size");
      FUNC_9(VAR_11, VAR_4);
      FUNC_10(VAR_11, VAR_16, "modules");
      FUNC_9(VAR_11, VAR_1);
      FUNC_10(VAR_11, VAR_16, "number_type");
      return 1;
    }
    default:
    {
      FUNC_11("node.info() without parameter", "in the next version");
      FUNC_7(VAR_11, VAR_8);
      FUNC_7(VAR_11, VAR_9);
      FUNC_7(VAR_11, VAR_10);
      FUNC_7(VAR_11, FUNC_13());
      FUNC_7(VAR_11, FUNC_12());
      FUNC_7(VAR_11, FUNC_1() / 1024);
      FUNC_7(VAR_11, FUNC_0());
      FUNC_7(VAR_11, FUNC_2());
      return 8;
    }
  }
}
