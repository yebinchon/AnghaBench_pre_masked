
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pos; scalar_t__ buffer; } ;
typedef TYPE_1__ ME_OutStream ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (scalar_t__,char const*,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static BOOL
FUNC_5(ME_OutStream *VAR_3, const char *VAR_4, int VAR_5)
{
  while (VAR_5) {
    int VAR_6 = VAR_1 - VAR_3->pos;
    int VAR_7 = FUNC_4(VAR_6, VAR_5);

    FUNC_1("%u:%u:%s\n", VAR_3->pos, VAR_7, FUNC_2(VAR_4,VAR_7));
    FUNC_3(VAR_3->buffer + VAR_3->pos, VAR_4, VAR_7);
    VAR_5 -= VAR_7;
    VAR_4 += VAR_7;
    VAR_3->pos += VAR_7;
    if (VAR_3->pos == VAR_1) {
      if (!FUNC_0(VAR_3))
        return VAR_0;
    }
  }
  return VAR_2;
}
