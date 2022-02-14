
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* f_ge ) (void const*,void const*,int ,int *) ;int (* f_gt ) (void const*,void const*,int ,int *) ;int (* f_eq ) (void const*,void const*,int ,int *) ;int (* f_lt ) (void const*,void const*,int ,int *) ;int (* f_le ) (void const*,void const*,int ,int *) ;int (* f_cmp ) (void const*,void const*,int ,int *) ;} ;
typedef TYPE_1__ gbtree_vinfo ;
struct TYPE_8__ {void const* lower; void const* upper; } ;
typedef int StrategyNumber ;
typedef int Oid ;
typedef TYPE_2__ GBT_VARKEY_R ;
typedef int FmgrInfo ;
 int FUNC_0 (TYPE_2__*,void const*,TYPE_1__ const*) ;
 int FUNC_1 (void const*,void const*,int ,int *) ;
 int FUNC_2 (void const*,void const*,int ,int *) ;
 int FUNC_3 (void const*,void const*,int ,int *) ;
 int FUNC_4 (void const*,void const*,int ,int *) ;
 int FUNC_5 (void const*,void const*,int ,int *) ;
 int FUNC_6 (void const*,void const*,int ,int *) ;
 int FUNC_7 (void const*,void const*,int ,int *) ;
 int FUNC_8 (void const*,void const*,int ,int *) ;
 int FUNC_9 (void const*,void const*,int ,int *) ;
 int FUNC_10 (void const*,void const*,int ,int *) ;
 int FUNC_11 (void const*,void const*,int ,int *) ;
 int FUNC_12 (void const*,void const*,int ,int *) ;
 int FUNC_13 (void const*,void const*,int ,int *) ;

bool
FUNC_14(GBT_VARKEY_R *VAR_0,
       const void *VAR_1,
       StrategyNumber VAR_2,
       Oid VAR_3,
       bool VAR_4,
       const gbtree_vinfo *VAR_5,
       FmgrInfo *VAR_6)
{
 bool VAR_7 = 0;

 switch (VAR_2)
 {
  case 130:
   if (VAR_4)
    VAR_7 = VAR_5->f_ge(VAR_1, VAR_0->lower, VAR_3, VAR_6);
   else
    VAR_7 = VAR_5->f_cmp(VAR_1, VAR_0->lower, VAR_3, VAR_6) >= 0
     || FUNC_0(VAR_0, VAR_1, VAR_5);
   break;
  case 129:
   if (VAR_4)
    VAR_7 = VAR_5->f_gt(VAR_1, VAR_0->lower, VAR_3, VAR_6);
   else
    VAR_7 = VAR_5->f_cmp(VAR_1, VAR_0->lower, VAR_3, VAR_6) >= 0
     || FUNC_0(VAR_0, VAR_1, VAR_5);
   break;
  case 133:
   if (VAR_4)
    VAR_7 = VAR_5->f_eq(VAR_1, VAR_0->lower, VAR_3, VAR_6);
   else
    VAR_7 =
     (VAR_5->f_cmp(VAR_0->lower, VAR_1, VAR_3, VAR_6) <= 0 &&
      VAR_5->f_cmp(VAR_1, VAR_0->upper, VAR_3, VAR_6) <= 0) ||
     FUNC_0(VAR_0, VAR_1, VAR_5);
   break;
  case 131:
   if (VAR_4)
    VAR_7 = VAR_5->f_lt(VAR_1, VAR_0->upper, VAR_3, VAR_6);
   else
    VAR_7 = VAR_5->f_cmp(VAR_1, VAR_0->upper, VAR_3, VAR_6) <= 0
     || FUNC_0(VAR_0, VAR_1, VAR_5);
   break;
  case 132:
   if (VAR_4)
    VAR_7 = VAR_5->f_le(VAR_1, VAR_0->upper, VAR_3, VAR_6);
   else
    VAR_7 = VAR_5->f_cmp(VAR_1, VAR_0->upper, VAR_3, VAR_6) <= 0
     || FUNC_0(VAR_0, VAR_1, VAR_5);
   break;
  case 128:
   VAR_7 = !(VAR_5->f_eq(VAR_1, VAR_0->lower, VAR_3, VAR_6) &&
        VAR_5->f_eq(VAR_1, VAR_0->upper, VAR_3, VAR_6));
   break;
  default:
   VAR_7 = 0;
 }

 return VAR_7;
}
