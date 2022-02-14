
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_12 ) {
  VAR_8 = FUNC_0( VAR_12, 1 );
  VAR_10 = FUNC_0( VAR_12, 2 );
  VAR_9 = FUNC_0( VAR_12, 3 );
  VAR_11 = FUNC_0( VAR_12, 4 );

  FUNC_1(VAR_8, VAR_7, VAR_4 );

  FUNC_4(
            ((int32_t)VAR_1) * VAR_0 / VAR_11,
            ((int32_t)VAR_1) * VAR_0 / VAR_9,
            ((int32_t)VAR_11 - VAR_1) * VAR_0 / VAR_11,
            ((int32_t)VAR_9 - VAR_1) * VAR_0 / VAR_9
  );





  FUNC_2(VAR_8, VAR_6);



  FUNC_3(1, 8, VAR_2 | VAR_3);
  FUNC_5(0);

  FUNC_2(VAR_8, VAR_5);
  return 0;
}
