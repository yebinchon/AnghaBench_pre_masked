
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int blend_method; int dispose_method; int y_offset; int x_offset; int duration; } ;
typedef TYPE_1__ WebPMuxFrameInfo ;
typedef int WebPMuxAnimDispose ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (char const*,char*,int *,int *,int *,int*,char*,char*,int*) ;

__attribute__((used)) static int FUNC_2(const char* VAR_2, WebPMuxFrameInfo* const VAR_3) {
  int VAR_4, VAR_5;
  char VAR_6, VAR_7;
  const int VAR_8 = FUNC_1(VAR_2, "+%d+%d+%d+%d%c%c+%d", &VAR_3->duration,
                              &VAR_3->x_offset, &VAR_3->y_offset, &VAR_4,
                              &VAR_6, &VAR_7, &VAR_5);
  switch (VAR_8) {
    case 1:
      VAR_3->x_offset = VAR_3->y_offset = 0;
    case 3:
      VAR_4 = 0;
    case 4:
      VAR_6 = '+';
      VAR_7 = 'b';
    case 6:
      break;
    case 2:
    case 5:
    default:
      return 0;
  }

  FUNC_0(VAR_3);



  VAR_3->dispose_method = (WebPMuxAnimDispose)VAR_4;

  if (VAR_7 != 'b') return 0;
  if (VAR_6 != '-' && VAR_6 != '+') return 0;
  VAR_3->blend_method =
      (VAR_6 == '+') ? VAR_0 : VAR_1;
  return 1;
}
