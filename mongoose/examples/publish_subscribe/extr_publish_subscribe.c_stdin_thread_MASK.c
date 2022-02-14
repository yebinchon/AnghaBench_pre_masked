
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,char const*,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_3(void *VAR_2) {
  int VAR_3, VAR_4 = *(int *) VAR_2;

  while ((VAR_3 = FUNC_1()) != VAR_0) {
    unsigned char VAR_5 = (unsigned char) VAR_3;
    if (FUNC_2(VAR_4, (const char *) &VAR_5, 1, 0) < 0) {
      FUNC_0(VAR_1, "Failed to send byte to the socket");
    }
  }
  return ((void*)0);
}
