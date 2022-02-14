
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int available; int at_eof; int bits; } ;
struct TYPE_10__ {TYPE_3__ br; } ;
struct TYPE_8__ {size_t data_left; } ;
struct TYPE_7__ {int stream; } ;
struct TYPE_11__ {TYPE_4__ uncomp; TYPE_2__ progress; TYPE_1__ super; } ;
typedef TYPE_5__ ar_archive_rar ;


 size_t FUNC_0 (int ,int*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(ar_archive_rar *VAR_0, int VAR_1)
{
    uint8_t VAR_2[8];
    int VAR_3, VAR_4;

    VAR_3 = (64 - VAR_0->uncomp.br.available) / 8;
    if (VAR_0->progress.data_left < (size_t)VAR_3)
        VAR_3 = (int)VAR_0->progress.data_left;

    if (VAR_1 > VAR_0->uncomp.br.available + 8 * VAR_3 || FUNC_0(VAR_0->super.stream, VAR_2, VAR_3) != (size_t)VAR_3) {
        if (!VAR_0->uncomp.br.at_eof) {
            FUNC_1("Unexpected EOF during decompression (truncated file?)");
            VAR_0->uncomp.br.at_eof = 1;
        }
        return 0;
    }
    VAR_0->progress.data_left -= VAR_3;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_0->uncomp.br.bits = (VAR_0->uncomp.br.bits << 8) | VAR_2[VAR_4];
    }
    VAR_0->uncomp.br.available += 8 * VAR_3;
    return 1;
}
