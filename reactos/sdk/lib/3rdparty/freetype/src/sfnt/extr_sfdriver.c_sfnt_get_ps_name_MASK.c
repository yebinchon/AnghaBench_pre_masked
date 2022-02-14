
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int names; int stream; } ;
struct TYPE_8__ {int memory; } ;
struct TYPE_10__ {char const* postscript_name; TYPE_2__ name_table; TYPE_1__ root; scalar_t__ blend; } ;
typedef TYPE_3__* TT_Face ;
typedef int FT_Int ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 char* FUNC_3 (int ,int ,int,int ,int) ;
 char* FUNC_4 (int ,int ,int,int ,int) ;
 int FUNC_5 (TYPE_3__*,int ,int*,int*) ;
 char const* FUNC_6 (TYPE_3__*) ;
 int VAR_1 ;

__attribute__((used)) static const char*
  FUNC_7( TT_Face VAR_2 )
  {
    FT_Int VAR_3, VAR_4, VAR_5;
    const char* VAR_6 = ((void*)0);


    if ( VAR_2->postscript_name )
      return VAR_2->postscript_name;
    VAR_3 = FUNC_5( VAR_2, VAR_0, &VAR_4, &VAR_5 );
    if ( !VAR_3 )
      return ((void*)0);


    if ( VAR_4 != -1 )
      VAR_6 = FUNC_4( VAR_2->root.memory,
                               VAR_2->name_table.stream,
                               VAR_2->name_table.names + VAR_4,
                               VAR_1,
                               1 );
    else
      VAR_6 = FUNC_3( VAR_2->root.memory,
                                 VAR_2->name_table.stream,
                                 VAR_2->name_table.names + VAR_5,
                                 VAR_1,
                                 1 );

    VAR_2->postscript_name = VAR_6;

    return VAR_6;
  }
