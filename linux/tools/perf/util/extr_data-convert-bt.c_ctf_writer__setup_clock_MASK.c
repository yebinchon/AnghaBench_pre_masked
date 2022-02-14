
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctf_writer {struct bt_ctf_clock* clock; } ;
struct bt_ctf_clock {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bt_ctf_clock*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct ctf_writer *VAR_5)
{
 struct bt_ctf_clock *VAR_6 = VAR_5->clock;

 FUNC_1(VAR_6, "perf clock");







 do { if (FUNC_0(VAR_6, 1000000000)) return -1; } while (0);
 do { if (FUNC_0(VAR_6, 0)) return -1; } while (0);
 do { if (FUNC_0(VAR_6, 0)) return -1; } while (0);
 do { if (FUNC_0(VAR_6, 10)) return -1; } while (0);
 do { if (FUNC_0(VAR_6, 0)) return -1; } while (0);


 return 0;
}
