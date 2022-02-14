
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_test {char* descr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_test*,int,int*,int*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct bpf_test*) ;
 struct bpf_test* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_4(bool VAR_5, unsigned int VAR_6, unsigned int VAR_7)
{
 int VAR_8, VAR_9 = 0, VAR_10 = 0;

 for (VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8++) {
  struct bpf_test *VAR_11 = &VAR_3[VAR_8];




  if (FUNC_3(VAR_11) && VAR_4) {
   FUNC_1("#%d/u %s SKIP\n", VAR_8, VAR_11->descr);
   VAR_2++;
  } else if (FUNC_3(VAR_11)) {
   if (!VAR_5)
    FUNC_2(0);
   FUNC_1("#%d/u %s ", VAR_8, VAR_11->descr);
   FUNC_0(VAR_11, 1, &VAR_9, &VAR_10);
   if (!VAR_5)
    FUNC_2(1);
  }

  if (VAR_5) {
   FUNC_1("#%d/p %s SKIP\n", VAR_8, VAR_11->descr);
   VAR_2++;
  } else {
   FUNC_1("#%d/p %s ", VAR_8, VAR_11->descr);
   FUNC_0(VAR_11, 0, &VAR_9, &VAR_10);
  }
 }

 FUNC_1("Summary: %d PASSED, %d SKIPPED, %d FAILED\n", VAR_9,
        VAR_2, VAR_10);
 return VAR_10 ? VAR_0 : VAR_1;
}
