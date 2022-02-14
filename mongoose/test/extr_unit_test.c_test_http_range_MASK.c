
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static const char *FUNC_6(void) {
  char VAR_1[VAR_0];

  FUNC_3(VAR_1, "%s", "GET /data/range.txt HTTP/1.0\n\n");
  FUNC_2(VAR_1, "HTTP/1.1 200 OK");
  FUNC_0(FUNC_5(VAR_1, "Content-Length: 312\r\n") != 0);


  FUNC_3(VAR_1, "%s", "GET /data/range.txt HTTP/1.0\nRange: bytes=5-10\n\n");
  FUNC_2(VAR_1, "HTTP/1.1 206 Partial Content");
  FUNC_0(FUNC_5(VAR_1, "Content-Length: 6\r\n") != 0);
  FUNC_0(FUNC_5(VAR_1, "Content-Range: bytes 5-10/312\r\n") != 0);
  FUNC_1(VAR_1 + FUNC_4(VAR_1) - 8, "\r\n of co");


  FUNC_3(VAR_1, "%s", "GET /data/range.txt HTTP/1.0\nRange: bytes=300-\n\n");
  FUNC_2(VAR_1, "HTTP/1.1 206 Partial Content");
  FUNC_0(FUNC_5(VAR_1, "Content-Length: 12\r\n") != 0);
  FUNC_0(FUNC_5(VAR_1, "Content-Range: bytes 300-311/312\r\n") != 0);
  FUNC_1(VAR_1 + FUNC_4(VAR_1) - 14, "\r\nis disease.\n");


  FUNC_3(VAR_1, "%s", "GET /data/range.txt HTTP/1.0\nRange: bytes=1000-\n\n");
  FUNC_2(VAR_1, "HTTP/1.1 416");
  FUNC_0(FUNC_5(VAR_1, "Content-Length: 0\r\n") != 0);
  FUNC_0(FUNC_5(VAR_1, "Content-Range: bytes */312\r\n") != 0);


  FUNC_3(VAR_1, "%s", "GET /data/range.txt HTTP/1.0\nRange: bytes=0-312\n\n");
  FUNC_2(VAR_1, "HTTP/1.1 416");

  return ((void*)0);
}
