
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (char*,int*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static bool FUNC_6(char const* VAR_0, ut8* VAR_1) {
 char *VAR_2 = FUNC_2 (FUNC_5 (VAR_0) + 1);
 char *VAR_3 = FUNC_2 (FUNC_5 (VAR_0) + 1);
 char const *VAR_4 = FUNC_3 (VAR_0, '.');
 ut8 VAR_5;
 int VAR_6;
 bool VAR_7 = 0;





 if (!VAR_4) {
  goto end;
 }
 FUNC_4 (VAR_3, VAR_0, VAR_4 - VAR_0 + 1);
 VAR_3[VAR_4 - VAR_0 + 1] = '\0';
 FUNC_4 (VAR_2, VAR_4 + 1, FUNC_5 (VAR_4));
 if (!FUNC_0 (VAR_3, &VAR_5)) {
  goto end;
 }
 if (1 < FUNC_5 (VAR_2)
  || VAR_2[0] < '0' || '7' < VAR_2[0]) {
  VAR_7 = 0;
  goto end;
 }
 VAR_6 = VAR_2[0] - '0';
 if (0x20 <= VAR_5 && VAR_5 < 0x30) {
  *VAR_1 = (VAR_5 - 0x20) * 8 + VAR_6;
  VAR_7 = 1;
 } else if (0x80 <= VAR_5 && !(VAR_5%8)) {
  *VAR_1 = VAR_5 + VAR_6;
  VAR_7 = 1;
 }
end:
 FUNC_1 (VAR_2); VAR_2 = 0;
 FUNC_1 (VAR_3); VAR_3 = 0;
 return VAR_7;
}
