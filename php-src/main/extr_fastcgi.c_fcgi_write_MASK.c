
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ fcgi_request_type ;
struct TYPE_8__ {int out_pos; int out_buf; scalar_t__ keep; TYPE_5__* out_hdr; int id; } ;
typedef TYPE_1__ fcgi_request ;
typedef int fcgi_header ;
struct TYPE_9__ {scalar_t__ type; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_5__*,scalar_t__,int ,int) ;
 int FUNC_3 (int,char const*,int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,char const*,int) ;

int FUNC_6(fcgi_request *VAR_0, fcgi_request_type VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3 <= 0) {
  return 0;
 }

 if (VAR_0->out_hdr && VAR_0->out_hdr->type != VAR_1) {
  FUNC_0(VAR_0);
 }
 VAR_4 = (int)(sizeof(VAR_0->out_buf) - (VAR_0->out_pos - VAR_0->out_buf));
 if (!VAR_0->out_hdr) {
  VAR_4 -= sizeof(fcgi_header);
  if (VAR_4 < 0) VAR_4 = 0;
 }

 if (VAR_3 < VAR_4) {
  if (!VAR_0->out_hdr) {
   FUNC_4(VAR_0, VAR_1);
  }
  FUNC_3(VAR_0->out_pos, VAR_2, VAR_3);
  VAR_0->out_pos += VAR_3;
 } else if (VAR_3 - VAR_4 < (int)(sizeof(VAR_0->out_buf) - sizeof(fcgi_header))) {
  if (!VAR_0->out_hdr) {
   FUNC_4(VAR_0, VAR_1);
  }
  if (VAR_4 > 0) {
   FUNC_3(VAR_0->out_pos, VAR_2, VAR_4);
   VAR_0->out_pos += VAR_4;
  }
  if (!FUNC_1(VAR_0, 0)) {
   return -1;
  }
  if (VAR_3 > VAR_4) {
   FUNC_4(VAR_0, VAR_1);
   FUNC_3(VAR_0->out_pos, VAR_2 + VAR_4, VAR_3 - VAR_4);
   VAR_0->out_pos += VAR_3 - VAR_4;
  }
 } else {
  int VAR_6 = 0;
  int VAR_7;

  FUNC_0(VAR_0);
  while ((VAR_3 - VAR_6) > 0xffff) {
   FUNC_4(VAR_0, VAR_1);
   FUNC_2(VAR_0->out_hdr, VAR_1, VAR_0->id, 0xfff8);
   VAR_0->out_hdr = ((void*)0);
   if (!FUNC_1(VAR_0, 0)) {
    return -1;
   }
   if (FUNC_5(VAR_0, VAR_2 + VAR_6, 0xfff8) != 0xfff8) {
    VAR_0->keep = 0;
    return -1;
   }
   VAR_6 += 0xfff8;
  }

  VAR_7 = (((VAR_3 - VAR_6) + 7) & ~7) - (VAR_3 - VAR_6);
  VAR_5 = VAR_7 ? 8 - VAR_7 : 0;

  FUNC_4(VAR_0, VAR_1);
  FUNC_2(VAR_0->out_hdr, VAR_1, VAR_0->id, (VAR_3 - VAR_6) - VAR_5);
  VAR_0->out_hdr = ((void*)0);
  if (!FUNC_1(VAR_0, 0)) {
   return -1;
  }
  if (FUNC_5(VAR_0, VAR_2 + VAR_6, (VAR_3 - VAR_6) - VAR_5) != (VAR_3 - VAR_6) - VAR_5) {
   VAR_0->keep = 0;
   return -1;
  }
  if (VAR_7) {
   FUNC_4(VAR_0, VAR_1);
   FUNC_3(VAR_0->out_pos, VAR_2 + VAR_3 - VAR_5, VAR_5);
   VAR_0->out_pos += VAR_5;
  }
 }

 return VAR_3;
}
