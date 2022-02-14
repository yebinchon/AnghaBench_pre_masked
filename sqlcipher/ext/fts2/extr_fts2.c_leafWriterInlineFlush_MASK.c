
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fulltext_vtab ;
struct TYPE_5__ {scalar_t__ nData; scalar_t__ pData; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ LeafWriter ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,int,scalar_t__) ;
 int FUNC_2 (scalar_t__,char const*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(fulltext_vtab *VAR_1, LeafWriter *VAR_2,
                                 const char *VAR_3, int VAR_4,
                                 int VAR_5){
  char VAR_6[VAR_0+VAR_0];
  int VAR_7, VAR_8 = FUNC_3(VAR_6, 0);
  VAR_8 += FUNC_3(VAR_6+VAR_8, VAR_4);






  FUNC_0( VAR_5>=VAR_8+VAR_4 );

  VAR_7 = VAR_5-(VAR_8+VAR_4);
  FUNC_2(VAR_2->data.pData+VAR_7, VAR_6, VAR_8);
  FUNC_2(VAR_2->data.pData+VAR_7+VAR_8, VAR_3, VAR_4);

  return FUNC_1(VAR_1, VAR_2, VAR_7, VAR_2->data.nData-VAR_7);
}
