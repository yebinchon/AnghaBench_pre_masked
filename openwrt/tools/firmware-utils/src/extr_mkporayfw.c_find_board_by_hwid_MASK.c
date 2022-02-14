
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct board_info {scalar_t__ hw_id; int * id; } ;


 struct board_info* VAR_0 ;

__attribute__((used)) static struct board_info *FUNC_0(uint32_t VAR_1)
{
 struct board_info *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->id != ((void*)0); VAR_2++) {
  if (VAR_1 == VAR_2->hw_id)
   return VAR_2;
 };

 return ((void*)0);
}
