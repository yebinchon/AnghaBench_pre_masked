
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int str ;
typedef int buf ;
struct TYPE_3__ {int length; char* data; int max; } ;
typedef TYPE_1__ BUF_MEM ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (char*,int,char const*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(void)
{
    int VAR_2 = 0;
    BIO *VAR_3;
    BUF_MEM VAR_4;
    static const char VAR_5[] = "BIO test\n";
    char VAR_6[100];

    VAR_3 = FUNC_1(FUNC_3());
    if (!FUNC_8(VAR_3))
        goto finish;
    VAR_4.length = sizeof(VAR_5);
    VAR_4.data = (char *) VAR_5;
    VAR_4.max = VAR_4.length;
    FUNC_5(VAR_3, &VAR_4, VAR_1);
    FUNC_4(VAR_3, VAR_0);
    if (!FUNC_6(FUNC_2(VAR_3, VAR_6, sizeof(VAR_6)), sizeof(VAR_5)))
        goto finish;
    if (!FUNC_7(VAR_6, sizeof(VAR_5), VAR_5, sizeof(VAR_5)))
        goto finish;
    VAR_2 = 1;

finish:
    FUNC_0(VAR_3);
    return VAR_2;
}
