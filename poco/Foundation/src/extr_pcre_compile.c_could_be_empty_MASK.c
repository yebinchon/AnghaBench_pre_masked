
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pcre_uchar ;
typedef int compile_data ;
struct TYPE_3__ {struct TYPE_3__* outer; int const* current_branch; } ;
typedef TYPE_1__ branch_chain ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int const*,int ,int *,int *) ;

__attribute__((used)) static BOOL
FUNC_1(const pcre_uchar *VAR_2, const pcre_uchar *VAR_3,
  branch_chain *VAR_4, BOOL VAR_5, compile_data *VAR_6)
{
while (VAR_4 != ((void*)0) && VAR_4->current_branch >= VAR_2)
  {
  if (!FUNC_0(VAR_4->current_branch, VAR_3, VAR_5, VAR_6, ((void*)0)))
    return VAR_0;
  VAR_4 = VAR_4->outer;
  }
return VAR_1;
}
