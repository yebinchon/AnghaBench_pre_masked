
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_diag_entry {scalar_t__ def; unsigned long long I; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 unsigned long long FUNC_1 (unsigned long long) ;
 int FUNC_2 (int ,char const*,char*,size_t,scalar_t__,char) ;
 int FUNC_3 (char*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_4(const char *VAR_2, size_t VAR_3,
      struct hws_diag_entry *VAR_4)
{
 struct hws_diag_entry *VAR_5 = VAR_4;

 struct hws_diag_entry VAR_6;
 unsigned long long VAR_7 = FUNC_1(*(unsigned long long *)VAR_4);

 VAR_6.def = FUNC_0(VAR_4->def);
 VAR_6.I = VAR_7 >> 32 & 0x1;
 VAR_5 = &VAR_6;

 if (VAR_5->def < VAR_0) {
  FUNC_3("Invalid AUX trace diagnostic entry [%#08zx]\n", VAR_3);
  return 0;
 }
 FUNC_2(VAR_1, VAR_2, "    [%#08zx] Diag    Def:%04x %c\n",
        VAR_3, VAR_5->def, VAR_5->I ? 'I' : ' ');
 return 1;
}
