
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int finishedStartup; } ;
struct TYPE_9__ {TYPE_1__* shared; } ;
struct TYPE_8__ {scalar_t__* page_buffer; } ;
typedef int MultiXactOffset ;
typedef int MultiXactId ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int,int ) ;

__attribute__((used)) static bool
FUNC_7(MultiXactId VAR_4, MultiXactOffset *VAR_5)
{
 MultiXactOffset VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 MultiXactOffset *VAR_10;

 FUNC_0(VAR_3->finishedStartup);

 VAR_7 = FUNC_3(VAR_4);
 VAR_8 = FUNC_2(VAR_4);
 FUNC_5(VAR_2, 1);
 FUNC_5(VAR_0, 1);

 if (!FUNC_4(VAR_2, VAR_7))
  return 0;


 VAR_9 = FUNC_6(VAR_2, VAR_7, VAR_4);
 VAR_10 = (MultiXactOffset *) VAR_2->shared->page_buffer[VAR_9];
 VAR_10 += VAR_8;
 VAR_6 = *VAR_10;
 FUNC_1(VAR_1);

 *VAR_5 = VAR_6;
 return 1;
}
