
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RRegex ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,char*) ;
 int * FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6() {
 RRegex *VAR_0 = FUNC_5 ("(eax|ebx)", "e");
 FUNC_0 ("result (%s) = %d\n", "mov eax", FUNC_4("(eax|ebx)", "e", "mov eax"));
 FUNC_0 ("result (%s) = %d\n", "mov ebx", FUNC_4("(eax|ebx)", "e", "mov ebx"));
 FUNC_0 ("result (%s) = %d\n", "mov eax", FUNC_4("(eax|ebx)", "e", "mov ecx"));
 FUNC_0 ("result (%s) = %d\n", "mov ebx", FUNC_4("(eax|ecx)", "e", "mov ebx"));
 FUNC_0 ("result (%s) = %d\n", "mov eax", FUNC_1(VAR_0, "mov eax"));
 FUNC_0 ("result (%s) = %d\n", "mov ebx", FUNC_1(VAR_0, "mov ebx"));
 FUNC_0 ("result (%s) = %d\n", "mov eax", FUNC_2(VAR_0, "mov eax", 0, 0, 1));
 FUNC_0 ("result (%s) = %d\n", "mov ebx", FUNC_2(VAR_0, "mov ebx", 0, 0, 1));
 FUNC_3 (VAR_0);
}
