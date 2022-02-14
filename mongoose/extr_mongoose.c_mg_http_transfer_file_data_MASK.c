
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cgi_nc; } ;
struct TYPE_4__ {scalar_t__ cl; scalar_t__ sent; scalar_t__ type; int keepalive; int fp; } ;
struct mg_http_proto_data {TYPE_1__ cgi; TYPE_2__ file; } ;
struct mbuf {int len; int buf; } ;
struct mg_connection {int flags; struct mbuf recv_mbuf; struct mbuf send_mbuf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mbuf*,size_t) ;
 int FUNC_3 (struct mg_connection*,int *) ;
 size_t FUNC_4 (char*,int,size_t,int ) ;
 size_t FUNC_5 (int ,int,size_t,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 struct mg_http_proto_data* FUNC_7 (struct mg_connection*) ;
 int FUNC_8 (struct mg_connection*,char*,size_t) ;

__attribute__((used)) static void FUNC_9(struct mg_connection *VAR_5) {
  struct mg_http_proto_data *VAR_6 = FUNC_7(VAR_5);
  char VAR_7[VAR_4];
  size_t VAR_8 = 0, VAR_9 = 0, VAR_10 = (size_t)(VAR_6->file.cl - VAR_6->file.sent);

  if (VAR_6->file.type == VAR_0) {
    struct mbuf *VAR_11 = &VAR_5->send_mbuf;
    if (VAR_11->len >= VAR_4) {
      VAR_9 = 0;
    } else {
      VAR_9 = VAR_4 - VAR_11->len;
    }
    if (VAR_9 > VAR_10) {
      VAR_9 = VAR_10;
    }
    if (VAR_9 > 0) {
      VAR_8 = FUNC_4(VAR_7, 1, VAR_9, VAR_6->file.fp);
      if (VAR_8 > 0) {
        FUNC_8(VAR_5, VAR_7, VAR_8);
        VAR_6->file.sent += VAR_8;
        FUNC_0(("%p sent %d (total %d)", VAR_5, (int) VAR_8, (int) VAR_6->file.sent));
      }
    } else {

    }
    if (VAR_6->file.sent >= VAR_6->file.cl) {
      FUNC_1(VAR_2, ("%p done, %d bytes, ka %d", VAR_5, (int) VAR_6->file.sent,
                     VAR_6->file.keepalive));
      if (!VAR_6->file.keepalive) VAR_5->flags |= VAR_3;
      FUNC_6(&VAR_6->file);
    }
  } else if (VAR_6->file.type == VAR_1) {
    struct mbuf *VAR_12 = &VAR_5->recv_mbuf;
    size_t VAR_13 = VAR_10 <= 0 ? 0 : VAR_10 < VAR_12->len ? (size_t) VAR_10 : VAR_12->len;
    size_t VAR_14 = FUNC_5(VAR_12->buf, 1, VAR_13, VAR_6->file.fp);
    if (VAR_14 > 0) {
      FUNC_2(VAR_12, VAR_14);
      VAR_6->file.sent += VAR_14;
    }
    if (VAR_14 == 0 || VAR_6->file.sent >= VAR_6->file.cl) {
      if (!VAR_6->file.keepalive) VAR_5->flags |= VAR_3;
      FUNC_6(&VAR_6->file);
    }
  }
}
