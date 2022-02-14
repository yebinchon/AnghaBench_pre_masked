
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int FUNC_0 (int,char*,char*,int,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int*,int*) ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
 __u32 VAR_4[VAR_0];
 __u32 VAR_5, VAR_6 = 0;
 int VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_7 = FUNC_1(VAR_3, &VAR_5, &VAR_4[VAR_5]);
  FUNC_0(VAR_7 == -1, "lookup_elem(result_map)",
        "i:%u err:%d errno:%d\n", VAR_5, VAR_7, VAR_1);
 }

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4[VAR_5] != VAR_2[VAR_5]) {
   VAR_6 = VAR_5;
   break;
  }
 }

 if (VAR_5 == VAR_0)
  return;

 FUNC_3("unexpected result\n");
 FUNC_3(" result: [");
 FUNC_3("%u", VAR_4[0]);
 for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++)
  FUNC_3(", %u", VAR_4[VAR_5]);
 FUNC_3("]\n");

 FUNC_3("expected: [");
 FUNC_3("%u", VAR_2[0]);
 for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++)
  FUNC_3(", %u", VAR_2[VAR_5]);
 FUNC_3("]\n");

 FUNC_0(VAR_2[VAR_6] != VAR_4[VAR_6],
       "unexpected result",
       "expected_results[%u] != results[%u] bpf_prog_linum:%u\n",
       VAR_6, VAR_6, FUNC_2());
}
