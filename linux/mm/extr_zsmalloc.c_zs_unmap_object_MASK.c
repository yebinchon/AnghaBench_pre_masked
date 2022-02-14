
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zspage {int dummy; } ;
struct zs_pool {struct size_class** size_class; } ;
struct size_class {unsigned int size; } ;
struct page {int dummy; } ;
struct mapping_area {int vm_addr; } ;
typedef enum fullness_group { ____Placeholder_fullness_group } fullness_group ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct mapping_area*,struct page**,unsigned long,unsigned long) ;
 struct page* FUNC_2 (struct page*) ;
 struct zspage* FUNC_3 (struct page*) ;
 int FUNC_4 (struct zspage*,unsigned int*,int*) ;
 unsigned long FUNC_5 (unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct zspage*) ;
 int FUNC_8 (unsigned long,struct page**,unsigned int*) ;
 int FUNC_9 (int ) ;
 struct mapping_area* FUNC_10 (int *) ;
 int FUNC_11 (unsigned long) ;
 int VAR_2 ;

void FUNC_12(struct zs_pool *VAR_3, unsigned long VAR_4)
{
 struct zspage *VAR_5;
 struct page *VAR_6;
 unsigned long VAR_7, VAR_8;
 unsigned int VAR_9;

 unsigned int VAR_10;
 enum fullness_group VAR_11;
 struct size_class *VAR_12;
 struct mapping_area *VAR_13;

 VAR_7 = FUNC_5(VAR_4);
 FUNC_8(VAR_7, &VAR_6, &VAR_9);
 VAR_5 = FUNC_3(VAR_6);
 FUNC_4(VAR_5, &VAR_10, &VAR_11);
 VAR_12 = VAR_3->size_class[VAR_10];
 VAR_8 = (VAR_12->size * VAR_9) & ~VAR_0;

 VAR_13 = FUNC_10(&VAR_2);
 if (VAR_8 + VAR_12->size <= VAR_1)
  FUNC_6(VAR_13->vm_addr);
 else {
  struct page *VAR_14[2];

  VAR_14[0] = VAR_6;
  VAR_14[1] = FUNC_2(VAR_6);
  FUNC_0(!VAR_14[1]);

  FUNC_1(VAR_13, VAR_14, VAR_8, VAR_12->size);
 }
 FUNC_9(VAR_2);

 FUNC_7(VAR_5);
 FUNC_11(VAR_4);
}
