
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_siginfo {int si_code; int si_signo; } ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct kernel_siginfo *VAR_0)
{
 bool VAR_1 = 0;
 switch (FUNC_0(VAR_0->si_signo, VAR_0->si_code)) {
 case 132:
 case 137:
 case 130:
  VAR_1 = 1;
  break;
 case 128:
 case 131:
 case 136:
 case 134:
 case 135:
 case 133:
 case 129:
  VAR_1 = 0;
  break;
 }
 return VAR_1;
}
