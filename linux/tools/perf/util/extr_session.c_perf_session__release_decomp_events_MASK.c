
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {struct decomp* decomp; } ;
struct decomp {size_t mmap_len; struct decomp* next; } ;


 int FUNC_0 (struct decomp*,size_t) ;

__attribute__((used)) static void FUNC_1(struct perf_session *VAR_0)
{
 struct decomp *VAR_1, *VAR_2;
 size_t VAR_3;
 VAR_1 = VAR_0->decomp;
 do {
  VAR_2 = VAR_1;
  if (VAR_2 == ((void*)0))
   break;
  VAR_1 = VAR_2->next;
  VAR_3 = VAR_2->mmap_len;
  FUNC_0(VAR_2, VAR_3);
 } while (1);
}
