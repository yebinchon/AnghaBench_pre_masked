
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int oa_base; } ;
struct TYPE_7__ {TYPE_1__ xp_verf; int * xp_p3; scalar_t__ xp_port; int xp_fd; } ;
struct svc_raw_private {TYPE_2__ server; int * raw_buf; int xdr_stream; int verf_body; } ;
typedef TYPE_2__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 struct svc_raw_private* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int *,int,int ) ;
 int FUNC_5 (TYPE_2__*) ;

SVCXPRT *
FUNC_6()
{
 struct svc_raw_private *VAR_6;


 FUNC_1(&VAR_5);
 VAR_6 = VAR_4;
 if (VAR_6 == ((void*)0)) {
  VAR_6 = (struct svc_raw_private *)FUNC_0(1, sizeof (*VAR_6));
  if (VAR_6 == ((void*)0)) {
   FUNC_2(&VAR_5);
   return (((void*)0));
  }
  if (VAR_3 == ((void*)0))
   VAR_3 = FUNC_0(VAR_1, sizeof (char));
  VAR_6->raw_buf = VAR_3;
  VAR_4 = VAR_6;
 }
 VAR_6->server.xp_fd = VAR_0;
 VAR_6->server.xp_port = 0;
 VAR_6->server.xp_p3 = ((void*)0);
 FUNC_3(&VAR_6->server);
 VAR_6->server.xp_verf.oa_base = VAR_6->verf_body;
 FUNC_4(&VAR_6->xdr_stream, VAR_6->raw_buf, VAR_1, VAR_2);
 FUNC_5(&VAR_6->server);
 FUNC_2(&VAR_5);
 return (&VAR_6->server);
}
