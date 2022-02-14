
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsvp_head {scalar_t__ tgenerator; } ;


 scalar_t__ FUNC_0 (struct rsvp_head*) ;
 int FUNC_1 (struct rsvp_head*) ;

__attribute__((used)) static u32 FUNC_2(struct rsvp_head *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  for (VAR_1 = 255; VAR_1 > 0; VAR_1--) {
   if (++VAR_0->tgenerator == 0)
    VAR_0->tgenerator = 1;
   if (FUNC_0(VAR_0))
    return VAR_0->tgenerator;
  }
  FUNC_1(VAR_0);
 }
 return 0;
}
