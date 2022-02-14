
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct p9_fd_opts {int port; int rfd; int wfd; int privport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (char*,int ,int *) ;
 int FUNC_4 (int ,char*) ;
 char* FUNC_5 (char**,char*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(char *VAR_7, struct p9_fd_opts *VAR_8)
{
 char *VAR_9;
 substring_t VAR_10[VAR_2];
 int VAR_11;
 char *VAR_12, *VAR_13;

 VAR_8->port = VAR_5;
 VAR_8->rfd = ~0;
 VAR_8->wfd = ~0;
 VAR_8->privport = 0;

 if (!VAR_7)
  return 0;

 VAR_13 = FUNC_1(VAR_7, VAR_1);
 if (!VAR_13) {
  FUNC_4(VAR_4,
    "failed to allocate copy of option string\n");
  return -VAR_0;
 }
 VAR_12 = VAR_13;

 while ((VAR_9 = FUNC_5(&VAR_12, ",")) != ((void*)0)) {
  int VAR_14;
  int VAR_15;
  if (!*VAR_9)
   continue;
  VAR_14 = FUNC_3(VAR_9, VAR_6, VAR_10);
  if ((VAR_14 != VAR_3) && (VAR_14 != 130)) {
   VAR_15 = FUNC_2(&VAR_10[0], &VAR_11);
   if (VAR_15 < 0) {
    FUNC_4(VAR_4,
      "integer field, but no integer?\n");
    continue;
   }
  }
  switch (VAR_14) {
  case 131:
   VAR_8->port = VAR_11;
   break;
  case 129:
   VAR_8->rfd = VAR_11;
   break;
  case 128:
   VAR_8->wfd = VAR_11;
   break;
  case 130:
   VAR_8->privport = 1;
   break;
  default:
   continue;
  }
 }

 FUNC_0(VAR_13);
 return 0;
}
