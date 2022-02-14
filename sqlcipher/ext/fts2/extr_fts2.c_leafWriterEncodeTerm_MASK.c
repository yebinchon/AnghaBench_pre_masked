
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nData; } ;
struct TYPE_6__ {int nData; char const* pData; } ;
struct TYPE_5__ {TYPE_3__ term; TYPE_4__ data; } ;
typedef TYPE_1__ LeafWriter ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,char*,int,char const*,int) ;
 int FUNC_2 (TYPE_3__*,char const*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(LeafWriter *VAR_1,
                                const char *VAR_2, int VAR_3){
  char VAR_4[VAR_0+VAR_0];
  int VAR_5, VAR_6 = 0;

  FUNC_0( VAR_3>0 );
  while( VAR_6<VAR_1->term.nData &&
         VAR_2[VAR_6]==VAR_1->term.pData[VAR_6] ){
    VAR_6++;

    FUNC_0( VAR_6<VAR_3 );
  }

  if( VAR_1->data.nData==0 ){





    VAR_5 = FUNC_3(VAR_4, '\0');
    VAR_5 += FUNC_3(VAR_4+VAR_5, VAR_3);
    FUNC_1(&VAR_1->data, VAR_4, VAR_5, VAR_2, VAR_3);
  }else{





    VAR_5 = FUNC_3(VAR_4, VAR_6);
    VAR_5 += FUNC_3(VAR_4+VAR_5, VAR_3-VAR_6);
    FUNC_1(&VAR_1->data, VAR_4, VAR_5, VAR_2+VAR_6, VAR_3-VAR_6);
  }
  FUNC_2(&VAR_1->term, VAR_2, VAR_3);

  return VAR_6+1;
}
