
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int out ;
typedef int in ;
typedef int buf ;
struct TYPE_8__ {int len; unsigned int* value; } ;
struct TYPE_7__ {unsigned int* data; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned int*) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 TYPE_1__ FUNC_2 (char*,int *) ;
 int FUNC_3 (unsigned char*,size_t const,unsigned int*,size_t const) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,unsigned int*,int) ;
 int FUNC_6 (unsigned int*,unsigned char*,int) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_8 (TYPE_1__*,unsigned int*,int) ;

__attribute__((used)) static int FUNC_9(int VAR_2)
{
    unsigned int VAR_3, VAR_4;
    unsigned char VAR_5[VAR_0], VAR_6[sizeof(unsigned int)];
    const size_t VAR_7 = VAR_1[VAR_2].len >= sizeof(unsigned int) ? sizeof(unsigned int) : VAR_1[VAR_2].len;
    OSSL_PARAM VAR_8 = FUNC_2("a", ((void*)0));

    FUNC_7(VAR_5, 0, sizeof(VAR_5));
    FUNC_5(VAR_5, VAR_1[VAR_2].value, sizeof(VAR_3));
    FUNC_6(&VAR_3, VAR_5, sizeof(VAR_3));
    VAR_8.data = &VAR_4;
    if (!FUNC_4(FUNC_1(&VAR_8, VAR_3)))
        return 0;
    FUNC_5(VAR_6, &VAR_4, sizeof(VAR_4));
    if (!FUNC_3(VAR_6, VAR_7, VAR_1[VAR_2].value, VAR_7))
        return 0;
    VAR_3 = 0;
    if (!FUNC_4(FUNC_0(&VAR_8, &VAR_3)))
        return 0;
    FUNC_5(VAR_6, &VAR_3, sizeof(VAR_3));
    if (!FUNC_3(VAR_6, sizeof(VAR_3), VAR_1[VAR_2].value, sizeof(VAR_3)))
        return 0;
    VAR_8.data = &VAR_4;
    return FUNC_8(&VAR_8, VAR_1[VAR_2].value, sizeof(unsigned int));
}
