
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* sec; void* min; void* hour; void* day; void* mon; void* year; } ;
typedef TYPE_1__ vfs_time ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4( lua_State *VAR_6, vfs_time *VAR_7 )
{
  int VAR_8 = FUNC_2( VAR_6 );


  FUNC_1( VAR_6, VAR_8, "year" );
  FUNC_1( VAR_6, VAR_8, "mon" );
  FUNC_1( VAR_6, VAR_8, "day" );
  FUNC_1( VAR_6, VAR_8, "hour" );
  FUNC_1( VAR_6, VAR_8, "min" );
  FUNC_1( VAR_6, VAR_8, "sec" );

  VAR_7->year = FUNC_0( VAR_6, ++VAR_8, VAR_5 );
  VAR_7->mon = FUNC_0( VAR_6, ++VAR_8, VAR_3 );
  VAR_7->day = FUNC_0( VAR_6, ++VAR_8, VAR_0 );
  VAR_7->hour = FUNC_0( VAR_6, ++VAR_8, VAR_1 );
  VAR_7->min = FUNC_0( VAR_6, ++VAR_8, VAR_2 );
  VAR_7->sec = FUNC_0( VAR_6, ++VAR_8, VAR_4 );


  FUNC_3( VAR_6, 6 );
}
