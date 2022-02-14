
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int WebPEncodingError ;
struct TYPE_11__ {int size; int * histograms; } ;
typedef TYPE_1__ VP8LHistogramSet ;
typedef int VP8LHashChain ;
typedef int VP8LBitWriter ;
typedef int VP8LBackwardRefs ;
struct TYPE_12__ {int num_symbols; int * const codes; int * member_2; int * member_1; int member_0; } ;
typedef int HuffmanTreeToken ;
typedef TYPE_2__ HuffmanTreeCode ;
typedef int HuffmanTree ;


 unsigned long long VAR_0 ;
 int FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int * const,int * const,int *,TYPE_2__* const) ;
 int FUNC_3 (int * const,int,int ,int *,int const*,TYPE_2__*) ;
 TYPE_1__* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int,int,int const* const,int,int ,int,int*,int * const,int * const,int * const) ;
 int FUNC_7 (int * const,int,int const* const,int,int,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int * const,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (int * const) ;
 scalar_t__ FUNC_12 (int,int) ;
 int FUNC_13 (int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static WebPEncodingError FUNC_14(VP8LBitWriter* const VAR_5,
                                              const uint32_t* const VAR_6,
                                              VP8LHashChain* const VAR_7,
                                              VP8LBackwardRefs* const VAR_8,
                                              VP8LBackwardRefs* const VAR_9,
                                              int VAR_10, int VAR_11,
                                              int VAR_12, int VAR_13) {
  int VAR_14;
  int VAR_15 = 0;
  WebPEncodingError VAR_16 = VAR_2;
  VP8LBackwardRefs* VAR_17;
  HuffmanTreeToken* VAR_18 = ((void*)0);
  HuffmanTreeCode VAR_19[5] = { { 0, ((void*)0), ((void*)0) } };
  const uint16_t VAR_20[1] = { 0 };
  int VAR_21 = 0;
  VP8LHistogramSet* VAR_22 = ((void*)0);
  HuffmanTree* const VAR_23 = (HuffmanTree*)FUNC_12(
        3ULL * VAR_0, sizeof(*VAR_23));
  if (VAR_23 == ((void*)0)) {
    VAR_16 = VAR_1;
    goto Error;
  }


  if (!FUNC_7(VAR_7, VAR_12, VAR_6, VAR_10, VAR_11,
                         VAR_13)) {
    VAR_16 = VAR_1;
    goto Error;
  }
  VAR_17 = FUNC_6(VAR_10, VAR_11, VAR_6, VAR_12, 0,
                                   VAR_4 | VAR_3, &VAR_21,
                                   VAR_7, VAR_8, VAR_9);
  if (VAR_17 == ((void*)0)) {
    VAR_16 = VAR_1;
    goto Error;
  }
  VAR_22 = FUNC_4(1, VAR_21);
  if (VAR_22 == ((void*)0)) {
    VAR_16 = VAR_1;
    goto Error;
  }
  FUNC_8(VAR_22);


  FUNC_9(VAR_17, VAR_22->histograms[0]);


  FUNC_13(VAR_22->size == 1);
  if (!FUNC_1(VAR_22, VAR_19)) {
    VAR_16 = VAR_1;
    goto Error;
  }


  FUNC_10(VAR_5, 0, 1);


  for (VAR_14 = 0; VAR_14 < 5; ++VAR_14) {
    HuffmanTreeCode* const VAR_24 = &VAR_19[VAR_14];
    if (VAR_15 < VAR_24->num_symbols) {
      VAR_15 = VAR_24->num_symbols;
    }
  }

  VAR_18 = (HuffmanTreeToken*)FUNC_12(VAR_15, sizeof(*VAR_18));
  if (VAR_18 == ((void*)0)) {
    VAR_16 = VAR_1;
    goto Error;
  }


  for (VAR_14 = 0; VAR_14 < 5; ++VAR_14) {
    HuffmanTreeCode* const VAR_25 = &VAR_19[VAR_14];
    FUNC_2(VAR_5, VAR_23, VAR_18, VAR_25);
    FUNC_0(VAR_25);
  }


  VAR_16 = FUNC_3(VAR_5, VAR_10, 0, VAR_17, VAR_20,
                            VAR_19);

 Error:
  FUNC_11(VAR_18);
  FUNC_11(VAR_23);
  FUNC_5(VAR_22);
  FUNC_11(VAR_19[0].codes);
  return VAR_16;
}
