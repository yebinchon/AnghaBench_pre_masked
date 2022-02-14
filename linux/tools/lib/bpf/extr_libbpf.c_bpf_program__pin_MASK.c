
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct bpf_program {TYPE_1__ instances; int section_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bpf_program*,char const*,int) ;
 int FUNC_1 (struct bpf_program*,char*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,int,char*,char const*,int) ;

int FUNC_7(struct bpf_program *VAR_3, const char *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  return VAR_6;

 if (VAR_3 == ((void*)0)) {
  FUNC_4("invalid program pointer\n");
  return -VAR_0;
 }

 if (VAR_3->instances.nr <= 0) {
  FUNC_4("no instances of prog %s to pin\n",
      VAR_3->section_name);
  return -VAR_0;
 }

 if (VAR_3->instances.nr == 1) {

  return FUNC_0(VAR_3, VAR_4, 0);
 }

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->instances.nr; VAR_5++) {
  char VAR_7[VAR_2];
  int VAR_8;

  VAR_8 = FUNC_6(VAR_7, VAR_2, "%s/%d", VAR_4, VAR_5);
  if (VAR_8 < 0) {
   VAR_6 = -VAR_0;
   goto err_unpin;
  } else if (VAR_8 >= VAR_2) {
   VAR_6 = -VAR_1;
   goto err_unpin;
  }

  VAR_6 = FUNC_0(VAR_3, VAR_7, VAR_5);
  if (VAR_6)
   goto err_unpin;
 }

 return 0;

err_unpin:
 for (VAR_5 = VAR_5 - 1; VAR_5 >= 0; VAR_5--) {
  char VAR_9[VAR_2];
  int VAR_10;

  VAR_10 = FUNC_6(VAR_9, VAR_2, "%s/%d", VAR_4, VAR_5);
  if (VAR_10 < 0)
   continue;
  else if (VAR_10 >= VAR_2)
   continue;

  FUNC_1(VAR_3, VAR_9, VAR_5);
 }

 FUNC_5(VAR_4);

 return VAR_6;
}
