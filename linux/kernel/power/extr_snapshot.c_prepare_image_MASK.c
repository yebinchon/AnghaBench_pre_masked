
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_bitmap {int dummy; } ;
struct linked_page {void* next; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int * VAR_7 ;
 unsigned int FUNC_1 (struct memory_bitmap*) ;
 int FUNC_2 (struct memory_bitmap*,struct memory_bitmap*) ;
 int FUNC_3 (int *,int ) ;
 struct linked_page* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct memory_bitmap*) ;
 int FUNC_7 (struct memory_bitmap*,int ,int ) ;
 int FUNC_8 (struct memory_bitmap*,int ) ;
 unsigned int VAR_8 ;
 int FUNC_9 (struct memory_bitmap*,unsigned int*) ;
 void* VAR_9 ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct linked_page*) ;

__attribute__((used)) static int FUNC_15(struct memory_bitmap *VAR_10, struct memory_bitmap *VAR_11)
{
 unsigned int VAR_12, VAR_13;
 struct linked_page *VAR_14;
 int VAR_15;


 FUNC_3(VAR_7, VAR_4);
 VAR_7 = ((void*)0);

 VAR_13 = FUNC_1(VAR_11);
 FUNC_6(VAR_11);

 VAR_15 = FUNC_7(VAR_10, VAR_1, VAR_3);
 if (VAR_15)
  goto Free;

 FUNC_2(VAR_10, VAR_11);
 FUNC_8(VAR_11, VAR_5);
 if (VAR_13 > 0) {
  VAR_15 = FUNC_9(VAR_11, &VAR_13);
  if (VAR_15)
   goto Free;
 }
 VAR_12 = VAR_8 - VAR_13 - VAR_6;
 VAR_12 = FUNC_0(VAR_12, VAR_2);
 while (VAR_12 > 0) {
  VAR_14 = FUNC_4(VAR_1, VAR_3);
  if (!VAR_14) {
   VAR_15 = -VAR_0;
   goto Free;
  }
  VAR_14->next = VAR_9;
  VAR_9 = VAR_14;
  VAR_12--;
 }

 VAR_12 = VAR_8 - VAR_13 - VAR_6;
 while (VAR_12 > 0) {
  VAR_14 = (struct linked_page *)FUNC_5(VAR_1);
  if (!VAR_14) {
   VAR_15 = -VAR_0;
   goto Free;
  }
  if (!FUNC_11(FUNC_14(VAR_14))) {

   VAR_14->next = VAR_9;
   VAR_9 = VAR_14;
  }

  FUNC_12(FUNC_14(VAR_14));
  FUNC_13(FUNC_14(VAR_14));
  VAR_12--;
 }
 return 0;

 Free:
 FUNC_10();
 return VAR_15;
}
