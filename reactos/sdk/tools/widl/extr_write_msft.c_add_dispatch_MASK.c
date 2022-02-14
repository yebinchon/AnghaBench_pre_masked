
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int dispatchpos; } ;
struct TYPE_15__ {TYPE_2__ typelib_header; } ;
typedef TYPE_3__ msft_typelib_t ;
struct TYPE_17__ {int hreftype; int next_hash; void* guid; } ;
struct TYPE_16__ {int flags; int oImpFile; int oGuid; } ;
struct TYPE_13__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
typedef TYPE_4__ MSFT_ImpInfo ;
typedef TYPE_5__ MSFT_GuidEntry ;
typedef void* GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int,int,int ,char*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,int,void**) ;
 int FUNC_4 (void**) ;

__attribute__((used)) static void FUNC_5(msft_typelib_t *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    MSFT_GuidEntry VAR_6;
    MSFT_ImpInfo VAR_7;
    GUID VAR_8 = {0x00020430,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
    GUID VAR_9 = {0x00020400,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};

    if(VAR_2->typelib_header.dispatchpos != -1) return;

    VAR_6.guid = VAR_8;
    VAR_6.hreftype = 2;
    VAR_6.next_hash = -1;
    VAR_5 = FUNC_4(&VAR_6.guid);
    VAR_3 = FUNC_3(VAR_2, VAR_5, &VAR_6.guid);
    if (VAR_3 == -1)
        VAR_3 = FUNC_2(VAR_2, &VAR_6);
    VAR_4 = FUNC_0(VAR_2, VAR_3, 2, 0, "stdole2.tlb");

    VAR_6.guid = VAR_9;
    VAR_6.hreftype = 1;
    VAR_6.next_hash = -1;
    VAR_7.flags = VAR_1 << 24 | VAR_0;
    VAR_7.oImpFile = VAR_4;
    VAR_5 = FUNC_4(&VAR_6.guid);
    VAR_3 = FUNC_3(VAR_2, VAR_5, &VAR_6.guid);
    if (VAR_3 == -1)
        VAR_3 = FUNC_2(VAR_2, &VAR_6);
    VAR_7.oGuid = VAR_3;
    VAR_2->typelib_header.dispatchpos = FUNC_1(VAR_2, &VAR_7) | 0x01;
}
