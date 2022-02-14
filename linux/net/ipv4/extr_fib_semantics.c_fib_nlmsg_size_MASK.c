
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnexthop {int dummy; } ;
struct rtmsg {int dummy; } ;
struct fib_nh_common {scalar_t__ nhc_lwtstate; } ;
struct fib_info {scalar_t__ nh; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct fib_nh_common* FUNC_1 (struct fib_info*,unsigned int) ;
 unsigned int FUNC_2 (struct fib_info*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static inline size_t FUNC_5(struct fib_info *VAR_2)
{
 size_t VAR_3 = FUNC_0(sizeof(struct rtmsg))
    + FUNC_4(4)
    + FUNC_4(4)
    + FUNC_4(4)
    + FUNC_4(4)
    + FUNC_4(VAR_1);
 unsigned int VAR_4 = FUNC_2(VAR_2);


 VAR_3 += FUNC_4((VAR_0 * FUNC_4(4)));

 if (VAR_2->nh)
  VAR_3 += FUNC_4(4);

 if (VAR_4) {
  size_t VAR_5 = 0;



  size_t VAR_6 = FUNC_4(sizeof(struct rtnexthop));
  unsigned int VAR_7;


  VAR_6 += 2 * FUNC_4(4);


  for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_2); VAR_7++) {
   struct fib_nh_common *VAR_8 = FUNC_1(VAR_2, VAR_7);

   if (VAR_8->nhc_lwtstate) {

    VAR_5 += FUNC_3(
      VAR_8->nhc_lwtstate);

    VAR_5 += FUNC_4(2);
   }
  }


  VAR_3 += FUNC_4((VAR_4 * VAR_6) + VAR_5);

 }

 return VAR_3;
}
