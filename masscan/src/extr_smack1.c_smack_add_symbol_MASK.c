
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SMACK {unsigned int symbol_count; unsigned int* symbol_to_char; unsigned char* char_to_symbol; } ;



__attribute__((used)) static unsigned
FUNC_0(struct SMACK *VAR_0, unsigned VAR_1)
{
    unsigned VAR_2;
    unsigned VAR_3;


    for (VAR_2=1; VAR_2<=VAR_0->symbol_count; VAR_2++) {
        if (VAR_0->symbol_to_char[VAR_2] == VAR_1)
            return VAR_2;
    }


    VAR_0->symbol_count++;
    VAR_3 = VAR_0->symbol_count;


    VAR_0->symbol_to_char[VAR_3] = VAR_1;
    VAR_0->char_to_symbol[VAR_1] = (unsigned char)VAR_3;

    return VAR_3;
}
