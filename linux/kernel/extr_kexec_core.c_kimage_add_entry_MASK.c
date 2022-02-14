
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kimage {int* entry; int* last_entry; } ;
typedef int kimage_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_0 (struct kimage*,int ,int ) ;
 int* FUNC_1 (struct page*) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static int FUNC_3(struct kimage *VAR_5, kimage_entry_t VAR_6)
{
 if (*VAR_5->entry != 0)
  VAR_5->entry++;

 if (VAR_5->entry == VAR_5->last_entry) {
  kimage_entry_t *VAR_7;
  struct page *VAR_8;

  VAR_8 = FUNC_0(VAR_5, VAR_1, VAR_3);
  if (!VAR_8)
   return -VAR_0;

  VAR_7 = FUNC_1(VAR_8);
  *VAR_5->entry = FUNC_2(VAR_7) | VAR_2;
  VAR_5->entry = VAR_7;
  VAR_5->last_entry = VAR_7 +
          ((VAR_4/sizeof(kimage_entry_t)) - 1);
 }
 *VAR_5->entry = VAR_6;
 VAR_5->entry++;
 *VAR_5->entry = 0;

 return 0;
}
