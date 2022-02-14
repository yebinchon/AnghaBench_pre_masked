
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nodes; } ;
struct mempolicy {TYPE_1__ v; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static unsigned FUNC_4(struct mempolicy *VAR_0, unsigned long VAR_1)
{
 unsigned VAR_2 = FUNC_2(VAR_0->v.nodes);
 unsigned VAR_3;
 int VAR_4;
 int VAR_5;

 if (!VAR_2)
  return FUNC_3();
 VAR_3 = (unsigned int)VAR_1 % VAR_2;
 VAR_5 = FUNC_0(VAR_0->v.nodes);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_5 = FUNC_1(VAR_5, VAR_0->v.nodes);
 return VAR_5;
}
