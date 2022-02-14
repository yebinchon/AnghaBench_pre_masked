
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int limit; int table; int compare; int lookup; scalar_t__ used; } ;
typedef int FT_UInt ;
typedef int FT_Memory ;
typedef TYPE_1__* FT_Hash ;
typedef int FT_Error ;
typedef scalar_t__ FT_Bool ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static FT_Error
  FUNC_1( FT_Hash VAR_5,
             FT_Bool VAR_6,
             FT_Memory VAR_7 )
  {
    FT_UInt VAR_8 = VAR_0;
    FT_Error VAR_9;


    VAR_5->size = VAR_8;
    VAR_5->limit = VAR_8 / 3;
    VAR_5->used = 0;

    if ( VAR_6 )
    {
      VAR_5->lookup = VAR_2;
      VAR_5->compare = VAR_1;
    }
    else
    {
      VAR_5->lookup = VAR_4;
      VAR_5->compare = VAR_3;
    }

    FUNC_0( VAR_5->table, VAR_8 );

    return VAR_9;
  }
