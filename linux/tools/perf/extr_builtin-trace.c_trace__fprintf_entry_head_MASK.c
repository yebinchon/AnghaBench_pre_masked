
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct trace {scalar_t__ show_duration; scalar_t__ show_tstamp; } ;
struct thread {int dummy; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ,int,int *) ;
 size_t FUNC_1 (struct trace*,struct thread*,int *) ;
 size_t FUNC_2 (struct trace*,int ,int *) ;

__attribute__((used)) static size_t FUNC_3(struct trace *VAR_0, struct thread *VAR_1,
     u64 VAR_2, bool VAR_3, u64 VAR_4, FILE *VAR_5)
{
 size_t VAR_6 = 0;

 if (VAR_0->show_tstamp)
  VAR_6 = FUNC_2(VAR_0, VAR_4, VAR_5);
 if (VAR_0->show_duration)
  VAR_6 += FUNC_0(VAR_2, VAR_3, VAR_5);
 return VAR_6 + FUNC_1(VAR_0, VAR_1, VAR_5);
}
