
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {char* data; int data_size; int data_type; int * value_name; int file; } ;
typedef char WCHAR ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct parser*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct parser*,int ) ;
 scalar_t__ FUNC_7 (char*,char*,int ) ;

__attribute__((used)) static WCHAR *FUNC_8(struct parser *VAR_4, WCHAR *VAR_5)
{
    WCHAR *VAR_6, *VAR_7;
    static WCHAR VAR_8[] = {'H','K','E','Y','_','C','L','A','S','S','E','S','_','R','O','O','T'};
    unsigned int VAR_9 = 0;

    if (!(VAR_6 = FUNC_1(VAR_4->file)))
        return ((void*)0);

    if (FUNC_7(VAR_6, VAR_8, FUNC_0(VAR_8)))
        return VAR_6;


    while (VAR_6[VAR_9] && !FUNC_2(VAR_6[VAR_9])) VAR_9++;

    VAR_7 = VAR_6 + VAR_9;
    while (*VAR_7 == ' ' || *VAR_7 == '\t') VAR_7++;

    if (*VAR_7 == '=') VAR_7++;
    if (*VAR_7 == ' ') VAR_7++;

    VAR_6[VAR_9] = 0;

    if (FUNC_4(VAR_4, VAR_6) != VAR_0)
    {
        FUNC_5(VAR_3, VAR_6);
        return VAR_6;
    }

    VAR_4->value_name = ((void*)0);
    VAR_4->data_type = VAR_1;
    VAR_4->data = VAR_7;
    VAR_4->data_size = (FUNC_3(VAR_7) + 1) * sizeof(WCHAR);

    FUNC_6(VAR_4, VAR_2);
    return VAR_7;
}
