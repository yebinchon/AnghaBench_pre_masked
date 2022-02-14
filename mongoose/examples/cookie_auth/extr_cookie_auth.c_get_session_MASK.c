
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct session {scalar_t__ id; int last_used; } ;
struct mg_str {int dummy; } ;
struct http_message {int dummy; } ;
typedef int ssid_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct mg_str* FUNC_1 (struct http_message*,char*) ;
 int FUNC_2 (struct mg_str*,int ,char**,int) ;
 int FUNC_3 () ;
 struct session* VAR_2 ;
 scalar_t__ FUNC_4 (char*,int *,int) ;

__attribute__((used)) static struct session *FUNC_5(struct http_message *VAR_3) {
  char VAR_4[21];
  char *VAR_5 = VAR_4;
  struct session *VAR_6 = ((void*)0);
  struct mg_str *VAR_7 = FUNC_1(VAR_3, "cookie");
  if (VAR_7 == ((void*)0)) goto clean;
  if (!FUNC_2(VAR_7, VAR_1, &VAR_5,
                             sizeof(VAR_4))) {
    goto clean;
  }
  uint64_t VAR_8 = FUNC_4(VAR_5, ((void*)0), 16);
  int VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
    if (VAR_2[VAR_9].id == VAR_8) {
      VAR_2[VAR_9].last_used = FUNC_3();
      VAR_6 = &VAR_2[VAR_9];
      goto clean;
    }
  }

clean:
  if (VAR_5 != VAR_4) {
    FUNC_0(VAR_5);
  }
  return VAR_6;
}
