
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_19__ {int is_partial_; int * img_; int * alpha_; int * header_; TYPE_4__* unknown_; } ;
typedef TYPE_2__ WebPMuxImage ;
struct TYPE_20__ {size_t const member_1; int const* member_0; } ;
typedef TYPE_3__ WebPData ;
struct TYPE_18__ {size_t size; int * bytes; } ;
struct TYPE_21__ {scalar_t__ tag_; TYPE_1__ data_; } ;
typedef TYPE_4__ WebPChunk ;
struct TYPE_22__ {scalar_t__ tag; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_4__***) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__ const*,int,scalar_t__) ;
 size_t FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int **) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int const*,size_t,size_t,int) ;
 size_t VAR_2 ;
 int FUNC_8 (TYPE_2__* const) ;



 scalar_t__ VAR_3 ;
 int FUNC_9 (int) ;
 TYPE_5__* VAR_4 ;

__attribute__((used)) static int FUNC_10(const WebPChunk* const VAR_5, int VAR_6,
                         WebPMuxImage* const VAR_7) {
  const uint8_t* VAR_8 = VAR_5->data_.bytes;
  size_t VAR_9 = VAR_5->data_.size;
  const uint8_t* const VAR_10 = VAR_8 + VAR_9;
  WebPChunk VAR_11;
  size_t VAR_12;
  WebPChunk** VAR_13 = &VAR_7->unknown_;
  FUNC_4(&VAR_11);

  FUNC_9(VAR_5->tag_ == VAR_4[VAR_2].tag);
  FUNC_9(!VAR_7->is_partial_);


  {
    const size_t VAR_14 = VAR_0;
    const WebPData VAR_15 = { VAR_8, VAR_14 };


    if (VAR_9 < VAR_14) goto Fail;
    FUNC_1(&VAR_11, &VAR_15, VAR_6, VAR_5->tag_);
  }
  FUNC_6(&VAR_11, &VAR_7->header_);
  VAR_7->is_partial_ = 1;


  VAR_12 = FUNC_2(&VAR_11) - VAR_1;
  VAR_8 += VAR_12;
  VAR_9 -= VAR_12;

  while (VAR_8 != VAR_10) {
    FUNC_4(&VAR_11);
    if (FUNC_7(&VAR_11, VAR_8, VAR_9, VAR_9,
                             VAR_6) != VAR_3) {
      goto Fail;
    }
    switch (FUNC_3(VAR_11.tag_)) {
      case 130:
        if (VAR_7->alpha_ != ((void*)0)) goto Fail;
        if (FUNC_6(&VAR_11, &VAR_7->alpha_) != VAR_3) goto Fail;
        VAR_7->is_partial_ = 1;
        break;
      case 129:
        if (VAR_7->img_ != ((void*)0)) goto Fail;
        if (FUNC_6(&VAR_11, &VAR_7->img_) != VAR_3) goto Fail;
        if (!FUNC_8(VAR_7)) goto Fail;
        VAR_7->is_partial_ = 0;
        break;
      case 128:
        if (VAR_7->is_partial_) {
          goto Fail;

        }
        if (FUNC_0(&VAR_11, &VAR_13) != VAR_3) {
          goto Fail;
        }
        break;
      default:
        goto Fail;
        break;
    }
    VAR_12 = FUNC_2(&VAR_11);
    VAR_8 += VAR_12;
    VAR_9 -= VAR_12;
  }
  if (VAR_7->is_partial_) goto Fail;
  return 1;

 Fail:
  FUNC_5(&VAR_11);
  return 0;
}
