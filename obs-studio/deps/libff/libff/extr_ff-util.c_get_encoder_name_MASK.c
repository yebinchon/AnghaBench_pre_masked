
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ff_format_desc {char const* name; } ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {char const* name; } ;
typedef TYPE_1__ AVCodec ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static const char *FUNC_1(const struct ff_format_desc *VAR_1,
                                    enum AVCodecID VAR_2)
{
 AVCodec *VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0) && VAR_2 == VAR_0)
  return ((void*)0);
 else if (VAR_3 == ((void*)0))
  return VAR_1->name;
 else
  return VAR_3->name;
}
