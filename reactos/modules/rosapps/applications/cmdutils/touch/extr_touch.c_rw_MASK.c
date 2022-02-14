
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct stat {scalar_t__ st_size; int st_mode; } ;
typedef int off_t ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int,int *,int) ;
 int FUNC_8 (int,int *,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*,int ) ;

int
FUNC_12(char *VAR_3, struct stat *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 u_char VAR_9;


 if (!FUNC_1(VAR_4->st_mode) && !FUNC_0(VAR_4->st_mode)) {
  FUNC_11("%s: %s", VAR_3, FUNC_9(0));
  return (1);
 }

 VAR_7 = VAR_8 = 0;
 if ((VAR_6 = FUNC_6(VAR_3, VAR_1, 0)) == -1) {
  if (!VAR_5 || FUNC_2(VAR_3, VAR_0))
   goto err;
  if ((VAR_6 = FUNC_6(VAR_3, VAR_1, 0)) == -1)
   goto err;
  VAR_7 = 1;
 }

 if (VAR_4->st_size != 0) {
  if (FUNC_7(VAR_6, &VAR_9, sizeof(VAR_9)) != sizeof(VAR_9))
   goto err;
  if (FUNC_5(VAR_6, (off_t)0, VAR_2) == -1)
   goto err;
  if (FUNC_8(VAR_6, &VAR_9, sizeof(VAR_9)) != sizeof(VAR_9))
   goto err;
 } else {
  if (FUNC_8(VAR_6, &VAR_9, sizeof(VAR_9)) != sizeof(VAR_9)) {
err: VAR_8 = 1;
   FUNC_10("%s", VAR_3);

  } else if (FUNC_3(VAR_6, (off_t)0)) {
   VAR_8 = 1;
   FUNC_10("%s: file modified", VAR_3);
  }
 }

 if (FUNC_4(VAR_6) && VAR_8 != 1) {
  VAR_8 = 1;
  FUNC_10("%s", VAR_3);
 }
 if (VAR_7 && FUNC_2(VAR_3, VAR_4->st_mode) && VAR_8 != 1) {
  VAR_8 = 1;
  FUNC_10("%s: permissions modified", VAR_3);
 }
 return (VAR_8);
}
