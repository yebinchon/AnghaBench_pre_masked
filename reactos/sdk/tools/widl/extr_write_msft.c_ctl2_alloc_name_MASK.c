
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nametablecount; char nametablechars; } ;
struct TYPE_9__ {int* typelib_namehash_segment; TYPE_1__ typelib_header; scalar_t__* typelib_segment_data; } ;
typedef TYPE_2__ msft_typelib_t ;
struct TYPE_10__ {int hreftype; int next_hash; int namelen; } ;
typedef TYPE_3__ MSFT_NameIntro ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t,int,int ) ;
 int FUNC_1 (TYPE_2__*,char const*,char**) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int FUNC_4(
 msft_typelib_t *VAR_1,
 const char *VAR_2)
{
    int VAR_3;
    int VAR_4;
    MSFT_NameIntro *VAR_5;
    char *VAR_6;

    VAR_3 = FUNC_1(VAR_1, VAR_2, &VAR_6);

    VAR_4 = FUNC_2(VAR_1, VAR_6);
    if (VAR_4 != -1) return VAR_4;

    VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_3 + 8, 0);

    VAR_5 = (void *)(VAR_1->typelib_segment_data[VAR_0] + VAR_4);
    VAR_5->hreftype = -1;
    VAR_5->next_hash = -1;
    FUNC_3(&VAR_5->namelen, VAR_6, VAR_3);

    if (VAR_1->typelib_namehash_segment[VAR_6[2] & 0x7f] != -1)
 VAR_5->next_hash = VAR_1->typelib_namehash_segment[VAR_6[2] & 0x7f];

    VAR_1->typelib_namehash_segment[VAR_6[2] & 0x7f] = VAR_4;

    VAR_1->typelib_header.nametablecount += 1;
    VAR_1->typelib_header.nametablechars += *VAR_6;

    return VAR_4;
}
