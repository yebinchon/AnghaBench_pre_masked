
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; int tv_sec; } ;
struct timekeeper {scalar_t__ offs_real; int tai_offset; int offs_tai; struct timespec64 wall_to_monotonic; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct timespec64*,int ,int ) ;
 scalar_t__ FUNC_4 (struct timespec64) ;

__attribute__((used)) static void FUNC_5(struct timekeeper *VAR_0, struct timespec64 VAR_1)
{
 struct timespec64 VAR_2;





 FUNC_3(&VAR_2, -VAR_0->wall_to_monotonic.tv_sec,
     -VAR_0->wall_to_monotonic.tv_nsec);
 FUNC_0(VAR_0->offs_real != FUNC_4(VAR_2));
 VAR_0->wall_to_monotonic = VAR_1;
 FUNC_3(&VAR_2, -VAR_1.tv_sec, -VAR_1.tv_nsec);
 VAR_0->offs_real = FUNC_4(VAR_2);
 VAR_0->offs_tai = FUNC_1(VAR_0->offs_real, FUNC_2(VAR_0->tai_offset, 0));
}
