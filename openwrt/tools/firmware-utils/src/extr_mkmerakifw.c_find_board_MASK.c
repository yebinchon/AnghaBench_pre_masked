
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {int * id; } ;


 struct board_info* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;

__attribute__((used)) static const struct board_info *FUNC_1(const char *VAR_1)
{
 const struct board_info *VAR_2;
 const struct board_info *VAR_3;

 VAR_2 = ((void*)0);
 for (VAR_3 = VAR_0; VAR_3->id != ((void*)0); VAR_3++) {
  if (FUNC_0(VAR_1, VAR_3->id) == 0) {
   VAR_2 = VAR_3;
   break;
  }
 }

 return VAR_2;
}
