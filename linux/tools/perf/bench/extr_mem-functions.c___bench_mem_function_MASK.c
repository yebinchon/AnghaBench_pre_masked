
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct function {char* name; char* desc; } ;
struct bench_mem_info {double (* do_gettimeofday ) (struct function const*,size_t,void*,void*) ;scalar_t__ (* do_cycles ) (struct function const*,size_t,void*,void*) ;scalar_t__ alloc_src; struct function* functions; } ;




 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (double) ;
 int FUNC_3 (char*,...) ;
 char* VAR_1 ;
 scalar_t__ FUNC_4 (struct function const*,size_t,void*,void*) ;
 double FUNC_5 (struct function const*,size_t,void*,void*) ;
 scalar_t__ VAR_2 ;
 void* FUNC_6 (size_t) ;

__attribute__((used)) static void FUNC_7(struct bench_mem_info *VAR_3, int VAR_4, size_t VAR_5, double VAR_6)
{
 const struct function *VAR_7 = &VAR_3->functions[VAR_4];
 double VAR_8 = 0.0;
 u64 VAR_9 = 0;
 void *VAR_10 = ((void*)0), *VAR_11 = FUNC_6(VAR_5);

 FUNC_3("# function '%s' (%s)\n", VAR_7->name, VAR_7->desc);

 if (VAR_11 == ((void*)0))
  goto out_alloc_failed;

 if (VAR_3->alloc_src) {
  VAR_10 = FUNC_6(VAR_5);
  if (VAR_10 == ((void*)0))
   goto out_alloc_failed;
 }

 if (VAR_0 == 129)
  FUNC_3("# Copying %s bytes ...\n\n", VAR_1);

 if (VAR_2) {
  VAR_9 = VAR_3->do_cycles(VAR_7, VAR_5, VAR_10, VAR_11);
 } else {
  VAR_8 = VAR_3->do_gettimeofday(VAR_7, VAR_5, VAR_10, VAR_11);
 }

 switch (VAR_0) {
 case 129:
  if (VAR_2) {
   FUNC_3(" %14lf cycles/byte\n", (double)VAR_9/VAR_6);
  } else {
   FUNC_2(VAR_8);
  }
  break;

 case 128:
  if (VAR_2) {
   FUNC_3("%lf\n", (double)VAR_9/VAR_6);
  } else {
   FUNC_3("%lf\n", VAR_8);
  }
  break;

 default:
  FUNC_0(1);
  break;
 }

out_free:
 FUNC_1(VAR_10);
 FUNC_1(VAR_11);
 return;
out_alloc_failed:
 FUNC_3("# Memory allocation failed - maybe size (%s) is too large?\n", VAR_1);
 goto out_free;
}
