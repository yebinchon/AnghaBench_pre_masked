
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt6_info {int rt6i_flags; int from; } ;
struct fib6_nh_excptn_arg {int plen; struct rt6_info* rt; } ;
struct TYPE_2__ {int plen; } ;
struct fib6_info {TYPE_1__ fib6_src; int fib6_nh; scalar_t__ nh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct rt6_info*) ;
 int FUNC_1 (scalar_t__,int ,struct fib6_nh_excptn_arg*) ;
 struct fib6_info* FUNC_2 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct rt6_info *VAR_4)
{
 struct fib6_info *VAR_5;

 VAR_5 = FUNC_2(VAR_4->from);
 if (!VAR_5 || !(VAR_4->rt6i_flags & VAR_2))
  return -VAR_0;

 if (VAR_5->nh) {
  struct fib6_nh_excptn_arg VAR_6 = {
   .rt = VAR_4,
   .plen = VAR_5->fib6_src.plen
  };
  int VAR_7;


  VAR_7 = FUNC_1(VAR_5->nh,
           VAR_3,
           &VAR_6);
  return VAR_7 ? 0 : -VAR_1;
 }

 return FUNC_0(VAR_5->fib6_nh,
     VAR_5->fib6_src.plen, VAR_4);
}
