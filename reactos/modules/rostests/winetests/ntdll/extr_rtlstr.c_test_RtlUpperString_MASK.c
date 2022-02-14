
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Length; int MaximumLength; char* Buffer; } ;
typedef TYPE_1__ STRING ;
typedef char CHAR ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_0;
    CHAR VAR_1;
    CHAR VAR_2;
    char VAR_3[257];
    char VAR_4[257];
    char VAR_5[257];
    STRING VAR_6;
    STRING VAR_7;
    STRING VAR_8;

    for (VAR_0 = 0; VAR_0 <= 255; VAR_0++) {
 VAR_1 = (CHAR) VAR_0;
 if (VAR_1 >= 'a' && VAR_1 <= 'z') {
     VAR_2 = VAR_1 - 'a' + 'A';
 } else {
     VAR_2 = VAR_1;
 }
 VAR_3[VAR_0] = VAR_1;
 VAR_4[VAR_0] = '\0';
 VAR_5[VAR_0] = VAR_2;
    }
    VAR_3[VAR_0] = '\0';
    VAR_4[VAR_0] = '\0';
    VAR_5[VAR_0] = '\0';
    VAR_6.Length = 256;
    VAR_6.MaximumLength = 256;
    VAR_6.Buffer = VAR_3;
    VAR_7.Length = 256;
    VAR_7.MaximumLength = 256;
    VAR_7.Buffer = VAR_4;
    VAR_8.Length = 256;
    VAR_8.MaximumLength = 256;
    VAR_8.Buffer = VAR_5;

    FUNC_2(&VAR_7, &VAR_6);
    FUNC_1(FUNC_0(VAR_7.Buffer, VAR_8.Buffer, 256) == 0,
       "RtlUpperString does not work as expected\n");
}
