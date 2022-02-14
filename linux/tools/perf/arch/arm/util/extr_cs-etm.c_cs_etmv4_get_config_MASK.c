
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct auxtrace_record {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct auxtrace_record*) ;

__attribute__((used)) static u64 FUNC_2(struct auxtrace_record *VAR_8)
{
 u64 VAR_9 = 0;
 u64 VAR_10 = 0;







 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10 & FUNC_0(VAR_5))
  VAR_9 |= FUNC_0(VAR_1);
 if (VAR_10 & FUNC_0(VAR_4))
  VAR_9 |= FUNC_0(VAR_0);
 if (VAR_10 & FUNC_0(VAR_7))
  VAR_9 |= FUNC_0(VAR_3);
 if (VAR_10 & FUNC_0(VAR_6))
  VAR_9 |= FUNC_0(VAR_2);

 return VAR_9;
}
