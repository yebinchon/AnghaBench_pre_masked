
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_5__* img_; TYPE_5__* alpha_; int height_; int width_; } ;
typedef TYPE_1__ WebPMuxImage ;
typedef int WebPMuxError ;
struct TYPE_8__ {size_t size; int * bytes; } ;
typedef TYPE_2__ WebPData ;
struct TYPE_9__ {int * next_; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t const FUNC_0 (TYPE_5__*) ;
 int * FUNC_1 (TYPE_5__*,int *) ;
 int * FUNC_2 (int *,int ,int ,int ) ;
 int * FUNC_3 (int * const,size_t const) ;
 size_t const VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (unsigned long long,size_t const) ;
 int FUNC_5 (int) ;

__attribute__((used)) static WebPMuxError FUNC_6(const WebPMuxImage* const VAR_6,
                                        WebPData* const VAR_7) {
  uint8_t* VAR_8;


  const int VAR_9 = (VAR_6->alpha_ != ((void*)0));
  const size_t VAR_10 = VAR_9 ? VAR_1 + VAR_3 : 0;
  const size_t VAR_11 = VAR_9 ? FUNC_0(VAR_6->alpha_) : 0;

  const size_t VAR_12 = VAR_2 + VAR_10 + VAR_11 +
                      FUNC_0(VAR_6->img_);
  uint8_t* const VAR_13 = (uint8_t*)FUNC_4(1ULL, VAR_12);
  if (VAR_13 == ((void*)0)) return VAR_4;


  FUNC_5(VAR_6->alpha_ == ((void*)0) || VAR_6->alpha_->next_ == ((void*)0));
  FUNC_5(VAR_6->img_ != ((void*)0) && VAR_6->img_->next_ == ((void*)0));


  VAR_8 = FUNC_3(VAR_13, VAR_12);

  if (VAR_9) {
    VAR_8 = FUNC_2(VAR_8, VAR_6->width_, VAR_6->height_, VAR_0);
    VAR_8 = FUNC_1(VAR_6->alpha_, VAR_8);
  }


  VAR_8 = FUNC_1(VAR_6->img_, VAR_8);
  FUNC_5(VAR_8 == VAR_13 + VAR_12);


  VAR_7->bytes = VAR_13;
  VAR_7->size = VAR_12;
  return VAR_5;
}
