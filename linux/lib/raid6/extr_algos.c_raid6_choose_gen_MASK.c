
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid6_calls {scalar_t__ prefer; int (* xor_syndrome ) (int const,int,int,int ,void**) ;int name; int (* gen_syndrome ) (int const,int ,void**) ;int (* valid ) () ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 unsigned long VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned long,...) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct raid6_calls** VAR_5 ;
 struct raid6_calls VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (int const,int ,void**) ;
 int FUNC_8 (int const,int,int,int ,void**) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static inline const struct raid6_calls *FUNC_10(
 void *(*const VAR_7)[(65536/VAR_2)+2], const int VAR_8)
{
 unsigned long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14 = (VAR_8>>1)-1, VAR_15 = VAR_8-3;
 const struct raid6_calls *const *VAR_16;
 const struct raid6_calls *VAR_17;

 for (VAR_10 = 0, VAR_11 = 0, VAR_17 = ((void*)0), VAR_16 = VAR_5; *VAR_16; VAR_16++) {
  if (!VAR_17 || (*VAR_16)->prefer >= VAR_17->prefer) {
   if ((*VAR_16)->valid && !(*VAR_16)->valid())
    continue;

   if (!FUNC_0(VAR_0)) {
    VAR_17 = *VAR_16;
    break;
   }

   VAR_9 = 0;

   FUNC_4();
   VAR_12 = VAR_4;
   while ((VAR_13 = VAR_4) == VAR_12)
    FUNC_1();
   while (FUNC_9(VAR_4,
         VAR_13 + (1<<VAR_3))) {
    (*VAR_16)->gen_syndrome(VAR_8, VAR_2, *VAR_7);
    VAR_9++;
   }
   FUNC_5();

   if (VAR_9 > VAR_10) {
    VAR_10 = VAR_9;
    VAR_17 = *VAR_16;
   }
   FUNC_3("raid6: %-8s gen() %5ld MB/s\n", (*VAR_16)->name,
          (VAR_9*VAR_1) >> (20-16+VAR_3));

   if (!(*VAR_16)->xor_syndrome)
    continue;

   VAR_9 = 0;

   FUNC_4();
   VAR_12 = VAR_4;
   while ((VAR_13 = VAR_4) == VAR_12)
    FUNC_1();
   while (FUNC_9(VAR_4,
         VAR_13 + (1<<VAR_3))) {
    (*VAR_16)->xor_syndrome(VAR_8, VAR_14, VAR_15,
            VAR_2, *VAR_7);
    VAR_9++;
   }
   FUNC_5();

   if (VAR_17 == *VAR_16)
    VAR_11 = VAR_9;

   FUNC_3("raid6: %-8s xor() %5ld MB/s\n", (*VAR_16)->name,
    (VAR_9*VAR_1) >> (20-16+VAR_3+1));
  }
 }

 if (VAR_17) {
  FUNC_3("raid6: using algorithm %s gen() %ld MB/s\n",
         VAR_17->name,
         (VAR_10*VAR_1) >> (20-16+VAR_3));
  if (VAR_17->xor_syndrome)
   FUNC_3("raid6: .... xor() %ld MB/s, rmw enabled\n",
          (VAR_11*VAR_1) >> (20-16+VAR_3+1));
  VAR_6 = *VAR_17;
 } else
  FUNC_2("raid6: Yikes!  No algorithm found!\n");

 return VAR_17;
}
