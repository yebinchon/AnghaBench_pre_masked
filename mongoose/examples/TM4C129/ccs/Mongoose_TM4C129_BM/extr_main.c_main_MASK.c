
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct mg_connection {int dummy; } ;
struct mg_bind_opts {char const** error_string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int,int*,int ,int ,int ,int ) ;
 struct mg_connection* FUNC_12 (int *,char*,int ,struct mg_bind_opts) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (struct mg_connection*) ;

int FUNC_15(void) {






  FUNC_8(VAR_8);


  uint32_t VAR_15 =
      FUNC_3((VAR_11 | VAR_9 |
                              VAR_10 | VAR_7),
                             120000000);


  FUNC_7(1, 0);


  FUNC_9(0, 115200, VAR_15);
  FUNC_10("Mongoose example\n\n");



  FUNC_2(VAR_2, VAR_1);
  FUNC_2(VAR_5, VAR_4);
  FUNC_0(VAR_0, 0);
  FUNC_0(VAR_3, 0);






  uint32_t VAR_16, VAR_17;
  FUNC_1(&VAR_16, &VAR_17);
  uint8_t VAR_18[6];
  VAR_18[0] = ((VAR_16 >> 0) & 0xff);
  VAR_18[1] = ((VAR_16 >> 8) & 0xff);
  VAR_18[2] = ((VAR_16 >> 16) & 0xff);
  VAR_18[3] = ((VAR_17 >> 0) & 0xff);
  VAR_18[4] = ((VAR_17 >> 8) & 0xff);
  VAR_18[5] = ((VAR_17 >> 16) & 0xff);


  FUNC_11(VAR_15, VAR_18, 0, 0, 0, VAR_6);


  FUNC_13(&VAR_14, ((void*)0));
  const char *VAR_19;
  struct mg_bind_opts VAR_20 = {};
  VAR_20.error_string = &VAR_19;
  struct mg_connection *VAR_21 = FUNC_12(&VAR_14, "80", VAR_13, VAR_20);
  if (VAR_21 == ((void*)0)) {
    FUNC_10("Failed to create listener: %s\r\n", VAR_19);
    return 1;
  }
  FUNC_14(VAR_21);


  FUNC_6(VAR_15 / VAR_12);
  FUNC_4();
  FUNC_5();


  while (1) {
  }
}
