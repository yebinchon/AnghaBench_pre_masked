
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_4__ {int nVertex; int hdr; } ;
typedef TYPE_1__ GeoPoly ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  GeoPoly *VAR_4 = FUNC_0(VAR_1, VAR_3[0], 0);
  if( VAR_4 ){
    FUNC_2(VAR_1, VAR_4->hdr,
       4+8*VAR_4->nVertex, VAR_0);
    FUNC_1(VAR_4);
  }
}
