
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zspage {TYPE_1__* first_page; } ;
struct size_class {unsigned long size; } ;
struct page {int dummy; } ;
struct link_free {int next; unsigned long handle; } ;
struct TYPE_2__ {unsigned long index; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct zspage*) ;
 unsigned long FUNC_2 (struct zspage*) ;
 struct page* FUNC_3 (struct page*) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (int) ;
 unsigned long FUNC_7 (struct page*,unsigned long) ;
 int FUNC_8 (struct zspage*,int) ;
 int FUNC_9 (struct zspage*,int) ;
 int FUNC_10 (struct size_class*,int ,int) ;

__attribute__((used)) static unsigned long FUNC_11(struct size_class *VAR_5,
    struct zspage *VAR_6, unsigned long VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;
 struct link_free *VAR_12;

 struct page *VAR_13;
 unsigned long VAR_14;
 void *VAR_15;

 VAR_7 |= VAR_0;
 VAR_11 = FUNC_2(VAR_6);

 VAR_10 = VAR_11 * VAR_5->size;
 VAR_9 = VAR_10 >> VAR_4;
 VAR_14 = VAR_10 & ~VAR_3;
 VAR_13 = FUNC_1(VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  VAR_13 = FUNC_3(VAR_13);

 VAR_15 = FUNC_4(VAR_13);
 VAR_12 = (struct link_free *)VAR_15 + VAR_14 / sizeof(*VAR_12);
 FUNC_9(VAR_6, VAR_12->next >> VAR_1);
 if (FUNC_6(!FUNC_0(VAR_13)))

  VAR_12->handle = VAR_7;
 else

  VAR_6->first_page->index = VAR_7;

 FUNC_5(VAR_15);
 FUNC_8(VAR_6, 1);
 FUNC_10(VAR_5, VAR_2, 1);

 VAR_11 = FUNC_7(VAR_13, VAR_11);

 return VAR_11;
}
