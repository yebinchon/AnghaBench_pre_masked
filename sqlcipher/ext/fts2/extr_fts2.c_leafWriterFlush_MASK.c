
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fulltext_vtab ;
struct TYPE_6__ {int nData; } ;
struct TYPE_5__ {TYPE_4__ data; } ;
typedef TYPE_1__ LeafWriter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(fulltext_vtab *VAR_1, LeafWriter *VAR_2){
  int VAR_3 = FUNC_1(VAR_1, VAR_2, 0, VAR_2->data.nData);
  if( VAR_3!=VAR_0 ) return VAR_3;


  FUNC_0(&VAR_2->data);

  return VAR_0;
}
