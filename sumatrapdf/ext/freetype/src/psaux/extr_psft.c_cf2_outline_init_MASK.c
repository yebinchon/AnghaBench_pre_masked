
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cubeTo; int lineTo; int moveTo; int * error; int memory; } ;
struct TYPE_6__ {TYPE_1__ root; } ;
typedef int FT_Memory ;
typedef int FT_Error ;
typedef TYPE_2__* CF2_Outline ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
  FUNC_1( CF2_Outline VAR_3,
                    FT_Memory VAR_4,
                    FT_Error* VAR_5 )
  {
    FUNC_0( VAR_3 );

    VAR_3->root.memory = VAR_4;
    VAR_3->root.error = VAR_5;

    VAR_3->root.moveTo = VAR_2;
    VAR_3->root.lineTo = VAR_1;
    VAR_3->root.cubeTo = VAR_0;
  }
