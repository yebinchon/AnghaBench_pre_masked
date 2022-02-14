
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int slack; } ;
struct TYPE_8__ {struct TYPE_8__* link; int hash; } ;
typedef TYPE_1__* FTC_Node ;
typedef TYPE_2__* FTC_Cache ;


 TYPE_1__** FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
  FUNC_2( FTC_Node VAR_0,
                      FTC_Cache VAR_1 )
  {
    FTC_Node *VAR_2 = FUNC_0( VAR_1, VAR_0->hash );


    VAR_0->link = *VAR_2;
    *VAR_2 = VAR_0;

    VAR_1->slack--;
    FUNC_1( VAR_1 );
  }
