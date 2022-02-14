
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int avail_in; int avail_out; int * next_out; int * next_in; } ;
typedef TYPE_1__ z_stream ;
typedef int u8 ;
typedef int str ;
typedef int sqlite3_context ;
typedef int Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_9(
  sqlite3_context *VAR_4,
  const u8 *VAR_5,
  int VAR_6,
  int VAR_7
){
  u8 *VAR_8 = FUNC_5(VAR_7);
  if( VAR_8==0 ){
    FUNC_7(VAR_4);
  }else{
    int VAR_9;
    z_stream VAR_10;
    FUNC_3(&VAR_10, 0, sizeof(VAR_10));

    VAR_10.next_in = (Byte*)VAR_5;
    VAR_10.avail_in = VAR_6;
    VAR_10.next_out = (Byte*)VAR_8;
    VAR_10.avail_out = VAR_7;

    VAR_9 = FUNC_2(&VAR_10, -15);
    if( VAR_9!=VAR_1 ){
      FUNC_8(VAR_4, "inflateInit2() failed (%d)", VAR_9);
    }else{
      VAR_9 = FUNC_0(&VAR_10, VAR_0);
      if( VAR_9!=VAR_2 ){
        FUNC_8(VAR_4, "inflate() failed (%d)", VAR_9);
      }else{
        FUNC_6(VAR_4, VAR_8, VAR_7, VAR_3);
        VAR_8 = 0;
      }
    }
    FUNC_4(VAR_8);
    FUNC_1(&VAR_10);
  }
}
