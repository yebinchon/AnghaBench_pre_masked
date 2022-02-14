
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int hdrs ;
struct TYPE_4__ {int have_all_data; size_t data_size; scalar_t__ riff_size; scalar_t__ compressed_size; int offset; int * alpha_data; int const* data; scalar_t__ is_lossless; int alpha_data_size; } ;
typedef TYPE_1__ WebPHeaderStructure ;
typedef scalar_t__ VP8StatusCode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int const**,size_t*,scalar_t__,int **,int *) ;
 scalar_t__ FUNC_1 (int const**,size_t*,int const,scalar_t__*) ;
 scalar_t__ FUNC_2 (int const**,size_t*,int const,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int const**,size_t*,int*,int*,int*,int*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_4 (int const*,size_t,int,int*,int*) ;
 int FUNC_5 (int const*,size_t,int*,int*,int* const) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int const*,char*,size_t) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

__attribute__((used)) static VP8StatusCode FUNC_9(const uint8_t* VAR_10,
                                          size_t VAR_11,
                                          int* const VAR_12,
                                          int* const VAR_13,
                                          int* const VAR_14,
                                          int* const VAR_15,
                                          int* const VAR_16,
                                          WebPHeaderStructure* const VAR_17) {
  int VAR_18 = 0;
  int VAR_19 = 0;
  int VAR_20 = 0;
  int VAR_21 = 0;
  int VAR_22 = 0;
  int VAR_23 = 0;
  int VAR_24 = 0;
  const int VAR_25 = (VAR_17 != ((void*)0)) ? VAR_17->have_all_data : 0;

  VP8StatusCode VAR_26;
  WebPHeaderStructure VAR_27;

  if (VAR_10 == ((void*)0) || VAR_11 < VAR_3) {
    return VAR_8;
  }
  FUNC_8(&VAR_27, 0, sizeof(VAR_27));
  VAR_27.data = VAR_10;
  VAR_27.data_size = VAR_11;


  VAR_26 = FUNC_1(&VAR_10, &VAR_11, VAR_25, &VAR_27.riff_size);
  if (VAR_26 != VAR_9) {
    return VAR_26;
  }
  VAR_22 = (VAR_27.riff_size > 0);


  {
    uint32_t VAR_28 = 0;
    VAR_26 = FUNC_3(&VAR_10, &VAR_11, &VAR_23,
                       &VAR_18, &VAR_19, &VAR_28);
    if (VAR_26 != VAR_9) {
      return VAR_26;
    }
    VAR_24 = !!(VAR_28 & VAR_1);
    if (!VAR_22 && VAR_23) {


      return VAR_7;
    }
    if (VAR_14 != ((void*)0)) *VAR_14 = !!(VAR_28 & VAR_0);
    if (VAR_15 != ((void*)0)) *VAR_15 = VAR_24;
    if (VAR_16 != ((void*)0)) *VAR_16 = 0;

    VAR_20 = VAR_18;
    VAR_21 = VAR_19;
    if (VAR_23 && VAR_24 && VAR_17 == ((void*)0)) {
      VAR_26 = VAR_9;
      goto ReturnWidthHeight;
    }
  }

  if (VAR_11 < VAR_4) {
    VAR_26 = VAR_8;
    goto ReturnWidthHeight;
  }


  if ((VAR_22 && VAR_23) ||
      (!VAR_22 && !VAR_23 && !FUNC_7(VAR_10, "ALPH", VAR_4))) {
    VAR_26 = FUNC_0(&VAR_10, &VAR_11, VAR_27.riff_size,
                                 &VAR_27.alpha_data, &VAR_27.alpha_data_size);
    if (VAR_26 != VAR_9) {
      goto ReturnWidthHeight;
    }
  }


  VAR_26 = FUNC_2(&VAR_10, &VAR_11, VAR_25, VAR_27.riff_size,
                          &VAR_27.compressed_size, &VAR_27.is_lossless);
  if (VAR_26 != VAR_9) {
    goto ReturnWidthHeight;
  }
  if (VAR_27.compressed_size > VAR_2) {
    return VAR_7;
  }

  if (VAR_16 != ((void*)0) && !VAR_24) {
    *VAR_16 = VAR_27.is_lossless ? 2 : 1;
  }

  if (!VAR_27.is_lossless) {
    if (VAR_11 < VAR_6) {
      VAR_26 = VAR_8;
      goto ReturnWidthHeight;
    }

    if (!FUNC_4(VAR_10, VAR_11, (uint32_t)VAR_27.compressed_size,
                    &VAR_20, &VAR_21)) {
      return VAR_7;
    }
  } else {
    if (VAR_11 < VAR_5) {
      VAR_26 = VAR_8;
      goto ReturnWidthHeight;
    }

    if (!FUNC_5(VAR_10, VAR_11, &VAR_20, &VAR_21, VAR_14)) {
      return VAR_7;
    }
  }

  if (VAR_23) {
    if (VAR_18 != VAR_20 || VAR_19 != VAR_21) {
      return VAR_7;
    }
  }
  if (VAR_17 != ((void*)0)) {
    *VAR_17 = VAR_27;
    VAR_17->offset = VAR_10 - VAR_17->data;
    FUNC_6((uint64_t)(VAR_10 - VAR_17->data) < VAR_2);
    FUNC_6(VAR_17->offset == VAR_17->data_size - VAR_11);
  }
 ReturnWidthHeight:
  if (VAR_26 == VAR_9 ||
      (VAR_26 == VAR_8 && VAR_23 && VAR_17 == ((void*)0))) {
    if (VAR_14 != ((void*)0)) {


      *VAR_14 |= (VAR_27.alpha_data != ((void*)0));
    }
    if (VAR_12 != ((void*)0)) *VAR_12 = VAR_20;
    if (VAR_13 != ((void*)0)) *VAR_13 = VAR_21;
    return VAR_9;
  } else {
    return VAR_26;
  }
}
