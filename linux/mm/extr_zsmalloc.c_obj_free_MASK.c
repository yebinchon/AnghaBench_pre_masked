
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zspage {int dummy; } ;
struct size_class {unsigned int size; } ;
struct page {int dummy; } ;
struct link_free {int next; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct zspage*) ;
 struct zspage* FUNC_1 (struct page*) ;
 void* FUNC_2 (struct page*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct zspage*,int) ;
 int FUNC_5 (unsigned long,struct page**,unsigned int*) ;
 int FUNC_6 (struct zspage*,unsigned int) ;
 int FUNC_7 (struct size_class*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct size_class *VAR_4, unsigned long VAR_5)
{
 struct link_free *VAR_6;
 struct zspage *VAR_7;
 struct page *VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;
 void *VAR_11;

 VAR_5 &= ~VAR_0;
 FUNC_5(VAR_5, &VAR_8, &VAR_10);
 VAR_9 = (VAR_4->size * VAR_10) & ~VAR_3;
 VAR_7 = FUNC_1(VAR_8);

 VAR_11 = FUNC_2(VAR_8);


 VAR_6 = (struct link_free *)(VAR_11 + VAR_9);
 VAR_6->next = FUNC_0(VAR_7) << VAR_1;
 FUNC_3(VAR_11);
 FUNC_6(VAR_7, VAR_10);
 FUNC_4(VAR_7, -1);
 FUNC_7(VAR_4, VAR_2, 1);
}
