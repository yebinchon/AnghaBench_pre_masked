
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WebPEncodingError ;
typedef int VP8LHashChain ;
struct TYPE_3__ {int transform_bits_; int * refs_; int hash_chain_; int transform_data_; int argb_; } ;
typedef TYPE_1__ VP8LEncoder ;
typedef int VP8LBitWriter ;
typedef int VP8LBackwardRefs ;


 int const VAR_0 ;
 int FUNC_0 (int * const,int ,int *,int *,int *,int const,int const,int,int) ;
 int const VAR_1 ;
 int FUNC_1 (int,int,int const,int,int ,int ) ;
 int FUNC_2 (int * const,int const,int) ;
 int FUNC_3 (int,int const) ;
 int FUNC_4 (int) ;

__attribute__((used)) static WebPEncodingError FUNC_5(const VP8LEncoder* const VAR_2,
                                               int VAR_3, int VAR_4,
                                               int VAR_5, int VAR_6,
                                               VP8LBitWriter* const VAR_7) {
  const int VAR_8 = VAR_2->transform_bits_;
  const int VAR_9 = FUNC_3(VAR_3, VAR_8);
  const int VAR_10 = FUNC_3(VAR_4, VAR_8);

  FUNC_1(VAR_3, VAR_4, VAR_8, VAR_5,
                          VAR_2->argb_, VAR_2->transform_data_);
  FUNC_2(VAR_7, VAR_1, 1);
  FUNC_2(VAR_7, VAR_0, 2);
  FUNC_4(VAR_8 >= 2);
  FUNC_2(VAR_7, VAR_8 - 2, 3);
  return FUNC_0(
      VAR_7, VAR_2->transform_data_, (VP8LHashChain*)&VAR_2->hash_chain_,
      (VP8LBackwardRefs*)&VAR_2->refs_[0],
      (VP8LBackwardRefs*)&VAR_2->refs_[1], VAR_9, VAR_10,
      VAR_5, VAR_6);
}
