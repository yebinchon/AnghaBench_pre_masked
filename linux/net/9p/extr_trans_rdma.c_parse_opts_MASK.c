
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct p9_rdma_opts {int port; int sq_depth; int rq_depth; int timeout; int privport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (char*,int ,int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,char*) ;
 char* FUNC_6 (char**,char*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_7(char *VAR_10, struct p9_rdma_opts *VAR_11)
{
 char *VAR_12;
 substring_t VAR_13[VAR_2];
 int VAR_14;
 char *VAR_15, *VAR_16;

 VAR_11->port = VAR_5;
 VAR_11->sq_depth = VAR_7;
 VAR_11->rq_depth = VAR_6;
 VAR_11->timeout = VAR_8;
 VAR_11->privport = 0;

 if (!VAR_10)
  return 0;

 VAR_16 = FUNC_1(VAR_10, VAR_1);
 if (!VAR_16) {
  FUNC_5(VAR_4,
    "failed to allocate copy of option string\n");
  return -VAR_0;
 }
 VAR_15 = VAR_16;

 while ((VAR_12 = FUNC_6(&VAR_15, ",")) != ((void*)0)) {
  int VAR_17;
  int VAR_18;
  if (!*VAR_12)
   continue;
  VAR_17 = FUNC_3(VAR_12, VAR_9, VAR_13);
  if ((VAR_17 != VAR_3) && (VAR_17 != 131)) {
   VAR_18 = FUNC_2(&VAR_13[0], &VAR_14);
   if (VAR_18 < 0) {
    FUNC_5(VAR_4,
      "integer field, but no integer?\n");
    continue;
   }
  }
  switch (VAR_17) {
  case 132:
   VAR_11->port = VAR_14;
   break;
  case 129:
   VAR_11->sq_depth = VAR_14;
   break;
  case 130:
   VAR_11->rq_depth = VAR_14;
   break;
  case 128:
   VAR_11->timeout = VAR_14;
   break;
  case 131:
   VAR_11->privport = 1;
   break;
  default:
   continue;
  }
 }

 VAR_11->rq_depth = FUNC_4(VAR_11->rq_depth, VAR_11->sq_depth);
 FUNC_0(VAR_16);
 return 0;
}
