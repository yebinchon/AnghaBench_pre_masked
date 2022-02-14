
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int gfp_t ;
struct TYPE_2__ {struct address_space* mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,struct page*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (struct page*,struct address_space*,int ,int ) ;
 TYPE_1__* FUNC_5 (struct page*) ;
 struct page* FUNC_6 (struct address_space*,int ) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct address_space*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct page*) ;
 scalar_t__ FUNC_14 (struct page*) ;

struct page *FUNC_15(struct address_space *VAR_10, pgoff_t VAR_11,
 int VAR_12, gfp_t VAR_13)
{
 struct page *VAR_14;

repeat:
 VAR_14 = FUNC_6(VAR_10, VAR_11);
 if (FUNC_14(VAR_14))
  VAR_14 = ((void*)0);
 if (!VAR_14)
  goto no_page;

 if (VAR_12 & VAR_4) {
  if (VAR_12 & VAR_6) {
   if (!FUNC_11(VAR_14)) {
    FUNC_10(VAR_14);
    return ((void*)0);
   }
  } else {
   FUNC_7(VAR_14);
  }


  if (FUNC_12(FUNC_5(VAR_14)->mapping != VAR_10)) {
   FUNC_13(VAR_14);
   FUNC_10(VAR_14);
   goto repeat;
  }
  FUNC_0(VAR_14->index != VAR_11, VAR_14);
 }

 if (VAR_12 & VAR_1)
  FUNC_9(VAR_14);

no_page:
 if (!VAR_14 && (VAR_12 & VAR_2)) {
  int VAR_15;
  if ((VAR_12 & VAR_7) && FUNC_8(VAR_10))
   VAR_13 |= VAR_9;
  if (VAR_12 & VAR_5)
   VAR_13 &= ~VAR_8;

  VAR_14 = FUNC_3(VAR_13);
  if (!VAR_14)
   return ((void*)0);

  if (FUNC_1(!(VAR_12 & (VAR_4 | VAR_3))))
   VAR_12 |= VAR_4;


  if (VAR_12 & VAR_1)
   FUNC_2(VAR_14);

  VAR_15 = FUNC_4(VAR_14, VAR_10, VAR_11, VAR_13);
  if (FUNC_12(VAR_15)) {
   FUNC_10(VAR_14);
   VAR_14 = ((void*)0);
   if (VAR_15 == -VAR_0)
    goto repeat;
  }





  if (VAR_14 && (VAR_12 & VAR_3))
   FUNC_13(VAR_14);
 }

 return VAR_14;
}
