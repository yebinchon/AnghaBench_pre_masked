
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ data; int flags; int pts; } ;
struct ff_packet {TYPE_4__ base; int * clock; int member_0; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct TYPE_8__ {TYPE_2__ flush_packet; } ;
struct ff_decoder {int finished; int * clock; int codec; TYPE_3__ packet_queue; scalar_t__ eof; int abort; } ;
typedef scalar_t__ int64_t ;
typedef int AVFrame ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 () ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int *,int*,TYPE_4__*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int **) ;
 int FUNC_7 (int **) ;
 scalar_t__ FUNC_8 (int *) ;
 double FUNC_9 (struct ff_decoder*,int *) ;
 int FUNC_10 (struct ff_decoder*,scalar_t__,int ) ;
 int FUNC_11 (TYPE_3__*,struct ff_packet*,int) ;
 int FUNC_12 (struct ff_decoder*,int *,double) ;

void *FUNC_13(void *VAR_4)
{
 struct ff_decoder *VAR_5 = (struct ff_decoder *)VAR_4;

 struct ff_packet VAR_6 = {0};
 int VAR_7;
 AVFrame *VAR_8 = FUNC_0();
 int VAR_9;
 bool VAR_10;

 while (!VAR_5->abort) {
  if (VAR_5->eof)
   VAR_9 = FUNC_11(&VAR_5->packet_queue, &VAR_6,
                          0);
  else
   VAR_9 = FUNC_11(&VAR_5->packet_queue, &VAR_6,
                          1);

  if (VAR_9 == VAR_2 || VAR_9 == VAR_3) {

   break;
  }

  if (VAR_6.base.data ==
      VAR_5->packet_queue.flush_packet.base.data) {
   FUNC_5(VAR_5->codec);
   continue;
  }


  if (VAR_6.clock != ((void*)0)) {
   if (VAR_5->clock != ((void*)0))
    FUNC_7(&VAR_5->clock);
   VAR_5->clock = FUNC_6(&VAR_6.clock);
   FUNC_3(&VAR_6.base);
   continue;
  }

  int64_t VAR_11 = FUNC_8(VAR_5->clock);
  VAR_10 = VAR_6.base.flags & VAR_1;




  bool VAR_12 = VAR_10;

  VAR_12 &= VAR_11 != VAR_0;

  if (VAR_12)
   FUNC_10(VAR_5, VAR_11,
                                   VAR_6.base.pts);

  FUNC_4(VAR_5->codec, VAR_8, &VAR_7,
                        &VAR_6.base);




  if (VAR_7) {




   double VAR_13 =
           FUNC_9(VAR_5, VAR_8);

   FUNC_12(VAR_5, VAR_8, VAR_13);
   FUNC_2(VAR_8);
  }

  FUNC_3(&VAR_6.base);
 }

 if (VAR_5->clock != ((void*)0))
  FUNC_7(&VAR_5->clock);

 FUNC_1(&VAR_8);

 VAR_5->finished = 1;

 return ((void*)0);
}
