
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char const* tls_sct_list; int tls_sct_list_len; char* sct_text_file; int sct_dir; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
    const unsigned char VAR_3[] = "\x00\x78"
        "\x00\x76"
        "\x00"

        "\xDF\x1C\x2E\xC1\x15\x00\x94\x52\x47\xA9\x61\x68\x32\x5D\xDC\x5C\x79"
        "\x59\xE8\xF7\xC6\xD3\x88\xFC\x00\x2E\x0B\xBD\x3F\x74\xD7\x64"
        "\x00\x00\x01\x3D\xDB\x27\xDF\x93"
        "\x00\x00"
        ""
        "\x04\x03"
        "\x00\x47"

        "\x30\x45\x02\x20\x48\x2F\x67\x51\xAF\x35\xDB\xA6\x54\x36\xBE\x1F\xD6"
        "\x64\x0F\x3D\xBF\x9A\x41\x42\x94\x95\x92\x45\x30\x28\x8F\xA3\xE5\xE2"
        "\x3E\x06\x02\x21\x00\xE4\xED\xC0\xDB\x3A\xC5\x72\xB1\xE2\xF5\xE8\xAB"
        "\x6A\x68\x06\x53\x98\x7D\xCF\x41\x02\x7D\xFE\xFF\xA1\x05\x51\x9D\x89"
        "\xED\xBF\x08";

    FUNC_1();
    if (VAR_1 == ((void*)0))
        return 0;
    VAR_1->tls_sct_list = VAR_3;
    VAR_1->tls_sct_list_len = 0x7a;
    VAR_1->sct_dir = VAR_0;
    VAR_1->sct_text_file = "tls1.sct";
    FUNC_0();
    return VAR_2;
}
