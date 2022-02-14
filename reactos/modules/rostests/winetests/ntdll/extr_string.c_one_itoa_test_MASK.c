
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; char* Buffer; int base; } ;
typedef TYPE_1__ ulong2str_t ;
typedef char* LPSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (int,char*,int,int,int ,char*,char*) ;
 char* FUNC_3 (int,char*,int ) ;

__attribute__((used)) static void FUNC_4(int VAR_1, const ulong2str_t *VAR_2)
{
    char VAR_3[VAR_0 + 1];
    int VAR_4;
    LPSTR VAR_5;

    FUNC_1(VAR_3, '-', VAR_0);
    VAR_3[VAR_0] = '\0';
    VAR_4 = VAR_2->value;
    VAR_5 = FUNC_3(VAR_4, VAR_3, VAR_2->base);
    FUNC_2(VAR_5 == VAR_3,
       "(test %d): _itoa(%d, [out], %d) has result %p, expected: %p\n",
       VAR_1, VAR_4, VAR_2->base, VAR_5, VAR_3);
    FUNC_2(FUNC_0(VAR_3, VAR_2->Buffer, VAR_0) == 0,
       "(test %d): _itoa(%d, [out], %d) assigns string \"%s\", expected: \"%s\"\n",
       VAR_1, VAR_4, VAR_2->base, VAR_3, VAR_2->Buffer);
}
