
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ string; int u64_hex; int u32_hex; int u32; int s32; int u64; int s64; } ;
struct ctf_writer {TYPE_1__ data; } ;


 int FUNC_0 (int ,int,int,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct ctf_writer*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct ctf_writer *VAR_0)
{







 do { (VAR_0->data.s64) = FUNC_0(64, 1, 0); if (!(VAR_0->data.s64)) goto err; } while (0);
 do { (VAR_0->data.u64) = FUNC_0(64, 0, 0); if (!(VAR_0->data.u64)) goto err; } while (0);
 do { (VAR_0->data.s32) = FUNC_0(32, 1, 0); if (!(VAR_0->data.s32)) goto err; } while (0);
 do { (VAR_0->data.u32) = FUNC_0(32, 0, 0); if (!(VAR_0->data.u32)) goto err; } while (0);
 do { (VAR_0->data.u32_hex) = FUNC_0(32, 0, 1); if (!(VAR_0->data.u32_hex)) goto err; } while (0);
 do { (VAR_0->data.u64_hex) = FUNC_0(64, 0, 1); if (!(VAR_0->data.u64_hex)) goto err; } while (0);

 VAR_0->data.string = FUNC_1();
 if (VAR_0->data.string)
  return 0;

err:
 FUNC_2(VAR_0);
 FUNC_3("Failed to create data types.\n");
 return -1;
}
