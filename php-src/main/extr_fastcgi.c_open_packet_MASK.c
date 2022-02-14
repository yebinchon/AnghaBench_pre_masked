
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fcgi_request_type ;
struct TYPE_5__ {TYPE_2__* out_hdr; scalar_t__ out_pos; } ;
typedef TYPE_1__ fcgi_request ;
struct TYPE_6__ {int type; } ;
typedef TYPE_2__ fcgi_header ;



__attribute__((used)) static inline fcgi_header* FUNC_0(fcgi_request *VAR_0, fcgi_request_type VAR_1)
{
 VAR_0->out_hdr = (fcgi_header*) VAR_0->out_pos;
 VAR_0->out_hdr->type = VAR_1;
 VAR_0->out_pos += sizeof(fcgi_header);
 return VAR_0->out_hdr;
}
