
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long seek_sector; long long sectors; long long seek_head; long long heads; long long seek_cylinder; long long seekto; } ;
typedef TYPE_1__ idectl_desc ;



void FUNC_0( void *VAR_0, int VAR_1, int VAR_2 ) {
    idectl_desc *VAR_3 = (idectl_desc *)VAR_0;
    long long VAR_4 = ((((long long)VAR_2) << 32) | (VAR_1 & 0xffffffff));

    VAR_3->seek_sector = VAR_4 % VAR_3->sectors;
    VAR_4 /= VAR_3->sectors;
    VAR_3->seek_head = VAR_4 % VAR_3->heads;
    VAR_4 /= VAR_3->heads;
    VAR_3->seek_cylinder = VAR_4;
    VAR_3->seekto = VAR_4;
}
