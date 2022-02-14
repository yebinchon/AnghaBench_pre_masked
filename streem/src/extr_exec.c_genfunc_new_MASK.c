
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_genfunc {int id; int * state; int type; } ;
typedef int strm_string ;
typedef int strm_state ;


 int VAR_0 ;
 struct strm_genfunc* FUNC_0 (int) ;

__attribute__((used)) static struct strm_genfunc*
FUNC_1(strm_state* VAR_1, strm_string VAR_2)
{
  struct strm_genfunc *VAR_3 = FUNC_0(sizeof(struct strm_genfunc));

  if (!VAR_3) return ((void*)0);
  VAR_3->type = VAR_0;
  VAR_3->state = VAR_1;
  VAR_3->id = VAR_2;
  return VAR_3;
}
