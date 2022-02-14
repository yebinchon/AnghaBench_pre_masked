
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {size_t len; size_t size; char* start; } ;



__attribute__((used)) static void FUNC_0(struct buf *VAR_0, char VAR_1)
{
    if (VAR_0->len < VAR_0->size) {
        VAR_0->start[VAR_0->len] = VAR_1;
        VAR_0->len++;
    }
}
