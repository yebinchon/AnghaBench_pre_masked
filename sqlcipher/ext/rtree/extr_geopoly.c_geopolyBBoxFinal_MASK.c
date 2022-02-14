
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_6__ {int a; } ;
struct TYPE_5__ {int nVertex; int hdr; } ;
typedef TYPE_1__ GeoPoly ;
typedef TYPE_2__ GeoBBox ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_1
){
  GeoPoly *VAR_2;
  GeoBBox *VAR_3;
  VAR_3 = (GeoBBox*)FUNC_1(VAR_1, 0);
  if( VAR_3==0 ) return;
  VAR_2 = FUNC_0(VAR_1, 0, VAR_3->a, 0);
  if( VAR_2 ){
    FUNC_3(VAR_1, VAR_2->hdr,
       4+8*VAR_2->nVertex, VAR_0);
    FUNC_2(VAR_2);
  }
}
