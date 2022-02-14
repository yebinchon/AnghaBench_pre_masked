
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int username ;
struct t_preconf {int generator; int modulus; } ;
struct t_num {char* data; void* len; } ;
struct t_client {int dummy; } ;
typedef int hexbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct t_client*) ;
 struct t_num* FUNC_6 (struct t_client*) ;
 unsigned char* FUNC_7 (struct t_client*,struct t_num*) ;
 struct t_client* FUNC_8 (char*,int *,int *,struct t_num*) ;
 int FUNC_9 (struct t_client*,char*) ;
 unsigned char* FUNC_10 (struct t_client*) ;
 scalar_t__ FUNC_11 (struct t_client*,unsigned char*) ;
 void* FUNC_12 (char*,char*) ;
 int FUNC_13 (unsigned char*,char*) ;
 int FUNC_14 (char*,int,char*) ;
 struct t_preconf* FUNC_15 (int) ;
 char* FUNC_16 (char*,char*,void*) ;
 char* FUNC_17 (char*,unsigned char*,int) ;

int
FUNC_18()
{
  int VAR_6;
  struct t_client * VAR_7;
  struct t_preconf *VAR_8;
  struct t_num VAR_9;
  struct t_num VAR_10;
  char VAR_11[VAR_3];
  char VAR_12[VAR_0];
  char VAR_13[VAR_1], VAR_14[VAR_1], VAR_15[VAR_2];
  unsigned char VAR_16[20];
  struct t_num * VAR_17;
  unsigned char * VAR_18;
  char VAR_19[128];

  FUNC_3("Enter username: ");
  FUNC_2(VAR_11, sizeof(VAR_11), VAR_5);
  VAR_11[FUNC_4(VAR_11) - 1] = '\0';
  FUNC_3("Enter index (from server): ");
  FUNC_2(VAR_12, sizeof(VAR_12), VAR_5);
  VAR_6 = FUNC_0(VAR_12);
  VAR_8 = FUNC_15(VAR_6 - 1);
  FUNC_3("Enter salt (from server): ");
  FUNC_2(VAR_12, sizeof(VAR_12), VAR_5);
  VAR_9.data = VAR_15;
  VAR_9.len = FUNC_12(VAR_9.data, VAR_12);

  VAR_7 = FUNC_8(VAR_11, &VAR_8->modulus, &VAR_8->generator, &VAR_9);
  if (VAR_7 == 0) {
    FUNC_3("invalid n, g\n");
    FUNC_1(1);
  }

  VAR_17 = FUNC_6(VAR_7);
  FUNC_3("A (to server): %s\n", FUNC_16(VAR_12, VAR_17->data, VAR_17->len));

  FUNC_14(VAR_19, 128, "Enter password:");
  FUNC_9(VAR_7, VAR_19);

  FUNC_3("Enter B (from server): ");
  FUNC_2(VAR_12, sizeof(VAR_12), VAR_5);
  VAR_10.data = VAR_13;
  VAR_10.len = FUNC_12(VAR_10.data, VAR_12);

  VAR_18 = FUNC_7(VAR_7, &VAR_10);
  FUNC_3("Session key: %s\n", FUNC_17(VAR_12, VAR_18, 40));
  FUNC_3("Response (to server): %s\n",
    FUNC_17(VAR_12, FUNC_10(VAR_7), VAR_4));

  FUNC_3("Enter server response: ");
  FUNC_2(VAR_12, sizeof(VAR_12), VAR_5);
  VAR_12[FUNC_4(VAR_12) - 1] = '\0';
  FUNC_13(VAR_16, VAR_12);

  if (FUNC_11(VAR_7, VAR_16) == 0)
    FUNC_3("Server authentication successful.\n");
  else
    FUNC_3("Server authentication failed.\n");

  FUNC_5(VAR_7);

  return 0;
}
