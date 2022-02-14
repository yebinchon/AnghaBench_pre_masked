
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flash_layout {int * id; } ;


 struct flash_layout* VAR_0 ;
 scalar_t__ FUNC_0 (char*,int *) ;

__attribute__((used)) static struct flash_layout *FUNC_1(char *VAR_1)
{
 struct flash_layout *VAR_2;
 struct flash_layout *VAR_3;

 VAR_2 = ((void*)0);
 for (VAR_3 = VAR_0; VAR_3->id != ((void*)0); VAR_3++){
  if (FUNC_0(VAR_1, VAR_3->id) == 0) {
   VAR_2 = VAR_3;
   break;
  }
 };

 return VAR_2;
}
