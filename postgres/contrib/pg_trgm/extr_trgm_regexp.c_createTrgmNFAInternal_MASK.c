
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int regex_t ;
typedef int TrgmPackedGraph ;
struct TYPE_10__ {TYPE_1__* initState; int ncolors; int colorInfo; int * regex; } ;
typedef TYPE_2__ TrgmNFA ;
struct TYPE_9__ {int flags; } ;
typedef int TRGM ;
typedef int MemoryContext ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static TRGM *
FUNC_8(regex_t *VAR_1, TrgmPackedGraph **VAR_2,
       MemoryContext VAR_3)
{
 TRGM *VAR_4;
 TrgmNFA VAR_5;

 VAR_5.regex = VAR_1;


 FUNC_1(VAR_1, &VAR_5);
 FUNC_7(&VAR_5);
 if (VAR_5.initState->flags & VAR_0)
  return ((void*)0);




 if (!FUNC_6(&VAR_5))
  return ((void*)0);





 VAR_4 = FUNC_0(&VAR_5, VAR_3);

 *VAR_2 = FUNC_2(&VAR_5, VAR_3);





 return VAR_4;
}
