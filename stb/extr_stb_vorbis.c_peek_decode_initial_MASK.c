
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int bytes_in_seg; int packet_bytes; int next_seg; int segment_count; scalar_t__ valid_bits; TYPE_1__* mode_config; scalar_t__ mode_count; } ;
typedef TYPE_2__ vorb ;
struct TYPE_6__ {scalar_t__ blockflag; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_3(vorb *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int *VAR_5)
{
   int VAR_6, VAR_7;

   if (!FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5))
      return 0;


   VAR_6 = 1 + FUNC_0(VAR_0->mode_count-1);
   if (VAR_0->mode_config[*VAR_5].blockflag)
      VAR_6 += 2;
   VAR_7 = (VAR_6 + 7) / 8;

   VAR_0->bytes_in_seg += VAR_7;
   VAR_0->packet_bytes -= VAR_7;
   FUNC_1(VAR_0, -VAR_7);
   if (VAR_0->next_seg == -1)
      VAR_0->next_seg = VAR_0->segment_count - 1;
   else
      VAR_0->next_seg--;
   VAR_0->valid_bits = 0;

   return 1;
}
