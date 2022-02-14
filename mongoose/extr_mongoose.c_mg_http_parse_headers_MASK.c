
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_str {int len; char* p; } ;
struct TYPE_4__ {size_t len; } ;
struct TYPE_3__ {int len; } ;
struct http_message {TYPE_2__ body; TYPE_1__ message; struct mg_str* header_values; struct mg_str* header_names; } ;


 scalar_t__ FUNC_0 (struct mg_str*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char const*,char const*,char*,struct mg_str*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_0, const char *VAR_1,
                                         int VAR_2, struct http_message *VAR_3) {
  int VAR_4 = 0;
  while (VAR_4 < (int) FUNC_0(VAR_3->header_names) - 1) {
    struct mg_str *VAR_5 = &VAR_3->header_names[VAR_4], *VAR_6 = &VAR_3->header_values[VAR_4];

    VAR_0 = FUNC_2(VAR_0, VAR_1, ": ", VAR_5);
    VAR_0 = FUNC_2(VAR_0, VAR_1, "\r\n", VAR_6);

    while (VAR_6->len > 0 && VAR_6->p[VAR_6->len - 1] == ' ') {
      VAR_6->len--;
    }






    if (VAR_5->len != 0 && VAR_6->len == 0) {
      continue;
    }

    if (VAR_5->len == 0 || VAR_6->len == 0) {
      VAR_5->p = VAR_6->p = ((void*)0);
      VAR_5->len = VAR_6->len = 0;
      break;
    }

    if (!FUNC_1(VAR_5->p, "Content-Length", 14)) {
      VAR_3->body.len = (size_t) FUNC_3(VAR_6->p);
      VAR_3->message.len = VAR_2 + VAR_3->body.len;
    }

    VAR_4++;
  }

  return VAR_0;
}
