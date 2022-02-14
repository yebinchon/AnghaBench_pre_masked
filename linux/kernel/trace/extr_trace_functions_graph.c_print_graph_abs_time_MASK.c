
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct trace_seq {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct trace_seq*,char*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(u64 VAR_1, struct trace_seq *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 VAR_3 /= 1000;

 FUNC_1(VAR_2, "%5lu.%06lu |  ",
    (unsigned long)VAR_1, VAR_3);
}
