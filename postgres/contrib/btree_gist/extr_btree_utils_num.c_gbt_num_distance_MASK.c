
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double (* f_dist ) (void const*,int ,int *) ;scalar_t__ (* f_ge ) (void const*,int ,int *) ;scalar_t__ (* f_le ) (void const*,int ,int *) ;scalar_t__ t; } ;
typedef TYPE_1__ gbtree_ninfo ;
typedef double float8 ;
struct TYPE_6__ {int upper; int lower; } ;
typedef TYPE_2__ GBT_NUMKEY_R ;
typedef int FmgrInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (void const*,int ,int *) ;
 double FUNC_2 (void const*,int ,int *) ;
 scalar_t__ FUNC_3 (void const*,int ,int *) ;
 double FUNC_4 (void const*,int ,int *) ;

float8
FUNC_5(const GBT_NUMKEY_R *VAR_1,
     const void *VAR_2,
     bool VAR_3,
     const gbtree_ninfo *VAR_4,
     FmgrInfo *VAR_5)
{
 float8 VAR_6;

 if (VAR_4->f_dist == ((void*)0))
  FUNC_0(VAR_0, "KNN search is not supported for btree_gist type %d",
    (int) VAR_4->t);
 if (VAR_4->f_le(VAR_2, VAR_1->lower, VAR_5))
  VAR_6 = VAR_4->f_dist(VAR_2, VAR_1->lower, VAR_5);
 else if (VAR_4->f_ge(VAR_2, VAR_1->upper, VAR_5))
  VAR_6 = VAR_4->f_dist(VAR_2, VAR_1->upper, VAR_5);
 else
  VAR_6 = 0.0;

 return VAR_6;
}
