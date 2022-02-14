
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_2__ {size_t i; } ;
typedef TYPE_1__ VfsStatCursor ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;



 int * VAR_4 ;
 char const** VAR_5 ;
 char** VAR_6 ;
 char** VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*,int,int ) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vtab_cursor *VAR_8,
  sqlite3_context *VAR_9,
  int VAR_10
){
  VfsStatCursor *VAR_11 = (VfsStatCursor*)VAR_8;
  switch( VAR_10 ){
    case 129: {
      FUNC_1(VAR_9, VAR_5[VAR_11->i/VAR_3], -1, VAR_1);
      break;
    }
    case 128: {
      const char **VAR_12;
      VAR_12 = (VAR_11->i/VAR_3)==VAR_2 ? VAR_7 : VAR_6;
      FUNC_1(VAR_9, VAR_12[VAR_11->i%VAR_3], -1, VAR_1);
      break;
    }
    case 130: {
      FUNC_0(VAR_9, VAR_4[VAR_11->i]);
      break;
    }
  }
  return VAR_0;
}
