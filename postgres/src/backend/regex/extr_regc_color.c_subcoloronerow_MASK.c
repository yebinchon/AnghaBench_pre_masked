
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int nfa; struct colormap* cm; } ;
struct state {int dummy; } ;
struct colormap {scalar_t__* hicolormap; int hiarraycols; } ;
typedef scalar_t__ color ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,scalar_t__,struct state*,struct state*) ;
 scalar_t__ FUNC_2 (struct colormap*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_3(struct vars *VAR_1,
      int VAR_2,
      struct state *VAR_3,
      struct state *VAR_4,
      color *VAR_5)
{
 struct colormap *VAR_6 = VAR_1->cm;
 color *VAR_7;
 int VAR_8;


 VAR_7 = &VAR_6->hicolormap[VAR_2 * VAR_6->hiarraycols];
 for (VAR_8 = 0; VAR_8 < VAR_6->hiarraycols; VAR_7++, VAR_8++)
 {
  color VAR_9 = FUNC_2(VAR_6, VAR_7);

  FUNC_0();

  if (VAR_9 != *VAR_5)
  {
   FUNC_1(VAR_1->nfa, VAR_0, VAR_9, VAR_3, VAR_4);
   FUNC_0();
   *VAR_5 = VAR_9;
  }
 }
}
