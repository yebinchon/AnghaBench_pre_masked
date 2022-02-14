
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_stream {int outcnt; int incnt; } ;
struct TYPE_4__ {scalar_t__ mid; } ;
struct TYPE_3__ {scalar_t__ mid_uo; scalar_t__ mid; } ;


 TYPE_2__* FUNC_0 (struct sctp_stream*,int) ;
 TYPE_1__* FUNC_1 (struct sctp_stream*,int) ;

void FUNC_2(struct sctp_stream *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->outcnt; VAR_1++) {
  FUNC_1(VAR_0, VAR_1)->mid = 0;
  FUNC_1(VAR_0, VAR_1)->mid_uo = 0;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->incnt; VAR_1++)
  FUNC_0(VAR_0, VAR_1)->mid = 0;
}
