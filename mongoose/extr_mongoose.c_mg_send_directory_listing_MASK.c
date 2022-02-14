
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_serve_http_opts {int extra_headers; } ;
struct mg_connection {int flags; } ;
struct TYPE_2__ {int p; scalar_t__ len; } ;
struct http_message {TYPE_1__ uri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mg_connection*,char*,char*,char*,char*,char*) ;
 int FUNC_1 (struct mg_connection*,char*,int,...) ;
 int FUNC_2 (struct mg_connection*,char const*,struct mg_serve_http_opts*,int ) ;
 int FUNC_3 (struct mg_connection*,char*,int ) ;
 int FUNC_4 (struct mg_connection*,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_3, const char *VAR_4,
                                      struct http_message *VAR_5,
                                      struct mg_serve_http_opts *VAR_6) {
  static const char *VAR_7 =
      "<script>function srt(tb, sc, so, d) {"
      "var tr = Array.prototype.slice.call(tb.rows, 0),"
      "tr = tr.sort(function (a, b) { var c1 = a.cells[sc], c2 = b.cells[sc],"
      "n1 = c1.getAttribute('name'), n2 = c2.getAttribute('name'), "
      "t1 = a.cells[2].getAttribute('name'), "
      "t2 = b.cells[2].getAttribute('name'); "
      "return so * (t1 < 0 && t2 >= 0 ? -1 : t2 < 0 && t1 >= 0 ? 1 : "
      "n1 ? parseInt(n2) - parseInt(n1) : "
      "c1.textContent.trim().localeCompare(c2.textContent.trim())); });";
  static const char *VAR_8 =
      "for (var i = 0; i < tr.length; i++) tb.appendChild(tr[i]); "
      "if (!d) window.location.hash = ('sc=' + sc + '&so=' + so); "
      "};"
      "window.onload = function() {"
      "var tb = document.getElementById('tb');"
      "var m = /sc=([012]).so=(1|-1)/.exec(window.location.hash) || [0, 2, 1];"
      "var sc = m[1], so = m[2]; document.onclick = function(ev) { "
      "var c = ev.target.rel; if (c) {if (c == sc) so *= -1; srt(tb, c, so); "
      "sc = c; ev.preventDefault();}};"
      "srt(tb, sc, so, true);"
      "}"
      "</script>";

  FUNC_4(VAR_3, 200, VAR_6->extra_headers);
  FUNC_0(VAR_3, "%s: %s\r\n%s: %s\r\n\r\n", "Transfer-Encoding", "chunked",
            "Content-Type", "text/html; charset=utf-8");

  FUNC_1(
      VAR_3,
      "<html><head><title>Index of %.*s</title>%s%s"
      "<style>th,td {text-align: left; padding-right: 1em; "
      "font-family: monospace; }</style></head>\n"
      "<body><h1>Index of %.*s</h1>\n<table cellpadding=0><thead>"
      "<tr><th><a href=# rel=0>Name</a></th><th>"
      "<a href=# rel=1>Modified</a</th>"
      "<th><a href=# rel=2>Size</a></th></tr>"
      "<tr><td colspan=3><hr></td></tr>\n"
      "</thead>\n"
      "<tbody id=tb>",
      (int) VAR_5->uri.len, VAR_5->uri.p, VAR_7, VAR_8,
      (int) VAR_5->uri.len, VAR_5->uri.p);
  FUNC_2(VAR_3, VAR_4, VAR_6, VAR_1);
  FUNC_1(VAR_3,
                       "</tbody><tr><td colspan=3><hr></td></tr>\n"
                       "</table>\n"
                       "<address>%s</address>\n"
                       "</body></html>",
                       VAR_2);
  FUNC_3(VAR_3, "", 0);

  VAR_3->flags |= VAR_0;
}
