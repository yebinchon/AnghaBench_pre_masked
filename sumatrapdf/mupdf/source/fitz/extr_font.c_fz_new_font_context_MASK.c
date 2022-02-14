
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* font; } ;
typedef TYPE_2__ fz_context ;
struct TYPE_6__ {int realloc; int free; int alloc; TYPE_2__* user; } ;
struct TYPE_8__ {int ctx_refs; TYPE_1__ ftmemory; int * load_font; scalar_t__ ftlib_refs; int * ftlib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (TYPE_2__*,int ) ;

void FUNC_1(fz_context *VAR_4)
{
 VAR_4->font = FUNC_0(VAR_4, VAR_3);
 VAR_4->font->ctx_refs = 1;
 VAR_4->font->ftlib = ((void*)0);
 VAR_4->font->ftlib_refs = 0;
 VAR_4->font->load_font = ((void*)0);
 VAR_4->font->ftmemory.user = VAR_4;
 VAR_4->font->ftmemory.alloc = VAR_0;
 VAR_4->font->ftmemory.free = VAR_1;
 VAR_4->font->ftmemory.realloc = VAR_2;
}
