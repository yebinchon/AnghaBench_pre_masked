
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; int start; int nsub; } ;
struct TYPE_8__ {TYPE_1__* sub; int nsub; } ;
struct TYPE_7__ {int * ep; int sp; } ;
typedef TYPE_2__ Resub ;
typedef TYPE_3__ Reprog ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,char const*,int,TYPE_2__*,int ) ;

int FUNC_1(Reprog *VAR_1, const char *VAR_2, Resub *VAR_3, int VAR_4)
{
 Resub VAR_5;
 int VAR_6;

 if (!VAR_3)
  VAR_3 = &VAR_5;

 VAR_3->nsub = VAR_1->nsub;
 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
  VAR_3->sub[VAR_6].sp = *(VAR_3->sub[VAR_6].ep = ((void*)0));

 return FUNC_0(VAR_1->start, VAR_2, VAR_2, VAR_1->flags | VAR_4, VAR_3, 0);
}
