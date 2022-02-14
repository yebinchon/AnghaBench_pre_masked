
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_block {char* buffer; int len; scalar_t__ ptr; } ;



__attribute__((used)) static void
FUNC_0(struct read_block * VAR_0, char * VAR_1, int VAR_2) {
 VAR_0->buffer = VAR_1;
 VAR_0->len = VAR_2;
 VAR_0->ptr = 0;
}
