
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ksft_pass; int ksft_fail; int ksft_xfail; int ksft_xpass; int ksft_xskip; int ksft_error; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(void)
{
 return VAR_0.ksft_pass + VAR_0.ksft_fail +
  VAR_0.ksft_xfail + VAR_0.ksft_xpass +
  VAR_0.ksft_xskip + VAR_0.ksft_error;
}
