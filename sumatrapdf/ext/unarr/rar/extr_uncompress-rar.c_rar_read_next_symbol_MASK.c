
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint16_t ;
struct huffman_code {scalar_t__ tablesize; TYPE_4__* tree; TYPE_1__* table; } ;
struct TYPE_10__ {scalar_t__ available; } ;
struct TYPE_11__ {TYPE_2__ br; } ;
struct TYPE_13__ {TYPE_3__ uncomp; } ;
typedef TYPE_5__ ar_archive_rar ;
struct TYPE_12__ {int* branches; } ;
struct TYPE_9__ {int length; int value; } ;


 scalar_t__ FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (struct huffman_code*,int) ;
 int FUNC_3 (struct huffman_code*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(ar_archive_rar *VAR_0, struct huffman_code *VAR_1)
{
    int VAR_2 = 0;

    if (!VAR_1->table && !FUNC_3(VAR_1))
        return -1;


    if (VAR_1->tablesize <= VAR_0->uncomp.br.available) {
        uint16_t VAR_3 = (uint16_t)FUNC_0(VAR_0, VAR_1->tablesize);
        int VAR_4 = VAR_1->table[VAR_3].length;
        int VAR_5 = VAR_1->table[VAR_3].value;

        if (VAR_4 < 0) {
            FUNC_4("Invalid data in bitstream");
            return -1;
        }
        if (VAR_4 <= VAR_1->tablesize) {

            VAR_0->uncomp.br.available += VAR_1->tablesize - VAR_4;
            return VAR_5;
        }

        VAR_2 = VAR_5;
    }

    while (!FUNC_2(VAR_1, VAR_2)) {
        uint8_t VAR_6;
        if (!FUNC_1(VAR_0, 1))
            return -1;
        VAR_6 = (uint8_t)FUNC_0(VAR_0, 1);
        if (VAR_1->tree[VAR_2].branches[VAR_6] < 0) {
            FUNC_4("Invalid data in bitstream");
            return -1;
        }
        VAR_2 = VAR_1->tree[VAR_2].branches[VAR_6];
    }

    return VAR_1->tree[VAR_2].branches[0];
}
