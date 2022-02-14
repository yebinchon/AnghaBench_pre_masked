
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnhe_hash_bucket {int chain; } ;
struct fib_nh_exception {int fnhe_stamp; int fnhe_next; } ;


 int FUNC_0 (struct fib_nh_exception*) ;
 struct fib_nh_exception* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static struct fib_nh_exception *FUNC_3(struct fnhe_hash_bucket *VAR_0)
{
 struct fib_nh_exception *VAR_1, *VAR_2;

 VAR_2 = FUNC_1(VAR_0->chain);
 for (VAR_1 = FUNC_1(VAR_2->fnhe_next); VAR_1;
      VAR_1 = FUNC_1(VAR_1->fnhe_next)) {
  if (FUNC_2(VAR_1->fnhe_stamp, VAR_2->fnhe_stamp))
   VAR_2 = VAR_1;
 }
 FUNC_0(VAR_2);
 return VAR_2;
}
