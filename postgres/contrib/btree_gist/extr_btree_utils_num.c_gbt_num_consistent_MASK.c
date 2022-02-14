
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* f_ge ) (void const*,void const*,int *) ;int (* f_gt ) (void const*,void const*,int *) ;int (* f_eq ) (void const*,void const*,int *) ;int (* f_le ) (void const*,void const*,int *) ;int (* f_lt ) (void const*,void const*,int *) ;} ;
typedef TYPE_1__ gbtree_ninfo ;
struct TYPE_6__ {void const* lower; void const* upper; } ;
typedef int StrategyNumber ;
typedef TYPE_2__ GBT_NUMKEY_R ;
typedef int FmgrInfo ;
 int FUNC_0 (void const*,void const*,int *) ;
 int FUNC_1 (void const*,void const*,int *) ;
 int FUNC_2 (void const*,void const*,int *) ;
 int FUNC_3 (void const*,void const*,int *) ;
 int FUNC_4 (void const*,void const*,int *) ;
 int FUNC_5 (void const*,void const*,int *) ;
 int FUNC_6 (void const*,void const*,int *) ;
 int FUNC_7 (void const*,void const*,int *) ;
 int FUNC_8 (void const*,void const*,int *) ;
 int FUNC_9 (void const*,void const*,int *) ;
 int FUNC_10 (void const*,void const*,int *) ;

bool
FUNC_11(const GBT_NUMKEY_R *VAR_0,
       const void *VAR_1,
       const StrategyNumber *VAR_2,
       bool VAR_3,
       const gbtree_ninfo *VAR_4,
       FmgrInfo *VAR_5)
{
 bool VAR_6;

 switch (*VAR_2)
 {
  case 130:
   VAR_6 = VAR_4->f_ge(VAR_1, VAR_0->lower, VAR_5);
   break;
  case 129:
   if (VAR_3)
    VAR_6 = VAR_4->f_gt(VAR_1, VAR_0->lower, VAR_5);
   else
    VAR_6 = VAR_4->f_ge(VAR_1, VAR_0->lower, VAR_5);
   break;
  case 133:
   if (VAR_3)
    VAR_6 = VAR_4->f_eq(VAR_1, VAR_0->lower, VAR_5);
   else
    VAR_6 = (VAR_4->f_le(VAR_0->lower, VAR_1, VAR_5) &&
        VAR_4->f_le(VAR_1, VAR_0->upper, VAR_5));
   break;
  case 131:
   if (VAR_3)
    VAR_6 = VAR_4->f_lt(VAR_1, VAR_0->upper, VAR_5);
   else
    VAR_6 = VAR_4->f_le(VAR_1, VAR_0->upper, VAR_5);
   break;
  case 132:
   VAR_6 = VAR_4->f_le(VAR_1, VAR_0->upper, VAR_5);
   break;
  case 128:
   VAR_6 = (!(VAR_4->f_eq(VAR_1, VAR_0->lower, VAR_5) &&
      VAR_4->f_eq(VAR_1, VAR_0->upper, VAR_5)));
   break;
  default:
   VAR_6 = 0;
 }

 return VAR_6;
}
