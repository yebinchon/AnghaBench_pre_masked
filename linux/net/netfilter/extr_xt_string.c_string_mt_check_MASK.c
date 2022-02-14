
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ v1; } ;
struct xt_string_info {scalar_t__ from_offset; scalar_t__ to_offset; char* algo; scalar_t__ patlen; struct ts_config* config; int pattern; TYPE_2__ u; } ;
struct xt_mtchk_param {struct xt_string_info* matchinfo; } ;
struct ts_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ts_config*) ;
 int FUNC_1 (struct ts_config*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct ts_config* FUNC_2 (char*,int ,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_3(const struct xt_mtchk_param *VAR_8)
{
 struct xt_string_info *VAR_9 = VAR_8->matchinfo;
 struct ts_config *VAR_10;
 int VAR_11 = VAR_2;


 if (VAR_9->from_offset > VAR_9->to_offset)
  return -VAR_0;
 if (VAR_9->algo[VAR_6 - 1] != '\0')
  return -VAR_0;
 if (VAR_9->patlen > VAR_7)
  return -VAR_0;
 if (VAR_9->u.v1.flags &
     ~(VAR_4 | VAR_5))
  return -VAR_0;
 if (VAR_9->u.v1.flags & VAR_4)
  VAR_11 |= VAR_3;
 VAR_10 = FUNC_2(VAR_9->algo, VAR_9->pattern, VAR_9->patlen,
         VAR_1, VAR_11);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_9->config = VAR_10;
 return 0;
}
