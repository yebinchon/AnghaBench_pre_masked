
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {int id; } ;
typedef TYPE_1__ AVCodec ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char const*) ;

__attribute__((used)) static enum AVCodecID FUNC_1(const char *VAR_1, int VAR_2)
{
 AVCodec *VAR_3;

 if (VAR_2 != 0)
  return (enum AVCodecID)VAR_2;

 if (!VAR_1 || !*VAR_1)
  return VAR_0;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return VAR_0;

 return VAR_3->id;
}
