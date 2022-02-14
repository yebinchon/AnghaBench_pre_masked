
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int bType; int bFinal; int dtree; int ltree; scalar_t__ destSize; } ;
typedef TYPE_1__ UZLIB_DATA ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_7 (UZLIB_DATA *VAR_3) {
  do {
    int VAR_4;


    if (VAR_3->bType == -1) {
      next_blk:

      VAR_3->bFinal = FUNC_3(VAR_3);

      VAR_3->bType = FUNC_6(VAR_3, 2, 0);

      FUNC_0("Started new block: type=%d final=%d\n", VAR_3->bType, VAR_3->bFinal);

      if (VAR_3->bType == 1) {

        FUNC_1(&VAR_3->ltree, &VAR_3->dtree);
      } else if (VAR_3->bType == 2) {

        VAR_4 = FUNC_2(VAR_3, &VAR_3->ltree, &VAR_3->dtree);
        if (VAR_4 != VAR_2)
          return VAR_4;
      }
    }


    switch (VAR_3->bType) {
    case 0:

      VAR_4 = FUNC_5(VAR_3);
      break;
    case 1:
    case 2:


      VAR_4 = FUNC_4(VAR_3, &VAR_3->ltree, &VAR_3->dtree);
      break;
    default:
      return VAR_0;
    }

    if (VAR_4 == VAR_1 && !VAR_3->bFinal) {


      goto next_blk;
    }

    if (VAR_4 != VAR_2)
      return VAR_4;

  } while (--VAR_3->destSize);

  return VAR_2;
}
