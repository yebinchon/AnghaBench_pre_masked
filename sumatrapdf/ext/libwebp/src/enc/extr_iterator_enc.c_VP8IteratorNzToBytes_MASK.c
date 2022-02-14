
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* nz_; int* top_nz_; int* left_nz_; } ;
typedef TYPE_1__ VP8EncIterator ;


 int FUNC_0 (int const,int) ;

void FUNC_1(VP8EncIterator* const VAR_0) {
  const int VAR_1 = VAR_0->nz_[0], VAR_2 = VAR_0->nz_[-1];
  int* const VAR_3 = VAR_0->top_nz_;
  int* const VAR_4 = VAR_0->left_nz_;


  VAR_3[0] = FUNC_0(VAR_1, 12);
  VAR_3[1] = FUNC_0(VAR_1, 13);
  VAR_3[2] = FUNC_0(VAR_1, 14);
  VAR_3[3] = FUNC_0(VAR_1, 15);

  VAR_3[4] = FUNC_0(VAR_1, 18);
  VAR_3[5] = FUNC_0(VAR_1, 19);

  VAR_3[6] = FUNC_0(VAR_1, 22);
  VAR_3[7] = FUNC_0(VAR_1, 23);

  VAR_3[8] = FUNC_0(VAR_1, 24);


  VAR_4[0] = FUNC_0(VAR_2, 3);
  VAR_4[1] = FUNC_0(VAR_2, 7);
  VAR_4[2] = FUNC_0(VAR_2, 11);
  VAR_4[3] = FUNC_0(VAR_2, 15);

  VAR_4[4] = FUNC_0(VAR_2, 17);
  VAR_4[5] = FUNC_0(VAR_2, 19);

  VAR_4[6] = FUNC_0(VAR_2, 21);
  VAR_4[7] = FUNC_0(VAR_2, 23);

}
