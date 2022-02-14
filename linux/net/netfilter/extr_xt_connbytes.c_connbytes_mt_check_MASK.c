
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {int net; int family; struct xt_connbytes_info* matchinfo; } ;
struct xt_connbytes_info {scalar_t__ what; scalar_t__ direction; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(const struct xt_mtchk_param *VAR_7)
{
 const struct xt_connbytes_info *VAR_8 = VAR_7->matchinfo;
 int VAR_9;

 if (VAR_8->what != VAR_6 &&
     VAR_8->what != VAR_2 &&
     VAR_8->what != VAR_1)
  return -VAR_0;

 if (VAR_8->direction != VAR_4 &&
     VAR_8->direction != VAR_5 &&
     VAR_8->direction != VAR_3)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_7->net, VAR_7->family);
 if (VAR_9 < 0)
  FUNC_3("cannot load conntrack support for proto=%u\n",
        VAR_7->family);





 if (!FUNC_0(VAR_7->net)) {
  FUNC_4("Forcing CT accounting to be enabled\n");
  FUNC_2(VAR_7->net, 1);
 }

 return VAR_9;
}
