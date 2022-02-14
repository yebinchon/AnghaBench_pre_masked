
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_device_info {char* model; char* driver; } ;
typedef int media_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int ,struct media_device_info*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int VAR_3 ;
 int FUNC_6 (char*,char*,...) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int) ;

int FUNC_9(int VAR_4, char **VAR_5)
{
 int VAR_6;
 char VAR_7[256];
 int VAR_8 = 0;
 struct media_device_info VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_4 < 2) {
  FUNC_6("Usage: %s [-d </dev/mediaX>]\n", VAR_5[0]);
  FUNC_0(-1);
 }


 while ((VAR_6 = FUNC_1(VAR_4, VAR_5, "d:")) != -1) {
  switch (VAR_6) {
  case 'd':
   FUNC_8(VAR_7, VAR_3, sizeof(VAR_7) - 1);
   VAR_7[sizeof(VAR_7)-1] = '\0';
   break;
  default:
   FUNC_6("Usage: %s [-d </dev/mediaX>]\n", VAR_5[0]);
   FUNC_0(-1);
  }
 }

 if (FUNC_2() != 0)
  FUNC_4("Please run the test as root - Exiting.\n");


 VAR_11 = FUNC_5(VAR_7, VAR_1);
 if (VAR_11 == -1) {
  FUNC_6("Media Device open errno %s\n", FUNC_7(VAR_2));
  FUNC_0(-1);
 }

 VAR_10 = FUNC_3(VAR_11, VAR_0, &VAR_9);
 if (VAR_10 < 0)
  FUNC_6("Media Device Info errno %s\n", FUNC_7(VAR_2));
 else
  FUNC_6("Media device model %s driver %s\n",
   VAR_9.model, VAR_9.driver);
}
