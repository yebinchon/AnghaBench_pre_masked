
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stream; scalar_t__ stream_end; int eof; int f; } ;
typedef TYPE_1__ vorb ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,long,int ) ;
 long FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(vorb *VAR_1, int VAR_2)
{
   if (FUNC_0(VAR_1)) {
      VAR_1->stream += VAR_2;
      if (VAR_1->stream >= VAR_1->stream_end) VAR_1->eof = 1;
      return;
   }

   {
      long VAR_3 = FUNC_2(VAR_1->f);
      FUNC_1(VAR_1->f, VAR_3+VAR_2, VAR_0);
   }

}
