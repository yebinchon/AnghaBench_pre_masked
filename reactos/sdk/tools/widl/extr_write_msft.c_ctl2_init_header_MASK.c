
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int magic1; int magic2; int posguid; int lcid; int lcid2; int varflags; int helpstring; int NameOffset; int helpfile; int CustomDataOffset; int res44; int res48; int dispatchpos; scalar_t__ nimpinfos; scalar_t__ nametablechars; scalar_t__ nametablecount; scalar_t__ helpcontext; scalar_t__ helpstringcontext; scalar_t__ nrtypeinfos; scalar_t__ flags; scalar_t__ version; } ;
struct TYPE_5__ {TYPE_1__ typelib_header; } ;
typedef TYPE_2__ msft_typelib_t ;



__attribute__((used)) static void FUNC_0(
 msft_typelib_t *VAR_0)
{
    VAR_0->typelib_header.magic1 = 0x5446534d;
    VAR_0->typelib_header.magic2 = 0x00010002;
    VAR_0->typelib_header.posguid = -1;
    VAR_0->typelib_header.lcid = 0x0409;
    VAR_0->typelib_header.lcid2 = 0x0;
    VAR_0->typelib_header.varflags = 0x40;
    VAR_0->typelib_header.version = 0;
    VAR_0->typelib_header.flags = 0;
    VAR_0->typelib_header.nrtypeinfos = 0;
    VAR_0->typelib_header.helpstring = -1;
    VAR_0->typelib_header.helpstringcontext = 0;
    VAR_0->typelib_header.helpcontext = 0;
    VAR_0->typelib_header.nametablecount = 0;
    VAR_0->typelib_header.nametablechars = 0;
    VAR_0->typelib_header.NameOffset = -1;
    VAR_0->typelib_header.helpfile = -1;
    VAR_0->typelib_header.CustomDataOffset = -1;
    VAR_0->typelib_header.res44 = 0x20;
    VAR_0->typelib_header.res48 = 0x80;
    VAR_0->typelib_header.dispatchpos = -1;
    VAR_0->typelib_header.nimpinfos = 0;
}
