
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct strsection_header {int dummy; } ;
struct string_index {int name_offset; int name_len; int data_offset; int data_len; int rosterindex; int hash; } ;
struct progidredirect_data {int size; int clsid_offset; scalar_t__ reserved; } ;
typedef scalar_t__ WCHAR ;
struct TYPE_4__ {int Length; int MaximumLength; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONG ;
typedef int GUID ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*,scalar_t__ const*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,int) ;

__attribute__((used)) static void FUNC_4(struct strsection_header *VAR_2, const WCHAR *VAR_3, const GUID *VAR_4,
    struct string_index **VAR_5, ULONG *VAR_6, ULONG *VAR_7, ULONG VAR_8)
{
    struct progidredirect_data *VAR_9;
    UNICODE_STRING VAR_10;
    GUID *VAR_11;
    WCHAR *VAR_12;




    FUNC_1(&VAR_10, VAR_3);
    FUNC_0(&VAR_10, VAR_1, VAR_0, &(*VAR_5)->hash);

    (*VAR_5)->name_offset = *VAR_6;
    (*VAR_5)->name_len = VAR_10.Length;
    (*VAR_5)->data_offset = (*VAR_5)->name_offset + FUNC_2(VAR_10.MaximumLength);
    (*VAR_5)->data_len = sizeof(*VAR_9);
    (*VAR_5)->rosterindex = VAR_8;

    *VAR_6 += FUNC_2(VAR_10.MaximumLength);


    VAR_9 = (struct progidredirect_data*)((BYTE*)VAR_2 + *VAR_6);
    VAR_9->size = sizeof(*VAR_9);
    VAR_9->reserved = 0;
    VAR_9->clsid_offset = *VAR_7;


    VAR_12 = (WCHAR*)((BYTE*)VAR_2 + (*VAR_5)->name_offset);
    FUNC_3(VAR_12, VAR_3, (*VAR_5)->name_len);
    VAR_12[(*VAR_5)->name_len/sizeof(WCHAR)] = 0;


    VAR_11 = (GUID*)((BYTE*)VAR_2 + VAR_9->clsid_offset);
    *VAR_11 = *VAR_4;


    *VAR_7 += sizeof(GUID);
    *VAR_6 += VAR_9->size;
    (*VAR_5) += 1;
}
