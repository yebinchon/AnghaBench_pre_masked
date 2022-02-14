
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct encoder_frame {scalar_t__* data; scalar_t__* linesize; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int,int*,int*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_2(AVFrame *VAR_1, const struct encoder_frame *VAR_2,
        int VAR_3, enum AVPixelFormat VAR_4)
{
 int VAR_5, VAR_6;
 FUNC_0(VAR_4, &VAR_5,
      &VAR_6);
 for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (!VAR_2->data[VAR_7])
   continue;

  int VAR_8 = (int)VAR_2->linesize[VAR_7];
  int VAR_9 = VAR_1->linesize[VAR_7];
  int VAR_10 = VAR_8 < VAR_9 ? VAR_8
       : VAR_9;
  int VAR_11 = VAR_3 >> (VAR_7 ? VAR_6 : 0);

  for (int VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
   int VAR_13 = VAR_12 * VAR_8;
   int VAR_14 = VAR_12 * VAR_9;

   FUNC_1(VAR_1->data[VAR_7] + VAR_14,
          VAR_2->data[VAR_7] + VAR_13, VAR_10);
  }
 }
}
