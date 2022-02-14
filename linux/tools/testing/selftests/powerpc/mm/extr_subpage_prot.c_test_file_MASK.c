
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_sigaction; } ;
typedef int off_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 char* VAR_8 ;
 int FUNC_1 (int,int ,int ) ;
 void* FUNC_2 (int *,int,int,int ,int,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (void*,int) ;
 int VAR_9 ;
 int FUNC_7 (int ,struct sigaction*,int *) ;
 int FUNC_8 () ;

int FUNC_9(void)
{
 struct sigaction VAR_10 = {
  .sa_sigaction = VAR_9,
  .sa_flags = VAR_5
 };
 void *VAR_11;
 off_t VAR_12;
 int VAR_13;

 FUNC_0(!FUNC_8());

 VAR_13 = FUNC_3(VAR_8, VAR_2);
 if (VAR_13 == -1) {
  FUNC_4("failed to open file");
  return 1;
 }
 FUNC_7(VAR_7, &VAR_10, ((void*)0));

 VAR_12 = FUNC_1(VAR_13, 0, VAR_6);
 if (VAR_12 & 0xffff)
  VAR_12 &= ~0xfffful;

 VAR_11 = FUNC_2(((void*)0), VAR_12, VAR_3 | VAR_4,
    VAR_1, VAR_13, 0);
 if (VAR_11 == VAR_0) {
  FUNC_4("failed to map file");
  return 1;
 }
 FUNC_5("allocated %s for 0x%lx bytes at %p\n",
        VAR_8, VAR_12, VAR_11);

 FUNC_5("testing file map...\n");

 return FUNC_6(VAR_11, VAR_12);
}
