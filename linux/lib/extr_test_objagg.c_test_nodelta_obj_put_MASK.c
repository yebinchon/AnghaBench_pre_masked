
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct world {unsigned int root_count; } ;
struct objagg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct world*,struct objagg*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct world *VAR_1, struct objagg *VAR_2,
    unsigned int VAR_3, bool VAR_4)
{
 unsigned int VAR_5 = VAR_1->root_count;

 FUNC_1(VAR_1, VAR_2, VAR_3);

 if (VAR_4) {
  if (VAR_1->root_count != VAR_5 - 1) {
   FUNC_0("Key %u: Root was not destroyed\n", VAR_3);
   return -VAR_0;
  }
 } else {
  if (VAR_1->root_count != VAR_5) {
   FUNC_0("Key %u: Root was incorrectly destroyed\n",
          VAR_3);
   return -VAR_0;
  }
 }
 return 0;
}
