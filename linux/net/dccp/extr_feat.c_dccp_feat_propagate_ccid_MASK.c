
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct list_head {int dummy; } ;
struct ccid_dependency {scalar_t__ dependent_feat; int val; int is_mandatory; int is_local; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct list_head*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct list_head*,scalar_t__,int ,int ,int *,int) ;
 struct ccid_dependency* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct list_head *VAR_2, u8 VAR_3, bool VAR_4)
{
 const struct ccid_dependency *VAR_5 = FUNC_2(VAR_3, VAR_4);
 int VAR_6, VAR_7 = (VAR_5 == ((void*)0));

 for (VAR_6 = 0; VAR_7 == 0 && VAR_5[VAR_6].dependent_feat != VAR_0; VAR_6++)
  if (FUNC_3(VAR_5[VAR_6].dependent_feat) == VAR_1)
   VAR_7 = FUNC_1(VAR_2, VAR_5[VAR_6].dependent_feat,
          VAR_5[VAR_6].is_local,
          VAR_5[VAR_6].is_mandatory,
          &VAR_5[VAR_6].val, 1);
  else
   VAR_7 = FUNC_0(VAR_2, VAR_5[VAR_6].dependent_feat,
          VAR_5[VAR_6].is_mandatory,
          VAR_5[VAR_6].val);
 return VAR_7;
}
