
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swsusp_info {scalar_t__ image_pages; scalar_t__ pages; } ;


 int FUNC_0 (struct swsusp_info*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_1(struct swsusp_info *VAR_3)
{
 int VAR_4;

 VAR_2 = ((void*)0);
 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4) {
  VAR_0 = VAR_3->image_pages;
  VAR_1 = VAR_3->pages - VAR_3->image_pages - 1;
 }
 return VAR_4;
}
