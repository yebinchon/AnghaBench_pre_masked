
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pages; TYPE_2__* images; int isLogged; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_5__ {int buffer; int image; } ;
typedef int Relation ;
typedef TYPE_3__ GenericXLogState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

GenericXLogState *
FUNC_2(Relation VAR_2)
{
 GenericXLogState *VAR_3;
 int VAR_4;

 VAR_3 = (GenericXLogState *) FUNC_1(sizeof(GenericXLogState));
 VAR_3->isLogged = FUNC_0(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 {
  VAR_3->pages[VAR_4].image = VAR_3->images[VAR_4].data;
  VAR_3->pages[VAR_4].buffer = VAR_0;
 }

 return VAR_3;
}
