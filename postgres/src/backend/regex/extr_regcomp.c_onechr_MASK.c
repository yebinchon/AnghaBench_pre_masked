
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int cflags; } ;
struct state {int dummy; } ;
typedef int color ;
typedef int chr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vars*,int ) ;
 int FUNC_1 (struct vars*,int ,struct state*,struct state*) ;
 int FUNC_2 (struct vars*,int ,struct state*,struct state*,int *) ;

__attribute__((used)) static void
FUNC_3(struct vars *VAR_2,
    chr VAR_3,
    struct state *VAR_4,
    struct state *VAR_5)
{
 if (!(VAR_2->cflags & VAR_1))
 {
  color VAR_6 = VAR_0;

  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6);
  return;
 }


 FUNC_1(VAR_2, FUNC_0(VAR_2, VAR_3), VAR_4, VAR_5);
}
