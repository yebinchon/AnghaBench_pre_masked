
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tcphdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct tcphdr const*,int ,int*) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static void FUNC_2(const struct tcphdr *VAR_2,
     u32 *VAR_3, u32 *VAR_4)
{
 const u8 *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_1, &VAR_6);

 if (VAR_5 && VAR_6 == VAR_0) {
  *VAR_3 = FUNC_1(VAR_5);
  *VAR_4 = FUNC_1(VAR_5 + 4);
 }
}
