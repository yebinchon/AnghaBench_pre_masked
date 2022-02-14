
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int memory; } ;
struct TYPE_6__ {TYPE_1__ root; int faces_list; } ;
typedef int FT_List_Destructor ;
typedef TYPE_2__* FT_Driver ;


 int FUNC_0 (int *,int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
  FUNC_1( FT_Driver VAR_1 )
  {
    FUNC_0( &VAR_1->faces_list,
                      (FT_List_Destructor)VAR_0,
                      VAR_1->root.memory,
                      VAR_1 );
  }
