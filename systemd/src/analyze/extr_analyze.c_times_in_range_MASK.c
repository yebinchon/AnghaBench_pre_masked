
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unit_times {scalar_t__ activated; } ;
struct boot_times {scalar_t__ finish_time; } ;



__attribute__((used)) static bool FUNC_0(const struct unit_times *VAR_0, const struct boot_times *VAR_1) {
        return VAR_0 && VAR_0->activated > 0 && VAR_0->activated <= VAR_1->finish_time;
}
