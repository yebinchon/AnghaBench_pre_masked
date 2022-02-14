
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct PcapFile {int bytes_read; int file_size; int * fp; } ;



unsigned FUNC_0(struct PcapFile *VAR_0, uint64_t *VAR_1)
{
    if (VAR_1)
        *VAR_1 = VAR_0->bytes_read;

    if (VAR_0->fp == ((void*)0))
        return 100;
    return (unsigned)(VAR_0->bytes_read*100/VAR_0->file_size);
}
