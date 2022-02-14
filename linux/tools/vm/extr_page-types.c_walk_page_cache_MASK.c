
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,int ,int,int) ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,int *,int *) ;
 int VAR_9 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,struct stat*) ;
 int FUNC_9 (int ,struct stat*) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_10(void)
{
 struct stat VAR_11;

 VAR_5 = FUNC_2(VAR_7, VAR_2);
 VAR_8 = FUNC_2("/proc/self/pagemap", VAR_2);
 FUNC_6(VAR_3, &VAR_9, ((void*)0));

 if (FUNC_8(VAR_6, &VAR_11))
  FUNC_4("stat failed: %s\n", VAR_6);

 if (FUNC_1(VAR_11.st_mode)) {
  FUNC_9(VAR_6, &VAR_11);
 } else if (FUNC_0(VAR_11.st_mode)) {

  if (FUNC_5(VAR_6, VAR_10, 64, VAR_0 | VAR_1) < 0)
   FUNC_4("nftw failed: %s\n", VAR_6);
 } else
  FUNC_4("unhandled file type: %s\n", VAR_6);

 FUNC_3(VAR_5);
 FUNC_3(VAR_8);
 FUNC_7(VAR_3, VAR_4);
}
