
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_0 (int ,int ,int *,int ,int*) ;

__attribute__((used)) static int FUNC_1(swp_entry_t VAR_4,
    struct page **VAR_5)
{
 bool VAR_6;

 *VAR_5 = FUNC_0(VAR_4, VAR_0,
   ((void*)0), 0, &VAR_6);
 if (VAR_6)
  return VAR_3;
 if (!*VAR_5)
  return VAR_2;
 return VAR_1;
}
