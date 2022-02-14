
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {long flags; scalar_t__ mapping; scalar_t__ index; int _mapcount; } ;
struct lruvec {int dummy; } ;
struct list_head {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 long VAR_9 ;
 long VAR_10 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int,struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,struct page*,struct lruvec*,struct list_head*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,int ) ;
 scalar_t__ FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*,int) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14(struct page *VAR_12, int VAR_13,
  struct lruvec *VAR_14, struct list_head *VAR_15)
{
 struct page *VAR_16 = VAR_12 + VAR_13;

 FUNC_2(FUNC_3(&VAR_16->_mapcount) != -1, VAR_16);







 VAR_16->flags &= ~VAR_0;
 VAR_16->flags |= (VAR_12->flags &
   ((1L << VAR_5) |
    (1L << VAR_6) |
    (1L << VAR_7) |
    (1L << VAR_4) |
    (1L << VAR_9) |
    (1L << VAR_1) |
    (1L << VAR_10) |
    (1L << VAR_3) |
    (1L << VAR_8) |
    (1L << VAR_2)));


 FUNC_2(VAR_13 > 2 && VAR_16->mapping != VAR_11,
   VAR_16);
 VAR_16->mapping = VAR_12->mapping;
 VAR_16->index = VAR_12->index + VAR_13;


 FUNC_13();







 FUNC_4(VAR_16);


 FUNC_10(VAR_16, 1 + (!FUNC_0(VAR_12) ||
       FUNC_1(VAR_12)));

 if (FUNC_9(VAR_12))
  FUNC_12(VAR_16);
 if (FUNC_8(VAR_12))
  FUNC_11(VAR_16);

 FUNC_7(VAR_16, FUNC_6(VAR_12));






 FUNC_5(VAR_12, VAR_16, VAR_14, VAR_15);
}
