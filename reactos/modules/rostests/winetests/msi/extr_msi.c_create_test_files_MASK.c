
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    FUNC_0("msitest", ((void*)0));
    FUNC_3("msitest\\one.txt", "msitest\\one.txt", 100);
    FUNC_0("msitest\\first", ((void*)0));
    FUNC_3("msitest\\first\\two.txt", "msitest\\first\\two.txt", 100);
    FUNC_0("msitest\\second", ((void*)0));
    FUNC_3("msitest\\second\\three.txt", "msitest\\second\\three.txt", 100);

    FUNC_3("four.txt", "four.txt", 100);
    FUNC_3("five.txt", "five.txt", 100);
    FUNC_2("msitest.cab", VAR_0, "four.txt\0five.txt\0");

    FUNC_3("msitest\\filename", "msitest\\filename", 100);
    FUNC_3("msitest\\service.exe", "msitest\\service.exe", 100);

    FUNC_1("four.txt");
    FUNC_1("five.txt");
}
