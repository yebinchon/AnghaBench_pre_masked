
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cs_stat_t ;
struct TYPE_2__ {char* enable_directory_listing; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*,char*) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (char*,char*) ;

__attribute__((used)) static const char *FUNC_9(void) {
  char VAR_2[VAR_0];
  cs_stat_t VAR_3;

  FUNC_5("./data/dav/b.txt");
  FUNC_6("./data/dav/d");


  VAR_1.enable_directory_listing = "yes";
  FUNC_3(VAR_2, "%s", "PROPFIND / HTTP/1.0\n\n");
  FUNC_2(VAR_2, "HTTP/1.1 207");
  FUNC_0(FUNC_8(VAR_2, "a.txt") != ((void*)0));
  FUNC_0(FUNC_8(VAR_2, "hidden_file.txt") == ((void*)0));


  FUNC_3(VAR_2, "%s", "MKCOL /d HTTP/1.0\nContent-Length:5\n\n12345");
  FUNC_2(VAR_2, "HTTP/1.1 415");
  FUNC_3(VAR_2, "%s", "MKCOL /d HTTP/1.0\n\n");
  FUNC_2(VAR_2, "HTTP/1.1 201");
  FUNC_3(VAR_2, "%s", "MKCOL /d HTTP/1.0\n\n");
  FUNC_2(VAR_2, "HTTP/1.1 405");
  FUNC_3(VAR_2, "%s", "MKCOL /x/d HTTP/1.0\n\n");
  FUNC_2(VAR_2, "HTTP/1.1 409");


  FUNC_3(VAR_2, "%s", "PUT /b.txt HTTP/1.0\nContent-Length: 5\n\n12345");
  FUNC_2(VAR_2, "HTTP/1.1 201");
  FUNC_3(VAR_2, "%s", "GET /data/dav/b.txt HTTP/1.0\n\n");
  FUNC_2(VAR_2, "HTTP/1.1 200");
  FUNC_0(FUNC_8(VAR_2, "Content-Length: 5\r\n") != 0);
  FUNC_1(VAR_2 + FUNC_7(VAR_2) - 7, "\r\n12345");


  FUNC_3(VAR_2, "%s", "DELETE /b.txt HTTP/1.0\n\n");
  FUNC_2(VAR_2, "HTTP/1.1 204");
  FUNC_0(FUNC_4("./data/dav/b.txt", &VAR_3) != 0);
  FUNC_3(VAR_2, "%s", "DELETE /d HTTP/1.0\n\n");
  FUNC_0(FUNC_4("./data/dav/d", &VAR_3) != 0);


  FUNC_3(VAR_2, "%s", "PROPFIND /__blah.txt HTTP/1.0\n\n");
  FUNC_2(VAR_2, "HTTP/1.1 404");

  return ((void*)0);
}
