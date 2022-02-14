
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int*,int*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,char const*,char*,int) ;
 int FUNC_5 (int,char**,char*) ;
 char* VAR_1 ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 char* FUNC_7 (int) ;
 int FUNC_8 () ;

int FUNC_9(int VAR_3, char **VAR_4)
{
 const char *VAR_5 = ((void*)0);
 int VAR_6 = -1;
 int VAR_7 = 0;
 int VAR_8 = -1;
 int VAR_9 = -1;
 int VAR_10;

 while ((VAR_10 = FUNC_5(VAR_3, VAR_4, "F:U:i:")) != -1) {
  switch (VAR_10) {

  case 'U':
   VAR_5 = VAR_1;
   break;
  case 'i':
   VAR_6 = FUNC_0(VAR_1);
   break;
  default:
   FUNC_8();
   goto out;
  }
 }

 if (VAR_6 < 0 || !VAR_5) {
  FUNC_8();
  goto out;
 }

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8 < 0) {
  FUNC_4(VAR_2, "bpf_obj_get(%s): %s(%d)\n",
   VAR_5, FUNC_7(VAR_0), VAR_0);
  goto out;
 }


 VAR_9 = FUNC_1(VAR_8, &VAR_7, &VAR_6, 0);
 if (VAR_9) {
  FUNC_6("bpf_map_update_elem");
  goto out;
 }

out:
 if (VAR_8 != -1)
  FUNC_3(VAR_8);
 return VAR_9;
}
