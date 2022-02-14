
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t data; } ;
typedef TYPE_1__* FT_Hashnode ;
typedef int FT_Hashkey ;
typedef int FT_Hash ;


 TYPE_1__** FUNC_0 (int ,int ) ;

__attribute__((used)) static size_t*
  FUNC_1( FT_Hashkey VAR_0,
               FT_Hash VAR_1 )
  {
    FT_Hashnode* VAR_2 = FUNC_0( VAR_0, VAR_1 );


    return (*VAR_2) ? &(*VAR_2)->data
                 : ((void*)0);
  }
