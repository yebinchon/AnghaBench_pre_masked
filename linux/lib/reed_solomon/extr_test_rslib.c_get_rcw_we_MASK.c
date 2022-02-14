
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct wspace {int* derrlocs; int* errlocs; int* c; int* r; } ;
struct rs_control {TYPE_1__* codec; } ;
struct TYPE_2__ {int nroots; int nn; } ;


 int FUNC_0 (struct rs_control*,int*,int,int*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct rs_control *VAR_1, struct wspace *VAR_2,
   int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_1->codec->nroots;
 int *VAR_7 = VAR_2->derrlocs;
 int *VAR_8 = VAR_2->errlocs;
 int VAR_9 = VAR_3 - VAR_6;
 int VAR_10 = VAR_1->codec->nn;
 uint16_t *VAR_11 = VAR_2->c;
 uint16_t *VAR_12 = VAR_2->r;
 int VAR_13;
 int VAR_14;
 int VAR_15;


 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
  VAR_11[VAR_15] = FUNC_3() & VAR_10;

 FUNC_2(VAR_11 + VAR_9, 0, VAR_6 * sizeof(*VAR_11));
 FUNC_0(VAR_1, VAR_11, VAR_9, VAR_11 + VAR_9, 0);


 FUNC_1(VAR_12, VAR_11, VAR_3 * sizeof(*VAR_12));
 FUNC_2(VAR_8, 0, VAR_3 * sizeof(*VAR_8));
 FUNC_2(VAR_7, 0, VAR_6 * sizeof(*VAR_7));


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  do {

   VAR_13 = FUNC_3() & VAR_10;
  } while (VAR_13 == 0);

  do {

   VAR_14 = FUNC_3() % VAR_3;
  } while (VAR_8[VAR_14] != 0);

  VAR_8[VAR_14] = 1;
  VAR_12[VAR_14] ^= VAR_13;
 }


 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  do {

   VAR_14 = FUNC_3() % VAR_3;
  } while (VAR_8[VAR_14] != 0);

  VAR_7[VAR_15] = VAR_14;

  if (VAR_0 && (FUNC_3() & 1)) {

   VAR_8[VAR_14] = 2;
  } else {

   do {

    VAR_13 = FUNC_3() & VAR_10;
   } while (VAR_13 == 0);

   VAR_8[VAR_14] = 1;
   VAR_12[VAR_14] ^= VAR_13;
   VAR_4++;
  }
 }

 return VAR_4;
}
