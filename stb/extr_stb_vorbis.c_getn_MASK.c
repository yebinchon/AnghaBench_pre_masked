
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stream; scalar_t__ stream_end; int eof; int f; } ;
typedef TYPE_1__ vorb ;
typedef int uint8 ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int,int,int ) ;
 int FUNC_2 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(vorb *VAR_0, uint8 *VAR_1, int VAR_2)
{
   if (FUNC_0(VAR_0)) {
      if (VAR_0->stream+VAR_2 > VAR_0->stream_end) { VAR_0->eof = 1; return 0; }
      FUNC_2(VAR_1, VAR_0->stream, VAR_2);
      VAR_0->stream += VAR_2;
      return 1;
   }


   if (FUNC_1(VAR_1, VAR_2, 1, VAR_0->f) == 1)
      return 1;
   else {
      VAR_0->eof = 1;
      return 0;
   }

}
