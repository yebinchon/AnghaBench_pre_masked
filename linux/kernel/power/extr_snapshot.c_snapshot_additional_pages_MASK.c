
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {unsigned int spanned_pages; } ;
struct rtree_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_2 ;

unsigned int FUNC_1(struct zone *VAR_3)
{
 unsigned int VAR_4, VAR_5;

 VAR_4 = VAR_5 = FUNC_0(VAR_3->spanned_pages, VAR_0);
 VAR_4 += FUNC_0(VAR_4 * sizeof(struct rtree_node),
         VAR_2);
 while (VAR_5 > 1) {
  VAR_5 = FUNC_0(VAR_5, VAR_1);
  VAR_4 += VAR_5;
 }

 return 2 * VAR_4;
}
