
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ out_buf; scalar_t__ out_pos; scalar_t__ keep; int id; } ;
typedef TYPE_2__ fcgi_request ;
struct TYPE_7__ {int protocolStatus; scalar_t__ appStatusB0; scalar_t__ appStatusB1; scalar_t__ appStatusB2; scalar_t__ appStatusB3; } ;
struct TYPE_9__ {TYPE_1__ body; int hdr; } ;
typedef TYPE_3__ fcgi_end_request_rec ;
typedef int fcgi_end_request ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int) ;

int FUNC_3(fcgi_request *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2);

 VAR_4 = (int)(VAR_2->out_pos - VAR_2->out_buf);

 if (VAR_3) {
  fcgi_end_request_rec *VAR_5 = (fcgi_end_request_rec*)(VAR_2->out_pos);

  FUNC_1(&VAR_5->hdr, VAR_0, VAR_2->id, sizeof(fcgi_end_request));
  VAR_5->body.appStatusB3 = 0;
  VAR_5->body.appStatusB2 = 0;
  VAR_5->body.appStatusB1 = 0;
  VAR_5->body.appStatusB0 = 0;
  VAR_5->body.protocolStatus = VAR_1;
  VAR_4 += sizeof(fcgi_end_request_rec);
 }

 if (FUNC_2(VAR_2, VAR_2->out_buf, VAR_4) != VAR_4) {
  VAR_2->keep = 0;
  VAR_2->out_pos = VAR_2->out_buf;
  return 0;
 }

 VAR_2->out_pos = VAR_2->out_buf;
 return 1;
}
