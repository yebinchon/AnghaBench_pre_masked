; ModuleID = '/home/carl/AnghaBench/systemd/src/basic/extr_cgroup-util.h_CGROUP_MASK_EXTEND_JOINED.c'
source_filename = "/home/carl/AnghaBench/systemd/src/basic/extr_cgroup-util.h_CGROUP_MASK_EXTEND_JOINED.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@CGROUP_MASK_CPU = common dso_local global i32 0, align 4
@CGROUP_MASK_CPUACCT = common dso_local global i32 0, align 4
@llvm.used = appending global [1 x i8*] [i8* bitcast (i32 (i32)* @CGROUP_MASK_EXTEND_JOINED to i8*)], section "llvm.metadata"

; Function Attrs: noinline nounwind optnone uwtable
define internal i32 @CGROUP_MASK_EXTEND_JOINED(i32 %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, i32* %2, align 4
  %3 = load i32, i32* %2, align 4
  %4 = load i32, i32* @CGROUP_MASK_CPU, align 4
  %5 = load i32, i32* @CGROUP_MASK_CPUACCT, align 4
  %6 = or i32 %4, %5
  %7 = and i32 %3, %6
  %8 = icmp ne i32 %7, 0
  br i1 %8, label %9, label %15

9:                                                ; preds = %1
  %10 = load i32, i32* @CGROUP_MASK_CPU, align 4
  %11 = load i32, i32* @CGROUP_MASK_CPUACCT, align 4
  %12 = or i32 %10, %11
  %13 = load i32, i32* %2, align 4
  %14 = or i32 %13, %12
  store i32 %14, i32* %2, align 4
  br label %15

15:                                               ; preds = %9, %1
  %16 = load i32, i32* %2, align 4
  ret i32 %16
}

attributes #0 = { noinline nounwind optnone uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.module.flags = !{!0}
!llvm.ident = !{!1}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{!"clang version 10.0.1 (https://github.com/wsmoses/llvm-project-tok c8e5003577614e72d6d18a216e6a09771e1fcce4)"}
