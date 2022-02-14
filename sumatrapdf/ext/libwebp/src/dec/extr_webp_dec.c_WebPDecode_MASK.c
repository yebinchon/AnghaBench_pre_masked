
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int uint8_t ;
struct TYPE_17__ {int height; int width; int colorspace; } ;
struct TYPE_14__ {int height; int width; } ;
struct TYPE_15__ {TYPE_3__ output; TYPE_11__ input; int options; } ;
typedef TYPE_1__ WebPDecoderConfig ;
struct TYPE_16__ {TYPE_3__* output; int * options; } ;
typedef TYPE_2__ WebPDecParams ;
typedef TYPE_3__ WebPDecBuffer ;
typedef scalar_t__ VP8StatusCode ;


 scalar_t__ FUNC_0 (int const*,size_t,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int const*,size_t,TYPE_11__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_11__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*) ;

VP8StatusCode FUNC_7(const uint8_t* VAR_4, size_t VAR_5,
                         WebPDecoderConfig* VAR_6) {
  WebPDecParams VAR_7;
  VP8StatusCode VAR_8;

  if (VAR_6 == ((void*)0)) {
    return VAR_1;
  }

  VAR_8 = FUNC_1(VAR_4, VAR_5, &VAR_6->input);
  if (VAR_8 != VAR_3) {
    if (VAR_8 == VAR_2) {
      return VAR_0;
    }
    return VAR_8;
  }

  FUNC_6(&VAR_7);
  VAR_7.options = &VAR_6->options;
  VAR_7.output = &VAR_6->output;
  if (FUNC_2(VAR_7.output, &VAR_6->input)) {

    WebPDecBuffer VAR_9;
    FUNC_5(&VAR_9);
    VAR_9.colorspace = VAR_6->output.colorspace;
    VAR_9.width = VAR_6->input.width;
    VAR_9.height = VAR_6->input.height;
    VAR_7.output = &VAR_9;
    VAR_8 = FUNC_0(VAR_4, VAR_5, &VAR_7);
    if (VAR_8 == VAR_3) {
      VAR_8 = FUNC_3(&VAR_9, &VAR_6->output);
    }
    FUNC_4(&VAR_9);
  } else {
    VAR_8 = FUNC_0(VAR_4, VAR_5, &VAR_7);
  }

  return VAR_8;
}
