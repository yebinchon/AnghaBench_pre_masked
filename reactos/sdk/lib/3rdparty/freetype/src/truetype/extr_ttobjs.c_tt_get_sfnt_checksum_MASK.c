
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int stream; } ;
struct TYPE_8__ {TYPE_2__* dir_tables; TYPE_1__ root; scalar_t__ (* goto_table ) (TYPE_3__*,int ,int ,int *) ;} ;
struct TYPE_7__ {int Length; int Tag; scalar_t__ CheckSum; } ;
typedef TYPE_3__* TT_Face ;
typedef size_t FT_UShort ;
typedef scalar_t__ FT_ULong ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static FT_ULong
  FUNC_2( TT_Face VAR_0,
                        FT_UShort VAR_1 )
  {





    if ( !VAR_0->goto_table )
      return 0;

    if ( VAR_0->goto_table( VAR_0,
                           VAR_0->dir_tables[VAR_1].Tag,
                           VAR_0->root.stream,
                           ((void*)0) ) )
      return 0;

    return (FT_ULong)FUNC_1( VAR_0->root.stream,
                                             VAR_0->dir_tables[VAR_1].Length );
  }
