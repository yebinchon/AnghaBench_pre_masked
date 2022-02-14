
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;
typedef int prog_fd ;
typedef int filename ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int*,long long*) ;
 int FUNC_2 (struct bpf_object*,char*) ;
 scalar_t__ FUNC_3 (char*,int ,struct bpf_object**,int*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,long long,long long,long long) ;
 scalar_t__ FUNC_7 (int,int ,int ,int*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int,char*,char*) ;

int FUNC_10(int VAR_6, char **VAR_7)
{
 struct bpf_object *VAR_8;
 int VAR_9, VAR_10;
 char VAR_11[256];
 int VAR_12, VAR_13;
 FILE *VAR_14;

 FUNC_9(VAR_11, sizeof(VAR_11), "%s_kern.o", VAR_7[0]);

 if (FUNC_3(VAR_11, VAR_0,
     &VAR_8, &VAR_10))
  return 1;

 VAR_9 = FUNC_2(VAR_8, "my_map");

 VAR_13 = FUNC_4("lo");

 FUNC_0(FUNC_7(VAR_13, VAR_4, VAR_5, &VAR_10,
     sizeof(VAR_10)) == 0);

 VAR_14 = FUNC_5("ping -4 -c5 localhost", "r");
 (void) VAR_14;

 for (VAR_12 = 0; VAR_12 < 5; VAR_12++) {
  long long VAR_15, VAR_16, VAR_17;
  int VAR_18;

  VAR_18 = VAR_2;
  FUNC_0(FUNC_1(VAR_9, &VAR_18, &VAR_15) == 0);

  VAR_18 = VAR_3;
  FUNC_0(FUNC_1(VAR_9, &VAR_18, &VAR_16) == 0);

  VAR_18 = VAR_1;
  FUNC_0(FUNC_1(VAR_9, &VAR_18, &VAR_17) == 0);

  FUNC_6("TCP %lld UDP %lld ICMP %lld bytes\n",
         VAR_15, VAR_16, VAR_17);
  FUNC_8(1);
 }

 return 0;
}
