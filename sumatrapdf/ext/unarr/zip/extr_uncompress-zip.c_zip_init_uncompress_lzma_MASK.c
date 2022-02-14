
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int Free; int Alloc; } ;
struct TYPE_6__ {int dec; int finish; TYPE_1__ alloc; } ;
struct TYPE_5__ {TYPE_3__ lzma; } ;
struct ar_archive_zip_uncomp {TYPE_2__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_1(struct ar_archive_zip_uncomp *VAR_4, uint16_t VAR_5)
{
    VAR_4->state.lzma.alloc.Alloc = VAR_2;
    VAR_4->state.lzma.alloc.Free = VAR_3;
    VAR_4->state.lzma.finish = (VAR_5 & (1 << 1)) ? VAR_1 : VAR_0;
    FUNC_0(&VAR_4->state.lzma.dec);
    return 1;
}
