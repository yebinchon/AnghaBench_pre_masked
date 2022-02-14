
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_vector {scalar_t__ slen; int * tnode; } ;
struct TYPE_2__ {int full_children; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (struct key_vector*) ;
 int FUNC_2 (struct key_vector*) ;
 int FUNC_3 (struct key_vector*) ;
 struct key_vector* FUNC_4 (struct key_vector*,unsigned long) ;
 int FUNC_5 (int ,struct key_vector*) ;
 TYPE_1__* FUNC_6 (struct key_vector*) ;
 int FUNC_7 (struct key_vector*,struct key_vector*) ;

__attribute__((used)) static void FUNC_8(struct key_vector *VAR_0, unsigned long VAR_1,
        struct key_vector *VAR_2)
{
 struct key_vector *VAR_3 = FUNC_4(VAR_0, VAR_1);
 int VAR_4, VAR_5;

 FUNC_0(VAR_1 >= FUNC_1(VAR_0));


 if (!VAR_2 && VAR_3)
  FUNC_3(VAR_0);
 if (VAR_2 && !VAR_3)
  FUNC_2(VAR_0);


 VAR_5 = FUNC_7(VAR_0, VAR_3);
 VAR_4 = FUNC_7(VAR_0, VAR_2);

 if (VAR_5 && !VAR_4)
  FUNC_6(VAR_0)->full_children--;
 else if (!VAR_5 && VAR_4)
  FUNC_6(VAR_0)->full_children++;

 if (VAR_2 && (VAR_0->slen < VAR_2->slen))
  VAR_0->slen = VAR_2->slen;

 FUNC_5(VAR_0->tnode[VAR_1], VAR_2);
}
