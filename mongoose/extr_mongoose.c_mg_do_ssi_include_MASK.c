
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_serve_http_opts {char* document_root; char* ssi_pattern; } ;
struct mg_connection {int dummy; } ;
struct http_message {int dummy; } ;
typedef int sock_t ;
typedef int path ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,int,char*) ;
 int FUNC_5 (struct mg_connection*,char*,char*,...) ;
 int FUNC_6 (struct mg_connection*,int *) ;
 int FUNC_7 (struct mg_connection*,struct http_message*,char*,int *,int,struct mg_serve_http_opts const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int,char*,char const*,...) ;
 int FUNC_10 (char*,char*,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,int ) ;

__attribute__((used)) static void FUNC_14(struct mg_connection *VAR_2, struct http_message *VAR_3,
                              const char *VAR_4, char *VAR_5, int VAR_6,
                              const struct mg_serve_http_opts *VAR_7) {
  char VAR_8[VAR_1], VAR_9[VAR_1], *VAR_10;
  FILE *VAR_11;





  if (FUNC_10(VAR_5, " virtual=\"%[^\"]\"", VAR_8) == 1) {

    FUNC_9(VAR_9, sizeof(VAR_9), "%s/%s", VAR_7->document_root, VAR_8);
  } else if (FUNC_10(VAR_5, " abspath=\"%[^\"]\"", VAR_8) == 1) {




    FUNC_9(VAR_9, sizeof(VAR_9), "%s", VAR_8);
  } else if (FUNC_10(VAR_5, " file=\"%[^\"]\"", VAR_8) == 1 ||
             FUNC_10(VAR_5, " \"%[^\"]\"", VAR_8) == 1) {

    FUNC_9(VAR_9, sizeof(VAR_9), "%s", VAR_4);
    if ((VAR_10 = FUNC_13(VAR_9, VAR_0)) != ((void*)0)) {
      VAR_10[1] = '\0';
    }
    FUNC_9(VAR_9 + FUNC_12(VAR_9), sizeof(VAR_9) - FUNC_12(VAR_9), "%s", VAR_8);
  } else {
    FUNC_5(VAR_2, "Bad SSI #include: [%s]", VAR_5);
    return;
  }

  if ((VAR_11 = FUNC_2(VAR_9, "rb")) == ((void*)0)) {
    FUNC_5(VAR_2, "SSI include error: mg_fopen(%s): %s", VAR_9,
              FUNC_11(FUNC_3()));
  } else {
    FUNC_8((sock_t) FUNC_1(VAR_11));
    if (FUNC_4(VAR_7->ssi_pattern, FUNC_12(VAR_7->ssi_pattern), VAR_9) >
        0) {
      FUNC_7(VAR_2, VAR_3, VAR_9, VAR_11, VAR_6 + 1, VAR_7);
    } else {
      FUNC_6(VAR_2, VAR_11);
    }
    FUNC_0(VAR_11);
  }
}
