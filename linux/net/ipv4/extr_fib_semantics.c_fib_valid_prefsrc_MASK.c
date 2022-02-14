
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int nl_net; } ;
struct fib_config {int fc_type; scalar_t__ fc_dst; scalar_t__ fc_table; TYPE_1__ fc_nlinfo; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct fib_config *VAR_3, __be32 VAR_4)
{
 if (VAR_3->fc_type != VAR_0 || !VAR_3->fc_dst ||
     VAR_4 != VAR_3->fc_dst) {
  u32 VAR_5 = VAR_3->fc_table;
  int VAR_6;

  if (VAR_5 == VAR_2)
   VAR_5 = VAR_1;

  VAR_6 = FUNC_0(VAR_3->fc_nlinfo.nl_net,
       VAR_4, VAR_5);

  if (VAR_6 != VAR_0 && VAR_5 != VAR_1) {
   VAR_6 = FUNC_0(VAR_3->fc_nlinfo.nl_net,
        VAR_4, VAR_1);
  }

  if (VAR_6 != VAR_0)
   return 0;
 }
 return 1;
}
