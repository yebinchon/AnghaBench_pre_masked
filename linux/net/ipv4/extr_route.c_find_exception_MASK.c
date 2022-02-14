
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct fnhe_hash_bucket {int chain; } ;
struct fib_nh_exception {scalar_t__ fnhe_daddr; scalar_t__ fnhe_expires; int fnhe_next; } ;
struct fib_nh_common {int nhc_exceptions; } ;
typedef scalar_t__ __be32 ;


 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct fib_nh_common*,scalar_t__) ;
 int VAR_0 ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static struct fib_nh_exception *FUNC_4(struct fib_nh_common *VAR_1,
            __be32 VAR_2)
{
 struct fnhe_hash_bucket *VAR_3 = FUNC_2(VAR_1->nhc_exceptions);
 struct fib_nh_exception *VAR_4;
 u32 VAR_5;

 if (!VAR_3)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_2);

 for (VAR_4 = FUNC_2(VAR_3[VAR_5].chain); VAR_4;
      VAR_4 = FUNC_2(VAR_4->fnhe_next)) {
  if (VAR_4->fnhe_daddr == VAR_2) {
   if (VAR_4->fnhe_expires &&
       FUNC_3(VAR_0, VAR_4->fnhe_expires)) {
    FUNC_1(VAR_1, VAR_2);
    break;
   }
   return VAR_4;
  }
 }
 return ((void*)0);
}
