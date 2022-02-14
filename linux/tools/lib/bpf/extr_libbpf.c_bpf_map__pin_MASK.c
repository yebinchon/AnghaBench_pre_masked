
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int fd; } ;
typedef int errmsg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (char const*) ;
 int VAR_2 ;
 char* FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(struct bpf_map *VAR_3, const char *VAR_4)
{
 char *VAR_5, VAR_6[VAR_1];
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7)
  return VAR_7;

 if (VAR_3 == ((void*)0)) {
  FUNC_4("invalid map pointer\n");
  return -VAR_0;
 }

 if (FUNC_0(VAR_3->fd, VAR_4)) {
  VAR_5 = FUNC_2(VAR_2, VAR_6, sizeof(VAR_6));
  FUNC_4("failed to pin map: %s\n", VAR_5);
  return -VAR_2;
 }

 FUNC_3("pinned map '%s'\n", VAR_4);

 return 0;
}
