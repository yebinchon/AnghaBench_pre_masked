
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {char* escape2char; void** ch2token; int encode_buf; int encode_number_precision; int encode_keep_buffer; int decode_invalid_numbers; int encode_invalid_numbers; int decode_max_depth; int encode_max_depth; int encode_sparse_safe; int encode_sparse_ratio; int encode_sparse_convert; } ;
typedef TYPE_1__ json_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(lua_State *VAR_20)
{
    json_config_t *VAR_21;
    int VAR_22;

    VAR_21 = FUNC_1(VAR_20, sizeof(*VAR_21));


    FUNC_0(VAR_20);
    FUNC_2(VAR_20, VAR_19);
    FUNC_3(VAR_20, -2, "__gc");
    FUNC_4(VAR_20, -2);

    VAR_21->encode_sparse_convert = VAR_6;
    VAR_21->encode_sparse_ratio = VAR_7;
    VAR_21->encode_sparse_safe = VAR_8;
    VAR_21->encode_max_depth = VAR_4;
    VAR_21->decode_max_depth = VAR_1;
    VAR_21->encode_invalid_numbers = VAR_2;
    VAR_21->decode_invalid_numbers = VAR_0;
    VAR_21->encode_keep_buffer = VAR_3;
    VAR_21->encode_number_precision = VAR_5;
    for (VAR_22 = 0; VAR_22 < 256; VAR_22++)
        VAR_21->ch2token[VAR_22] = VAR_14;


    VAR_21->ch2token['{'] = VAR_15;
    VAR_21->ch2token['}'] = VAR_16;
    VAR_21->ch2token['['] = VAR_9;
    VAR_21->ch2token[']'] = VAR_10;
    VAR_21->ch2token[','] = VAR_12;
    VAR_21->ch2token[':'] = VAR_11;
    VAR_21->ch2token['\0'] = VAR_13;
    VAR_21->ch2token[' '] = VAR_18;
    VAR_21->ch2token['\t'] = VAR_18;
    VAR_21->ch2token['\n'] = VAR_18;
    VAR_21->ch2token['\r'] = VAR_18;


    VAR_21->ch2token['f'] = VAR_17;
    VAR_21->ch2token['i'] = VAR_17;
    VAR_21->ch2token['I'] = VAR_17;
    VAR_21->ch2token['n'] = VAR_17;
    VAR_21->ch2token['N'] = VAR_17;
    VAR_21->ch2token['t'] = VAR_17;
    VAR_21->ch2token['"'] = VAR_17;
    VAR_21->ch2token['+'] = VAR_17;
    VAR_21->ch2token['-'] = VAR_17;
    for (VAR_22 = 0; VAR_22 < 10; VAR_22++)
        VAR_21->ch2token['0' + VAR_22] = VAR_17;


    for (VAR_22 = 0; VAR_22 < 256; VAR_22++)
        VAR_21->escape2char[VAR_22] = 0;
    VAR_21->escape2char['"'] = '"';
    VAR_21->escape2char['\\'] = '\\';
    VAR_21->escape2char['/'] = '/';
    VAR_21->escape2char['b'] = '\b';
    VAR_21->escape2char['t'] = '\t';
    VAR_21->escape2char['n'] = '\n';
    VAR_21->escape2char['f'] = '\f';
    VAR_21->escape2char['r'] = '\r';
    VAR_21->escape2char['u'] = 'u';
}
