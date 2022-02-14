
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct perf_sample {scalar_t__ insn_len; scalar_t__* insn; } ;
struct perf_event_attr {int dummy; } ;
struct machine {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct perf_sample*,struct thread*,struct machine*) ;
 scalar_t__ FUNC_2 (int *,char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct perf_sample*,struct thread*,struct perf_event_attr*,struct machine*,int *) ;

__attribute__((used)) static int FUNC_4(struct perf_sample *VAR_4,
         struct perf_event_attr *VAR_5,
         struct thread *VAR_6,
         struct machine *VAR_7, FILE *VAR_8)
{
 int VAR_9 = 0;

 if (VAR_4->insn_len == 0 && VAR_3)
  FUNC_1(VAR_4, VAR_6, VAR_7);

 if (FUNC_0(VAR_2))
  VAR_9 += FUNC_2(VAR_8, " ilen: %d", VAR_4->insn_len);
 if (FUNC_0(VAR_1) && VAR_4->insn_len) {
  int VAR_10;

  VAR_9 += FUNC_2(VAR_8, " insn:");
  for (VAR_10 = 0; VAR_10 < VAR_4->insn_len; VAR_10++)
   VAR_9 += FUNC_2(VAR_8, " %02x", (unsigned char)VAR_4->insn[VAR_10]);
 }
 if (FUNC_0(VAR_0))
  VAR_9 += FUNC_3(VAR_4, VAR_6, VAR_5, VAR_7, VAR_8);

 return VAR_9;
}
