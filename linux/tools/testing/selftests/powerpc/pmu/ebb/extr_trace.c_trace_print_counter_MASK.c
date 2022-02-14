
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct trace_entry {scalar_t__ data; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct trace_entry *VAR_0)
{
 u64 *VAR_1;

 VAR_1 = (u64 *)VAR_0->data;
 FUNC_0("counter = %lld\n", *VAR_1);
}
