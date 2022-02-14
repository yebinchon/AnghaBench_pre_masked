
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
typedef int uchar ;
typedef int UZLIB_TREE ;
struct TYPE_5__ {size_t* clcidx; } ;
typedef TYPE_1__ UZLIB_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_3 (UZLIB_DATA *VAR_2, UZLIB_TREE *VAR_3, UZLIB_TREE *VAR_4) {
  uchar VAR_5[288+32];
  uint VAR_6, VAR_7, VAR_8, VAR_9;
  uint VAR_10, VAR_11, VAR_12;


  VAR_6 = FUNC_2(VAR_2, 5, 257);


  VAR_7 = FUNC_2(VAR_2, 5, 1);


  VAR_8 = FUNC_2(VAR_2, 4, 4);

  for (VAR_10 = 0; VAR_10 < 19; ++VAR_10) VAR_5[VAR_10] = 0;


  for (VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10) {

    uint VAR_13 = FUNC_2(VAR_2, 3, 0);
    VAR_5[VAR_2->clcidx[VAR_10]] = VAR_13;
  }


  FUNC_0(VAR_3, VAR_5, 19);


  VAR_9 = VAR_6 + VAR_7;
  for (VAR_11 = 0; VAR_11 < VAR_9; ) {
    int VAR_14 = FUNC_1(VAR_2, VAR_3);
    uchar VAR_15 = 0;
    int VAR_16, VAR_17 = 3;


    if (VAR_14 < 0)
      return VAR_14;

    switch (VAR_14) {
    case 16:

      VAR_15 = VAR_5[VAR_11 - 1];
      VAR_16 = 2;
      break;
    case 17:

      VAR_16 = 3;
      break;
    case 18:

      VAR_16 = 7;
      VAR_17 = 11;
      break;
    default:

      VAR_5[VAR_11++] = VAR_14;

      continue;
    }


    VAR_12 = FUNC_2(VAR_2, VAR_16, VAR_17);
    if (VAR_11 + VAR_12 > VAR_9)
      return VAR_0;

    for (; VAR_12; --VAR_12)
      VAR_5[VAR_11++] = VAR_15;
  }


  FUNC_0(VAR_3, VAR_5, VAR_6);
  FUNC_0(VAR_4, VAR_5 + VAR_6, VAR_7);

  return VAR_1;
}
