
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct xt_hmark_info* targinfo; } ;
struct xt_hmark_info {int flags; scalar_t__ proto_mask; int hmodulus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(const struct xt_tgchk_param *VAR_8)
{
 const struct xt_hmark_info *VAR_9 = VAR_8->targinfo;
 const char *VAR_10 = "proto mask must be zero with L3 mode";

 if (!VAR_9->hmodulus)
  return -VAR_0;

 if (VAR_9->proto_mask &&
     (VAR_9->flags & FUNC_0(VAR_3)))
  goto err;

 if (VAR_9->flags & FUNC_0(VAR_5) &&
     (VAR_9->flags & (FUNC_0(VAR_7) |
        FUNC_0(VAR_2))))
  return -VAR_0;

 if (VAR_9->flags & FUNC_0(VAR_4) &&
     (VAR_9->flags & (FUNC_0(VAR_6) |
        FUNC_0(VAR_1)))) {
  VAR_10 = "spi-set and port-set can't be combined";
  goto err;
 }
 return 0;
err:
 FUNC_1("%s\n", VAR_10);
 return -VAR_0;
}
