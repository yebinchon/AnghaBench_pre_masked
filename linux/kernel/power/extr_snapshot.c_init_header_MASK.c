
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swsusp_info {int size; int pages; int image_pages; int num_physpages; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct swsusp_info*) ;
 int FUNC_2 (struct swsusp_info*,int ,int) ;
 int VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct swsusp_info *VAR_2)
{
 FUNC_2(VAR_2, 0, sizeof(struct swsusp_info));
 VAR_2->num_physpages = FUNC_0();
 VAR_2->image_pages = VAR_1;
 VAR_2->pages = FUNC_3();
 VAR_2->size = VAR_2->pages;
 VAR_2->size <<= VAR_0;
 return FUNC_1(VAR_2);
}
